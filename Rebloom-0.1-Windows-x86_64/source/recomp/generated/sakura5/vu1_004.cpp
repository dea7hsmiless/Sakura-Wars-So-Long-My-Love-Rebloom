#include "ps2/vu_ops.hpp"
#include <cstdio>

namespace gen {

using namespace ps2;
using namespace ps2::vuops;

void vu1_4941699582548AB7(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 3224u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i15 = r.vi[15];
    goto L_0C98;
L_0C98: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0CA0: { ++fl.t; set_vi(i1, 0u + 63u); }
L_0CA8: { ++fl.t; pend = true; }
L_0CB0: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1638; }
    fl.finish(r); r.vi[1] = i1; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3256u + sh) & 16383u));
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

void vu1_B1F180F65D1B029F(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 504u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i8 = r.vi[8];
    goto L_01F8;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; vu::interpret(1, ((544u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; vu::interpret(1, jpc);
    return;
}

void vu1_874E6B8D79B849E3(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 4808u) & 16383u;
    (void)sh;
    unsigned st = 0u;
    static constexpr std::uint8_t ks_1308[] = {0, 3};
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i15 = r.vi[15];
    goto L_12C8;
L_12C8: { ++fl.t; set_vi(i1, 0u + 256u); }
L_12D0: { ++fl.t; set_vi(i1, i5 & i1); }
L_12D8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 129u) + 12, 2); set_vi(i2, v); } }
L_12E0: { ++fl.t; pend = 0u != i1; }
L_12E8: { fl.t += 3u; { const std::uint8_t *q = qword(mem, i2 + 124u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1300; }
L_12F0: { ++fl.t; pend = static_cast<std::int16_t>(i4) >= 0; }
L_12F8: { ++fl.t; }
    if (pend) { pend = false; st = 0u; goto L_1308; }
L_1300: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 4, 2); set_vi(i4, v); } }
    st = 1u; 
L_1308: { fl.t += 1u + ks_1308[st]; { std::uint8_t *q = qword(mem, 0u + 131u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_1310: { ++fl.t; pend = true; }
L_1318: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i4))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1638; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; vu::interpret(1, ((4896u + sh) & 16383u));
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

void vu1_B12B7427F380C78E(Vu0Regs &r, std::uint8_t *mem) {
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
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i15 = r.vi[15];
    goto L_1238;
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
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; vu::interpret(1, ((4768u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; vu::interpret(1, jpc);
    return;
}

template <bool kSticky>
static void vu1_A7F624EBDCA6B01B_s(Vu0Regs &r, std::uint8_t *mem) {
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
    if (pend) { pend = false; goto L_1628; }
L_00F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i8, v); } }
L_0100: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0108: { ++fl.t; set_vi(i15, (((264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 4, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0A58; }
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0E10; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0D68; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1228; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F60; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1628; }
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
L_0A58: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); set_vi(i1, 0u + 8u); vstore(r.vf[3], uv); n3 = vshadow_eager(r.vf[3]); }
L_0A60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0A68: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0A70: { ++fl.t; pend = 0u == i1; }
L_0A78: { ++fl.t; set_vi(i3, 0u + 3u); }
    if (pend) { pend = false; goto L_0A88; }
L_0A80: { ++fl.t; set_vi(i4, 0u + i2); }
L_0A88: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0A90: { ++fl.t; set_vi(i1, i4 & i1); }
L_0A98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0AA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0AB0: { ++fl.t; pend = 0u == i1; }
L_0AB8: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0AC8; }
L_0AC0: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0AC8: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); set_vi(i5, i4 & i3); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0AD0: { ++fl.t; set_vi(i4, i4 & i2); }
L_0AD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0AE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0AE8: { ++fl.t; pend = 0u == i5; }
L_0AF0: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0B38; }
L_0AF8: { ++fl.t; r.i = 1124073472u; }
L_0B00: { ++fl.t; pend = 0u == i5; }
L_0B08: { ++fl.t; }
    if (pend) { pend = false; goto L_0B60; }
L_0B10: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 1u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0B18: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B20: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B28: { ++fl.t; pend = true; }
L_0B30: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B38: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B40: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B48: { ++fl.t; set_vi(i1, i1 & i3); }
L_0B50: { ++fl.t; pend = true; }
L_0B58: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B60: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B68: { ++fl.t; r.i = 1124073472u; }
L_0B70: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B78: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B80: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0B88: { ++fl.t; pend = 0u == i4; }
L_0B90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0BA8; }
L_0B98: { ++fl.t; r.i = 1073676288u; }
L_0BA0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0BA8: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0BB0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0BB8: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BC0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0BC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0BD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
L_0BD8: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0BE0: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0BE8: { ++fl.t; set_vi(i15, (((3048u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0BF0: { ++fl.t; }
    if (pend) { pend = false; goto L_1628; }
L_0BF8: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0C00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0C08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0C10: { ++fl.t; pend = true; }
L_0C18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0F98; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((3104u + sh) & 16383u));
    return;
L_0D68: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0D70: { ++fl.t; set_vi(i1, i5 & i1); }
L_0D78: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0D80: { ++fl.t; pend = 0u == i1; }
L_0D88: { ++fl.t; }
    if (pend) { pend = false; goto L_0DA0; }
L_0D90: { ++fl.t; set_vi(i4, 0u + i2); }
L_0D98: { ++fl.t; }
L_0DA0: { ++fl.t; pend = 0u == i4; }
L_0DA8: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0DF8; }
L_0DB0: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0DB8: { ++fl.t; pend = 0u == i4; }
L_0DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_0DE0; }
L_0DC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0DD0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0DE8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0E00: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0E18: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0E20: { ++fl.t; pend = 0u != i4; }
L_0E28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; goto L_0E40; }
L_0E30: { ++fl.t; pend = 0u != i3; }
L_0E38: { ++fl.t; }
    if (pend) { pend = false; goto L_0E58; }
L_0E40: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_0E48: { ++fl.t; pend = true; }
L_0E50: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0E68; }
L_0E58: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0E60: { ++fl.t; set_vi(i1, i1 | i3); }
L_0E68: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0E70: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0E78: { ++fl.t; pend = true; }
L_0E80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_1628; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((3720u + sh) & 16383u));
    return;
L_0F60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F68: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F78: { ++fl.t; pend = 0u == i1; }
L_0F80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0F90; }
L_0F88: { ++fl.t; set_vi(i4, 0u + i2); }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0F98: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FB0: { ++fl.t; pend = 0u != i4; }
L_0FB8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FD8; }
L_0FC0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((4080u + sh) & 16383u));
    return;
L_1228: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1230: { ++fl.t; set_vi(i1, i5 & i1); }
L_1238: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1240: { ++fl.t; pend = 0u == i1; }
L_1248: { ++fl.t; }
    if (pend) { pend = false; goto L_1260; }
L_1250: { ++fl.t; set_vi(i4, 0u + i2); }
L_1258: { ++fl.t; }
L_1260: { ++fl.t; pend = 0u != i4; }
L_1268: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1280; }
L_1270: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1278: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((4752u + sh) & 16383u));
    return;
L_1628: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1630: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1638: { ++fl.t; set_vi(i9, 0u + i12); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1648: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((5720u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_A7F624EBDCA6B01B_c(Vu0Regs &r, std::uint8_t *mem) { vu1_A7F624EBDCA6B01B_s<true>(r, mem); }

void vu1_A7F624EBDCA6B01B(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_A7F624EBDCA6B01B_s<false>(r, mem);
    else vu1_A7F624EBDCA6B01B_c(r, mem);
}

template <bool kSticky>
PS2_VU_BODY void vu1_1EDE60F31BC64127_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
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
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((544u + sh) & 16383u));
    return;
L_0520: { ++fl.t; }
L_0528: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_0530: { ++fl.t; set_vi(i12, i12 + 3u); }
L_0538: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); vefu(daz.csr, r, 115u, 26u, 2u); vstore(r.vf[2], uv); n2 = vshadow(r.vf[2]); }
L_0540: { ++fl.t; const v4u uv = vmuld(n18, n26); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0548: { ++fl.t; const v4u uv = vmuld(n20, n26); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[27].w[2]); fl.end_q(r, qb, 7u); } vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0550: { ++fl.t; const v4u uv = vmuld(n22, n26); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0558: { ++fl.t; }
L_0560: { ++fl.t; const v4u uv = vaddd(n16, vsplat(n16[1])); { const std::uint8_t *q = qword(mem, i13 + 4u); std::memcpy(&r.vf[3], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vshadow(r.vf[3]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0568: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n16[2])); { const std::uint8_t *q = qword(mem, 0u + 38u); std::memcpy(&r.vf[6], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vshadow(r.vf[6]); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0570: { ++fl.t; const v4u uv = vaddd(n24, vsplat(n24[0])); { const std::uint8_t *q = qword(mem, i13 + 1u); std::memcpy(&r.vf[16], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n16 = vshadow(r.vf[16]); nacc = vsel(nacc, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0578: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n24[2])); { const std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(&r.vf[24], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n24 = vshadow(r.vf[24]); n4 = vsel(n4, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0580: { ++fl.t; const v4u uv = vaddd(n17, vsplat(n17[0])); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 8, &v, 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_0588: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n17[1])); { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n9 = vshadow(r.vf[9]); n4 = vsel(n4, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_0590: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vqd(r.q)); vstore(r.vf[13], vsel(vload(r.vf[13]), vload(r.vf[0]), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n13 = vshadow(r.vf[13]); n5 = uv; }
L_0598: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); r.i = 998244352u; vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_05A0: { ++fl.t; const v4u uv = vmuld(n27, n6); set_vi(i3, 0u + 16u); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_05A8: { ++fl.t; const v4u uv = vitof(vload(r.vf[3]), 15); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 132u) + 12, 2); set_vi(i2, v); } vstore(r.vf[8], uv); n8 = vshadow(r.vf[8]); }
L_05B0: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmax(vload(r.vf[5]), vsplat(r.vf[6].w[3])); { const std::uint8_t *q = qword(mem, i13 + 3u); std::memcpy(&r.vf[17], q, 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n17 = vshadow(r.vf[17]); n5 = vshadow(r.vf[5]); }
L_05B8: { ++fl.t; const v4u uv = vmuld(vswz<1, 2, 0, 3>(n13), vswz<2, 0, 1, 3>(n25)); { const std::uint8_t *q = qword(mem, 0u + 135u); std::memcpy(&r.vf[11], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n11 = vshadow(r.vf[11]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05C0: { ++fl.t; const v4u uv = vmsubd(nacc, vswz<1, 2, 0, 3>(n25), vswz<2, 0, 1, 3>(n13)); { const std::uint8_t *q = qword(mem, 0u + 134u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n10 = vshadow(r.vf[10]); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05C8: { ++fl.t; const v4u uv = vmuld(n8, vfix(vsplat(r.i))); set_vi(i1, i8 & i3); vstore(r.vf[1], uv); fl.stick<15u, kSticky>(uv); n1 = uv; }
L_05D0: { ++fl.t; const v4u uv = vmuld(n6, n5); { const std::uint8_t *q = qword(mem, i1 + 15u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n3 = vshadow(r.vf[3]); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05D8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n9[2])); { const std::uint8_t *q = qword(mem, 0u + 136u); vstore(r.vf[7], vsel(vload(r.vf[7]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n7 = vshadow(r.vf[7]); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_05E0: { ++fl.t; const v4u uv = vmaddd(nacc, n9, vsplat(n27[2])); { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[16].w[0], 4); std::memcpy(q + 4, &r.vf[16].w[1], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_05E8: { ++fl.t; const v4u uv = vmuld(n13, n27); set_vi(i5, 0u + 63u); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05F0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n5[0])); { const std::uint8_t *q = qword(mem, i13 + 2u); std::memcpy(&r.vf[16], q, 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n16 = vshadow(r.vf[16]); n5 = vsel(n5, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_05F8: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n1[0])); r.vf[2].w[3] = r.p; vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vshadow(r.vf[2]); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0600: { ++fl.t; vflushd(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmax(vload(r.vf[4]), vsplat(r.vf[9].w[1])); set_vi(i4, r.vf[3].w[1]); vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n4 = vshadow(r.vf[4]); }
L_0608: { ++fl.t; const v4u uv = vaddd(n13, vsplat(n13[1])); { const std::uint8_t *q = qword(mem, 0u + 145u); vstore(r.vf[12], vsel(vload(r.vf[12]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0610: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n13[2])); set_vi(i6, 0u + 16384u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0618: { ++fl.t; const v4u uv = vmuld(n4, vsplat(n2[3])); set_vi(i1, i12 + 0u); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0620: { ++fl.t; const v4u uv = vmuld(n26, vsplat(n2[3])); set_vi(i4, i4 & i5); vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0628: { ++fl.t; const v4u uv = vmin(vload(r.vf[4]), vsplat(r.vf[9].w[0])); { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[26], vsel(vload(r.vf[26]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n26 = vshadow(r.vf[26]); n6 = vshadow(r.vf[6]); }
L_0630: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n3[0])); { const std::uint8_t *q = qword(mem, i4 + 960u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n2 = vshadow(r.vf[2]); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0638: { ++fl.t; vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[13]), v4u{0u, 0u, 0u, 0x3F800000u}); set_vi(i7, r.vf[3].w[2]); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n13 = vshadow(r.vf[13]); }
L_0640: { ++fl.t; const v4u uv = vmuld(n4, n11); { const std::uint8_t *q = qword(mem, i4 + 961u); std::memcpy(&r.vf[4], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.push<12u, kSticky>(uv); n4 = vshadow(r.vf[4]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0648: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n10 * (v4f)vsplat(0x3F800000u))); { const std::uint8_t *q = qword(mem, i4 + 962u); std::memcpy(&r.vf[3], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.push<12u, kSticky>(uv); n3 = vshadow(r.vf[3]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0650: { ++fl.t; const v4u uv = vftoi(vload(r.vf[6]), 4); set_vi(i3, (fl.mac() & 0xFFFFu) == i3 ? 1u : 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n6 = vshadow(r.vf[6]); }
L_0658: { ++fl.t; const v4u uv = vmuld(n19, vsplat(n13[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 126u) + 12, 2); set_vi(i15, v); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0660: { ++fl.t; const v4u uv = vmaddd(nacc, n21, vsplat(n13[1])); set_vi(i3, i7 & i5); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0668: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmaddd(nacc, n23, vsplat(n13[2])); { std::uint8_t *q = qword(mem, 0u + 113u); std::memcpy(q + 0, &r.vf[9].w[0], 4); std::memcpy(q + 4, &r.vf[9].w[1], 4); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0670: { ++fl.t; const v4u uv = vaddd(n8, n26); { const std::uint8_t *q = qword(mem, i2 + 112u); vstore(r.vf[9], vsel(vload(r.vf[9]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n9 = vshadow(r.vf[9]); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0678: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n6[0])); set_vi(i8, i8 | i15); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0680: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n1[1])); set_vi(i2, i6 & i8); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0688: { ++fl.t; vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[13]), vsplat(r.vf[12].w[0])); set_vi(i2, i2 + i2); vstore(r.vf[10], uv); n10 = vshadow(r.vf[10]); }
L_0690: { ++fl.t; const v4u uv = vaddd(n9, n7); set_vi(i5, r.vf[6].w[3]); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0698: { ++fl.t; const v4u uv = vftoi(vload(r.vf[8]), 4); { const std::uint8_t *q = qword(mem, 0u + 137u); vstore(r.vf[13], vsel(vload(r.vf[13]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n13 = vshadow(r.vf[13]); n7 = vshadow(r.vf[7]); }
L_06A0: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n6[1])); { const std::uint8_t *q = qword(mem, i4 + 963u); std::memcpy(&r.vf[8], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n8 = vshadow(r.vf[8]); nacc = uv; }
L_06A8: { ++fl.t; const v4u uv = vmuld(n24, n10); set_vi(i12, i12 + 3u); vstore(r.vf[24], uv); fl.stick<15u, kSticky>(uv); n24 = uv; }
L_06B0: { ++fl.t; const v4u uv = vmuld(n9, vsplat(n5[0])); set_vi(i2, i5 | i2); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_06B8: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n6[2])); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q + 0, &r.vf[7].w[0], 4); std::memcpy(q + 4, &r.vf[7].w[1], 4); std::memcpy(q + 8, &r.vf[7].w[2], 4); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_06C0: { ++fl.t; const v4u uv = vmaddd(nacc, n31, vsplat(n1[0])); { std::uint8_t *q = qword(mem, i1 + 2u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_06C8: { ++fl.t; const v4u uv = vaddd(n24, n13); { const std::uint8_t *q = qword(mem, 0u + 137u); vstore(r.vf[13], vsel(vload(r.vf[13]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n13 = vshadow(r.vf[13]); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06D0: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmaddd(nacc, n2, vsplat(n26[0])); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[5].w[0], 4); std::memcpy(q + 4, &r.vf[5].w[1], 4); std::memcpy(q + 8, &r.vf[5].w[2], 4); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_06D8: { ++fl.t; const v4u uv = vmaddd(nacc, n4, vsplat(n26[1])); set_vi(i10, i10 + 1u); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_06E0: { ++fl.t; const v4u uv = vmaddd(nacc, n3, vsplat(n26[2])); { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[7], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n7 = vshadow(r.vf[7]); nacc = uv; }
L_06E8: { ++fl.t; vflushd(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmin(vload(r.vf[24]), vsplat(r.vf[13].w[3])); set_vi(i13, i13 + 4u); vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vshadow(r.vf[24]); }
L_06F0: { ++fl.t; const v4u uv = vmuld(n16, vsplat(n1[0])); { const std::uint8_t *q = qword(mem, i3 + 960u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vshadow(r.vf[5]); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06F8: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n1[2])); vstore(r.vf[13], vsel(vload(r.vf[13]), vload(r.vf[25]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n13 = vshadow(r.vf[13]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0700: { ++fl.t; const v4u uv = vmaddd(nacc, n8, vsplat(n1[1])); { const std::uint8_t *q = qword(mem, i3 + 961u); std::memcpy(&r.vf[6], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n6 = vshadow(r.vf[6]); nacc = uv; }
L_0708: { ++fl.t; const v4u uv = vmuld(n24, n7); vstore(r.vf[24], uv); fl.stick<15u, kSticky>(uv); n24 = uv; }
L_0710: { ++fl.t; const v4u uv = vmuld(n16, vsplat(n1[1])); { const std::uint8_t *q = qword(mem, i3 + 962u); std::memcpy(&r.vf[8], q, 16); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0718: { ++fl.t; const v4u uv = vmaddd(nacc, n5, vsplat(n9[0])); { const std::uint8_t *q = qword(mem, i3 + 963u); std::memcpy(&r.vf[10], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n10 = vshadow(r.vf[10]); nacc = uv; }
L_0720: { ++fl.t; const v4u uv = vmaddd(nacc, n6, vsplat(n9[1])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0728: { ++fl.t; const v4u uv = vftoi(vload(r.vf[24]), 0); vstore(r.vf[7], uv); n7 = vshadow(r.vf[7]); }
L_0730: { ++fl.t; const v4u uv = vmaddd(nacc, n8, vsplat(n9[2])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0738: { ++fl.t; vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmaddd(nacc, n10, vsplat(n1[2])); vstore(r.vf[24], vsel(vload(r.vf[24]), vload(r.vf[27]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n24 = vshadow(r.vf[24]); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0740: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n26[0])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0748: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n26[1])); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[7], 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0750: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n26[2])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0758: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n25[0])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0760: { ++fl.t; const v4u uv = vmaddd(nacc, n4, vsplat(n25[1])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0768: { ++fl.t; const v4u uv = vmaddd(nacc, n3, vsplat(n25[2])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0770: { ++fl.t; const v4u uv = vmuld(n16, vsplat(n1[2])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0778: { ++fl.t; const v4u uv = vsubd(n27, n24); vstore(r.vf[25], uv); fl.stick<15u, kSticky>(uv); n25 = uv; }
L_0780: { ++fl.t; }
L_0788: { ++fl.t; }
L_0790: { ++fl.t; const v4u uv = vmaddd(nacc, n5, vsplat(n26[0])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0798: { ++fl.t; const v4u uv = vmaddd(nacc, n6, vsplat(n26[1])); vstore(r.acc, uv); fl.push<15u, kSticky>(uv); nacc = uv; }
L_07A0: { ++fl.t; const v4u uv = vmaddd(nacc, n8, vsplat(n26[2])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_07A8: { ++fl.t; set_vi(i1, i11 - i12); }
L_07B0: { ++fl.t; set_vi(i6, i8 + 0u); }
L_07B8: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_07C0: { ++fl.t; }
    if (pend) { pend = false; goto L_07F0; }
L_07C8: { ++fl.t; set_vi(i15, (((1992u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_07D0: { ++fl.t; }
    if (pend) { pend = false; goto L_1658; }
L_07D8: { ++fl.t; set_vi(i10, 0u + 0u); }
L_07E0: { ++fl.t; set_vi(i9, 0u + i12); }
L_07E8: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_07F0: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_07F8: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); goto L_0538; }
L_0800: { ++fl.t; set_vi(i5, 0u + 259u); }
L_0808: { ++fl.t; pend = true; }
L_0810: { ++fl.t; set_vi(i4, 0u + 167u); }
    if (pend) { pend = false; goto L_17F8; }
    vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((2072u + sh) & 16383u));
    return;
L_1658: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1660: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1668: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1670: { ++fl.t; set_vi(i2, i10 | i2); }
L_1678: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1680: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1688: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_1690: { ++fl.t; }
L_1698: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_16A0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_16A8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_16B0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_16B8: { ++fl.t; vkick_last(daz, 1, i3); }
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_16C0: { ++fl.t; ending = true; }
L_16C8: { ++fl.t; }
    if (ending) { vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((5840u + sh) & 16383u); return; }
    vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((5840u + sh) & 16383u));
    return;
L_16F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_1700: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 26u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } n2 = vshadow(r.vf[2]); }
L_1708: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1710: { ++fl.t; set_vi(i10, 0u + 0u); }
L_1718: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_1720: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 1u); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
L_1728: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); std::memcpy(q + 12, &r.vf[2].w[3], 4); } }
L_1730: { ++fl.t; set_vi(i9, i12 + 2u); }
L_1738: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1740: { ++fl.t; set_vi(i12, i12 + 3u); }
    if (pendj) { pendj = false; vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((5960u + sh) & 16383u));
    return;
L_17F8: { ++fl.t; set_vi(i6, i6 + i6); }
L_1800: { ++fl.t; set_vi(i6, i6 + i6); }
L_1808: { ++fl.t; set_vi(i3, 0u + 4096u); }
L_1810: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_1818: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_1850; }
L_1820: { ++fl.t; set_vi(i15, (((6176u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1828: { ++fl.t; set_vi(i1, 0u + 4u); }
    if (pend) { pend = false; goto L_16F8; }
L_1830: { ++fl.t; set_vi(i1, 0u + 1u); }
L_1838: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
L_1840: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 0, &v, 4); } }
L_1848: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 4, &v, 4); } }
L_1850: { ++fl.t; set_vi(i3, i6 & i3); }
L_1858: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_1860: { ++fl.t; set_vi(i6, i6 + i6); bi = 6u; }
    if (pend) { pend = false; goto L_1878; }
L_1868: { ++fl.t; set_vi(i15, (((6248u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1870: { ++fl.t; next_bk = i3; set_vi(i3, 0u + 512u); bk = next_bk; bi = 3u; }
    if (pend) { pend = false; goto L_16C0; }
L_1878: { ++fl.t; pend = 0u == (bi == 3 ? bk : i3); }
L_1880: { ++fl.t; { const std::uint8_t *q = qword(mem, i13 + 0u); std::memcpy(&r.vf[14], q, 16); } }
    if (pend) { pend = false; goto L_18B8; }
L_1888: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_1890: { ++fl.t; set_vi(i7, r.vf[17].w[3]); }
    if (pend) { pend = false; goto L_18D8; }
L_1898: { ++fl.t; jpc = (static_cast<std::uint32_t>(i5) * 8u) & 16383u; set_vi(i15, (((6296u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_18A0: { ++fl.t; set_vi(i6, i4 + 0u); }
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18A8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i6) * 8u) & 16383u; pendj = true; }
L_18B0: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18B8: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_18C0: { ++fl.t; }
    if (pend) { pend = false; goto L_18D8; }
L_18C8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_18D0: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18D8: { ++fl.t; pend = true; }
L_18E0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
    vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((6376u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_1EDE60F31BC64127_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_1EDE60F31BC64127_b<true>(r, mem, daz, hop); }
void vu1_1EDE60F31BC64127(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_1EDE60F31BC64127_b<false>(r, mem, daz, hop);
        else vu1_1EDE60F31BC64127_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

template <bool kSticky>
PS2_VU_BODY void vu1_281677BB50884350_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
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
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((544u + sh) & 16383u));
    return;
L_0538: { ++fl.t; vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); vefu(daz.csr, r, 115u, 26u, 2u); vstore(r.vf[2], uv); n2 = vshadow(r.vf[2]); }
    vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); 
L_0540: { ++fl.t; const v4u uv = vmuld(n18, n26); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0548: { ++fl.t; const v4u uv = vmuld(n20, n26); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[27].w[2]); fl.end_q(r, qb, 7u); } vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0550: { ++fl.t; const v4u uv = vmuld(n22, n26); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0558: { ++fl.t; }
L_0560: { ++fl.t; const v4u uv = vaddd(n16, vsplat(n16[1])); { const std::uint8_t *q = qword(mem, i13 + 4u); std::memcpy(&r.vf[3], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vshadow(r.vf[3]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0568: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n16[2])); { const std::uint8_t *q = qword(mem, 0u + 38u); std::memcpy(&r.vf[6], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vshadow(r.vf[6]); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0570: { ++fl.t; const v4u uv = vaddd(n24, vsplat(n24[0])); { const std::uint8_t *q = qword(mem, i13 + 1u); std::memcpy(&r.vf[16], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n16 = vshadow(r.vf[16]); nacc = vsel(nacc, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0578: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n24[2])); { const std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(&r.vf[24], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n24 = vshadow(r.vf[24]); n4 = vsel(n4, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0580: { ++fl.t; const v4u uv = vaddd(n17, vsplat(n17[0])); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 8, &v, 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_0588: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n17[1])); { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n9 = vshadow(r.vf[9]); n4 = vsel(n4, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_0590: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vqd(r.q)); vstore(r.vf[13], vsel(vload(r.vf[13]), vload(r.vf[0]), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n13 = vshadow(r.vf[13]); n5 = uv; }
L_0598: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); r.i = 998244352u; vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_05A0: { ++fl.t; const v4u uv = vmuld(n27, n6); set_vi(i3, 0u + 16u); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_05A8: { ++fl.t; const v4u uv = vitof(vload(r.vf[3]), 15); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 132u) + 12, 2); set_vi(i2, v); } vstore(r.vf[8], uv); n8 = vshadow(r.vf[8]); }
L_05B0: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmax(vload(r.vf[5]), vsplat(r.vf[6].w[3])); { const std::uint8_t *q = qword(mem, i13 + 3u); std::memcpy(&r.vf[17], q, 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n17 = vshadow(r.vf[17]); n5 = vshadow(r.vf[5]); }
L_05B8: { ++fl.t; const v4u uv = vmuld(vswz<1, 2, 0, 3>(n13), vswz<2, 0, 1, 3>(n25)); { const std::uint8_t *q = qword(mem, 0u + 135u); std::memcpy(&r.vf[11], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n11 = vshadow(r.vf[11]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05C0: { ++fl.t; const v4u uv = vmsubd(nacc, vswz<1, 2, 0, 3>(n25), vswz<2, 0, 1, 3>(n13)); { const std::uint8_t *q = qword(mem, 0u + 134u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n10 = vshadow(r.vf[10]); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05C8: { ++fl.t; const v4u uv = vmuld(n8, vfix(vsplat(r.i))); set_vi(i1, i8 & i3); vstore(r.vf[1], uv); fl.stick<15u, kSticky>(uv); n1 = uv; }
L_05D0: { ++fl.t; const v4u uv = vmuld(n6, n5); { const std::uint8_t *q = qword(mem, i1 + 15u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n3 = vshadow(r.vf[3]); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05D8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n9[2])); { const std::uint8_t *q = qword(mem, 0u + 136u); vstore(r.vf[7], vsel(vload(r.vf[7]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n7 = vshadow(r.vf[7]); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_05E0: { ++fl.t; const v4u uv = vmaddd(nacc, n9, vsplat(n27[2])); { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[16].w[0], 4); std::memcpy(q + 4, &r.vf[16].w[1], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_05E8: { ++fl.t; const v4u uv = vmuld(n13, n27); set_vi(i5, 0u + 63u); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05F0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n5[0])); { const std::uint8_t *q = qword(mem, i13 + 2u); std::memcpy(&r.vf[16], q, 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n16 = vshadow(r.vf[16]); n5 = vsel(n5, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_05F8: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n1[0])); r.vf[2].w[3] = r.p; vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vshadow(r.vf[2]); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0600: { ++fl.t; vflushd(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmax(vload(r.vf[4]), vsplat(r.vf[9].w[1])); set_vi(i4, r.vf[3].w[1]); vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n4 = vshadow(r.vf[4]); }
L_0608: { ++fl.t; const v4u uv = vaddd(n13, vsplat(n13[1])); { const std::uint8_t *q = qword(mem, 0u + 145u); vstore(r.vf[12], vsel(vload(r.vf[12]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0610: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n13[2])); set_vi(i6, 0u + 16384u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0618: { ++fl.t; const v4u uv = vmuld(n4, vsplat(n2[3])); set_vi(i1, i12 + 0u); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0620: { ++fl.t; const v4u uv = vmuld(n26, vsplat(n2[3])); set_vi(i4, i4 & i5); vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0628: { ++fl.t; const v4u uv = vmin(vload(r.vf[4]), vsplat(r.vf[9].w[0])); { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[26], vsel(vload(r.vf[26]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n26 = vshadow(r.vf[26]); n6 = vshadow(r.vf[6]); }
L_0630: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n3[0])); { const std::uint8_t *q = qword(mem, i4 + 960u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n2 = vshadow(r.vf[2]); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0638: { ++fl.t; vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[13]), v4u{0u, 0u, 0u, 0x3F800000u}); set_vi(i7, r.vf[3].w[2]); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n13 = vshadow(r.vf[13]); }
L_0640: { ++fl.t; const v4u uv = vmuld(n4, n11); { const std::uint8_t *q = qword(mem, i4 + 961u); std::memcpy(&r.vf[4], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.push<12u, kSticky>(uv); n4 = vshadow(r.vf[4]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0648: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n10 * (v4f)vsplat(0x3F800000u))); { const std::uint8_t *q = qword(mem, i4 + 962u); std::memcpy(&r.vf[3], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.push<12u, kSticky>(uv); n3 = vshadow(r.vf[3]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0650: { ++fl.t; const v4u uv = vftoi(vload(r.vf[6]), 4); set_vi(i3, (fl.mac() & 0xFFFFu) == i3 ? 1u : 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n6 = vshadow(r.vf[6]); }
L_0658: { ++fl.t; const v4u uv = vmuld(n19, vsplat(n13[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 126u) + 12, 2); set_vi(i15, v); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0660: { ++fl.t; const v4u uv = vmaddd(nacc, n21, vsplat(n13[1])); set_vi(i3, i7 & i5); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0668: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmaddd(nacc, n23, vsplat(n13[2])); { std::uint8_t *q = qword(mem, 0u + 113u); std::memcpy(q + 0, &r.vf[9].w[0], 4); std::memcpy(q + 4, &r.vf[9].w[1], 4); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0670: { ++fl.t; const v4u uv = vaddd(n8, n26); { const std::uint8_t *q = qword(mem, i2 + 112u); vstore(r.vf[9], vsel(vload(r.vf[9]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n9 = vshadow(r.vf[9]); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0678: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n6[0])); set_vi(i8, i8 | i15); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0680: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n1[1])); set_vi(i2, i6 & i8); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0688: { ++fl.t; vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[13]), vsplat(r.vf[12].w[0])); set_vi(i2, i2 + i2); vstore(r.vf[10], uv); n10 = vshadow(r.vf[10]); }
L_0690: { ++fl.t; const v4u uv = vaddd(n9, n7); set_vi(i5, r.vf[6].w[3]); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0698: { ++fl.t; const v4u uv = vftoi(vload(r.vf[8]), 4); { const std::uint8_t *q = qword(mem, 0u + 137u); vstore(r.vf[13], vsel(vload(r.vf[13]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n13 = vshadow(r.vf[13]); n7 = vshadow(r.vf[7]); }
L_06A0: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n6[1])); { const std::uint8_t *q = qword(mem, i4 + 963u); std::memcpy(&r.vf[8], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n8 = vshadow(r.vf[8]); nacc = uv; }
L_06A8: { ++fl.t; const v4u uv = vmuld(n24, n10); set_vi(i12, i12 + 3u); vstore(r.vf[24], uv); fl.stick<15u, kSticky>(uv); n24 = uv; }
L_06B0: { ++fl.t; const v4u uv = vmuld(n9, vsplat(n5[0])); set_vi(i2, i5 | i2); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_06B8: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n6[2])); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q + 0, &r.vf[7].w[0], 4); std::memcpy(q + 4, &r.vf[7].w[1], 4); std::memcpy(q + 8, &r.vf[7].w[2], 4); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_06C0: { ++fl.t; const v4u uv = vmaddd(nacc, n31, vsplat(n1[0])); { std::uint8_t *q = qword(mem, i1 + 2u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_06C8: { ++fl.t; const v4u uv = vaddd(n24, n13); { const std::uint8_t *q = qword(mem, 0u + 137u); vstore(r.vf[13], vsel(vload(r.vf[13]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n13 = vshadow(r.vf[13]); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06D0: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmaddd(nacc, n2, vsplat(n26[0])); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[5].w[0], 4); std::memcpy(q + 4, &r.vf[5].w[1], 4); std::memcpy(q + 8, &r.vf[5].w[2], 4); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_06D8: { ++fl.t; const v4u uv = vmaddd(nacc, n4, vsplat(n26[1])); set_vi(i10, i10 + 1u); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_06E0: { ++fl.t; const v4u uv = vmaddd(nacc, n3, vsplat(n26[2])); { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[7], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n7 = vshadow(r.vf[7]); nacc = uv; }
L_06E8: { ++fl.t; vflushd(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmin(vload(r.vf[24]), vsplat(r.vf[13].w[3])); set_vi(i13, i13 + 4u); vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vshadow(r.vf[24]); }
L_06F0: { ++fl.t; const v4u uv = vmuld(n16, vsplat(n1[0])); { const std::uint8_t *q = qword(mem, i3 + 960u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vshadow(r.vf[5]); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06F8: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n1[2])); vstore(r.vf[13], vsel(vload(r.vf[13]), vload(r.vf[25]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n13 = vshadow(r.vf[13]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0700: { ++fl.t; const v4u uv = vmaddd(nacc, n8, vsplat(n1[1])); { const std::uint8_t *q = qword(mem, i3 + 961u); std::memcpy(&r.vf[6], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n6 = vshadow(r.vf[6]); nacc = uv; }
L_0708: { ++fl.t; const v4u uv = vmuld(n24, n7); vstore(r.vf[24], uv); fl.stick<15u, kSticky>(uv); n24 = uv; }
L_0710: { ++fl.t; const v4u uv = vmuld(n16, vsplat(n1[1])); { const std::uint8_t *q = qword(mem, i3 + 962u); std::memcpy(&r.vf[8], q, 16); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0718: { ++fl.t; const v4u uv = vmaddd(nacc, n5, vsplat(n9[0])); { const std::uint8_t *q = qword(mem, i3 + 963u); std::memcpy(&r.vf[10], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n10 = vshadow(r.vf[10]); nacc = uv; }
L_0720: { ++fl.t; const v4u uv = vmaddd(nacc, n6, vsplat(n9[1])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0728: { ++fl.t; const v4u uv = vftoi(vload(r.vf[24]), 0); vstore(r.vf[7], uv); n7 = vshadow(r.vf[7]); }
L_0730: { ++fl.t; const v4u uv = vmaddd(nacc, n8, vsplat(n9[2])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0738: { ++fl.t; vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmaddd(nacc, n10, vsplat(n1[2])); vstore(r.vf[24], vsel(vload(r.vf[24]), vload(r.vf[27]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n24 = vshadow(r.vf[24]); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0740: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n26[0])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0748: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n26[1])); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[7], 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0750: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n26[2])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0758: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n25[0])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0760: { ++fl.t; const v4u uv = vmaddd(nacc, n4, vsplat(n25[1])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0768: { ++fl.t; const v4u uv = vmaddd(nacc, n3, vsplat(n25[2])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0770: { ++fl.t; const v4u uv = vmuld(n16, vsplat(n1[2])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0778: { ++fl.t; const v4u uv = vsubd(n27, n24); vstore(r.vf[25], uv); fl.stick<15u, kSticky>(uv); n25 = uv; }
L_0780: { ++fl.t; }
L_0788: { ++fl.t; }
L_0790: { ++fl.t; const v4u uv = vmaddd(nacc, n5, vsplat(n26[0])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0798: { ++fl.t; const v4u uv = vmaddd(nacc, n6, vsplat(n26[1])); vstore(r.acc, uv); fl.push<15u, kSticky>(uv); nacc = uv; }
L_07A0: { ++fl.t; const v4u uv = vmaddd(nacc, n8, vsplat(n26[2])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_07A8: { ++fl.t; set_vi(i1, i11 - i12); }
L_07B0: { ++fl.t; set_vi(i6, i8 + 0u); }
L_07B8: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_07C0: { ++fl.t; }
    if (pend) { pend = false; goto L_07F0; }
L_07C8: { ++fl.t; set_vi(i15, (((1992u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_07D0: { ++fl.t; }
    if (pend) { pend = false; goto L_1658; }
L_07D8: { ++fl.t; set_vi(i10, 0u + 0u); }
L_07E0: { ++fl.t; set_vi(i9, 0u + i12); }
L_07E8: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_07F0: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_07F8: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_0538; }
L_0800: { ++fl.t; set_vi(i5, 0u + 259u); }
L_0808: { ++fl.t; pend = true; }
L_0810: { ++fl.t; set_vi(i4, 0u + 167u); }
    if (pend) { pend = false; goto L_17F8; }
    vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((2072u + sh) & 16383u));
    return;
L_1658: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1660: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1668: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1670: { ++fl.t; set_vi(i2, i10 | i2); }
L_1678: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1680: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1688: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_1690: { ++fl.t; }
L_1698: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_16A0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_16A8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_16B0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_16B8: { ++fl.t; vkick_last(daz, 1, i3); }
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_16C0: { ++fl.t; ending = true; }
L_16C8: { ++fl.t; }
    if (ending) { vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((5840u + sh) & 16383u); return; }
    vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((5840u + sh) & 16383u));
    return;
L_16F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_1700: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 26u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } n2 = vshadow(r.vf[2]); }
L_1708: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1710: { ++fl.t; set_vi(i10, 0u + 0u); }
L_1718: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_1720: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 1u); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
L_1728: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); std::memcpy(q + 12, &r.vf[2].w[3], 4); } }
L_1730: { ++fl.t; set_vi(i9, i12 + 2u); }
L_1738: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1740: { ++fl.t; set_vi(i12, i12 + 3u); }
    if (pendj) { pendj = false; vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((5960u + sh) & 16383u));
    return;
L_17F8: { ++fl.t; set_vi(i6, i6 + i6); }
L_1800: { ++fl.t; set_vi(i6, i6 + i6); }
L_1808: { ++fl.t; set_vi(i3, 0u + 4096u); }
L_1810: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_1818: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_1850; }
L_1820: { ++fl.t; set_vi(i15, (((6176u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1828: { ++fl.t; set_vi(i1, 0u + 4u); }
    if (pend) { pend = false; goto L_16F8; }
L_1830: { ++fl.t; set_vi(i1, 0u + 1u); }
L_1838: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
L_1840: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 0, &v, 4); } }
L_1848: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 4, &v, 4); } }
L_1850: { ++fl.t; set_vi(i3, i6 & i3); }
L_1858: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_1860: { ++fl.t; set_vi(i6, i6 + i6); bi = 6u; }
    if (pend) { pend = false; goto L_1878; }
L_1868: { ++fl.t; set_vi(i15, (((6248u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1870: { ++fl.t; next_bk = i3; set_vi(i3, 0u + 512u); bk = next_bk; bi = 3u; }
    if (pend) { pend = false; goto L_16C0; }
L_1878: { ++fl.t; pend = 0u == (bi == 3 ? bk : i3); }
L_1880: { ++fl.t; { const std::uint8_t *q = qword(mem, i13 + 0u); std::memcpy(&r.vf[14], q, 16); } }
    if (pend) { pend = false; goto L_18B8; }
L_1888: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_1890: { ++fl.t; set_vi(i7, r.vf[17].w[3]); }
    if (pend) { pend = false; goto L_18D8; }
L_1898: { ++fl.t; jpc = (static_cast<std::uint32_t>(i5) * 8u) & 16383u; set_vi(i15, (((6296u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_18A0: { ++fl.t; set_vi(i6, i4 + 0u); }
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18A8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i6) * 8u) & 16383u; pendj = true; }
L_18B0: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18B8: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_18C0: { ++fl.t; }
    if (pend) { pend = false; goto L_18D8; }
L_18C8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_18D0: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18D8: { ++fl.t; pend = true; }
L_18E0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
    vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((6376u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_281677BB50884350_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_281677BB50884350_b<true>(r, mem, daz, hop); }
void vu1_281677BB50884350(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_281677BB50884350_b<false>(r, mem, daz, hop);
        else vu1_281677BB50884350_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

template <bool kSticky>
static void vu1_2E90F6A86AB8B2A4_s(Vu0Regs &r, std::uint8_t *mem) {
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
    if (pend) { pend = false; goto L_1628; }
L_00F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i8, v); } }
L_0100: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0108: { ++fl.t; set_vi(i15, (((264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 4, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0A58; }
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0E10; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0D68; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1228; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F60; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1628; }
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
L_0A58: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); set_vi(i1, 0u + 8u); vstore(r.vf[3], uv); n3 = vshadow_eager(r.vf[3]); }
L_0A60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0A68: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0A70: { ++fl.t; pend = 0u == i1; }
L_0A78: { ++fl.t; set_vi(i3, 0u + 3u); }
    if (pend) { pend = false; goto L_0A88; }
L_0A80: { ++fl.t; set_vi(i4, 0u + i2); }
L_0A88: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0A90: { ++fl.t; set_vi(i1, i4 & i1); }
L_0A98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0AA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0AB0: { ++fl.t; pend = 0u == i1; }
L_0AB8: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0AC8; }
L_0AC0: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0AC8: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); set_vi(i5, i4 & i3); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0AD0: { ++fl.t; set_vi(i4, i4 & i2); }
L_0AD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0AE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0AE8: { ++fl.t; pend = 0u == i5; }
L_0AF0: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0B38; }
L_0AF8: { ++fl.t; r.i = 1124073472u; }
L_0B00: { ++fl.t; pend = 0u == i5; }
L_0B08: { ++fl.t; }
    if (pend) { pend = false; goto L_0B60; }
L_0B10: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 1u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0B18: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B20: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B28: { ++fl.t; pend = true; }
L_0B30: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B38: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B40: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B48: { ++fl.t; set_vi(i1, i1 & i3); }
L_0B50: { ++fl.t; pend = true; }
L_0B58: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B60: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B68: { ++fl.t; r.i = 1124073472u; }
L_0B70: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B78: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B80: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0B88: { ++fl.t; pend = 0u == i4; }
L_0B90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0BA8; }
L_0B98: { ++fl.t; r.i = 1073676288u; }
L_0BA0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0BA8: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0BB0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0BB8: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BC0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0BC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0BD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
L_0BD8: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0BE0: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0BE8: { ++fl.t; set_vi(i15, (((3048u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0BF0: { ++fl.t; }
    if (pend) { pend = false; goto L_1628; }
L_0BF8: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0C00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0C08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0C10: { ++fl.t; pend = true; }
L_0C18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0F98; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3104u + sh) & 16383u));
    return;
L_0D68: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0D70: { ++fl.t; set_vi(i1, i5 & i1); }
L_0D78: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0D80: { ++fl.t; pend = 0u == i1; }
L_0D88: { ++fl.t; }
    if (pend) { pend = false; goto L_0DA0; }
L_0D90: { ++fl.t; set_vi(i4, 0u + i2); }
L_0D98: { ++fl.t; }
L_0DA0: { ++fl.t; pend = 0u == i4; }
L_0DA8: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0DF8; }
L_0DB0: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0DB8: { ++fl.t; pend = 0u == i4; }
L_0DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_0DE0; }
L_0DC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0DD0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0DE8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0E00: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0E18: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0E20: { ++fl.t; pend = 0u != i4; }
L_0E28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; goto L_0E40; }
L_0E30: { ++fl.t; pend = 0u != i3; }
L_0E38: { ++fl.t; }
    if (pend) { pend = false; goto L_0E58; }
L_0E40: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_0E48: { ++fl.t; pend = true; }
L_0E50: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0E68; }
L_0E58: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0E60: { ++fl.t; set_vi(i1, i1 | i3); }
L_0E68: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0E70: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0E78: { ++fl.t; pend = true; }
L_0E80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_1628; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3720u + sh) & 16383u));
    return;
L_0F60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F68: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F78: { ++fl.t; pend = 0u == i1; }
L_0F80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0F90; }
L_0F88: { ++fl.t; set_vi(i4, 0u + i2); }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0F98: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FB0: { ++fl.t; pend = 0u != i4; }
L_0FB8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FD8; }
L_0FC0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4080u + sh) & 16383u));
    return;
L_1228: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1230: { ++fl.t; set_vi(i1, i5 & i1); }
L_1238: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1240: { ++fl.t; pend = 0u == i1; }
L_1248: { ++fl.t; }
    if (pend) { pend = false; goto L_1260; }
L_1250: { ++fl.t; set_vi(i4, 0u + i2); }
L_1258: { ++fl.t; }
L_1260: { ++fl.t; pend = 0u != i4; }
L_1268: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1280; }
L_1270: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1278: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4752u + sh) & 16383u));
    return;
L_1628: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1630: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1638: { ++fl.t; set_vi(i9, 0u + i12); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1648: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5720u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_2E90F6A86AB8B2A4_c(Vu0Regs &r, std::uint8_t *mem) { vu1_2E90F6A86AB8B2A4_s<true>(r, mem); }

void vu1_2E90F6A86AB8B2A4(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_2E90F6A86AB8B2A4_s<false>(r, mem);
    else vu1_2E90F6A86AB8B2A4_c(r, mem);
}

template <bool kSticky>
static void vu1_43FDB15C1D55009D_s(Vu0Regs &r, std::uint8_t *mem) {
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
    if (pend) { pend = false; goto L_1628; }
L_00F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i8, v); } }
L_0100: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0108: { ++fl.t; set_vi(i15, (((264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 4, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0A58; }
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0E10; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0D68; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1228; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F60; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1628; }
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
L_0A58: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); set_vi(i1, 0u + 8u); vstore(r.vf[3], uv); n3 = vshadow_eager(r.vf[3]); }
L_0A60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0A68: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0A70: { ++fl.t; pend = 0u == i1; }
L_0A78: { ++fl.t; set_vi(i3, 0u + 3u); }
    if (pend) { pend = false; goto L_0A88; }
L_0A80: { ++fl.t; set_vi(i4, 0u + i2); }
L_0A88: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0A90: { ++fl.t; set_vi(i1, i4 & i1); }
L_0A98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0AA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0AB0: { ++fl.t; pend = 0u == i1; }
L_0AB8: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0AC8; }
L_0AC0: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0AC8: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); set_vi(i5, i4 & i3); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0AD0: { ++fl.t; set_vi(i4, i4 & i2); }
L_0AD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0AE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0AE8: { ++fl.t; pend = 0u == i5; }
L_0AF0: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0B38; }
L_0AF8: { ++fl.t; r.i = 1124073472u; }
L_0B00: { ++fl.t; pend = 0u == i5; }
L_0B08: { ++fl.t; }
    if (pend) { pend = false; goto L_0B60; }
L_0B10: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 1u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0B18: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B20: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B28: { ++fl.t; pend = true; }
L_0B30: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B38: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B40: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B48: { ++fl.t; set_vi(i1, i1 & i3); }
L_0B50: { ++fl.t; pend = true; }
L_0B58: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B60: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B68: { ++fl.t; r.i = 1124073472u; }
L_0B70: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B78: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B80: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0B88: { ++fl.t; pend = 0u == i4; }
L_0B90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0BA8; }
L_0B98: { ++fl.t; r.i = 1073676288u; }
L_0BA0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0BA8: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0BB0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0BB8: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BC0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0BC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0BD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
L_0BD8: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0BE0: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0BE8: { ++fl.t; set_vi(i15, (((3048u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0BF0: { ++fl.t; }
    if (pend) { pend = false; goto L_1628; }
L_0BF8: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0C00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0C08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0C10: { ++fl.t; pend = true; }
L_0C18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0F98; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((3104u + sh) & 16383u));
    return;
L_0D68: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0D70: { ++fl.t; set_vi(i1, i5 & i1); }
L_0D78: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0D80: { ++fl.t; pend = 0u == i1; }
L_0D88: { ++fl.t; }
    if (pend) { pend = false; goto L_0DA0; }
L_0D90: { ++fl.t; set_vi(i4, 0u + i2); }
L_0D98: { ++fl.t; }
L_0DA0: { ++fl.t; pend = 0u == i4; }
L_0DA8: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0DF8; }
L_0DB0: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0DB8: { ++fl.t; pend = 0u == i4; }
L_0DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_0DE0; }
L_0DC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0DD0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0DE8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0E00: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0E18: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0E20: { ++fl.t; pend = 0u != i4; }
L_0E28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; goto L_0E40; }
L_0E30: { ++fl.t; pend = 0u != i3; }
L_0E38: { ++fl.t; }
    if (pend) { pend = false; goto L_0E58; }
L_0E40: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_0E48: { ++fl.t; pend = true; }
L_0E50: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0E68; }
L_0E58: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0E60: { ++fl.t; set_vi(i1, i1 | i3); }
L_0E68: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0E70: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0E78: { ++fl.t; pend = true; }
L_0E80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_1628; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((3720u + sh) & 16383u));
    return;
L_0F60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F68: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F78: { ++fl.t; pend = 0u == i1; }
L_0F80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0F90; }
L_0F88: { ++fl.t; set_vi(i4, 0u + i2); }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0F98: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FB0: { ++fl.t; pend = 0u != i4; }
L_0FB8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FD8; }
L_0FC0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((4080u + sh) & 16383u));
    return;
L_1228: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1230: { ++fl.t; set_vi(i1, i5 & i1); }
L_1238: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1240: { ++fl.t; pend = 0u == i1; }
L_1248: { ++fl.t; }
    if (pend) { pend = false; goto L_1260; }
L_1250: { ++fl.t; set_vi(i4, 0u + i2); }
L_1258: { ++fl.t; }
L_1260: { ++fl.t; pend = 0u != i4; }
L_1268: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1280; }
L_1270: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1278: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((4752u + sh) & 16383u));
    return;
L_1628: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1630: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1638: { ++fl.t; set_vi(i9, 0u + i12); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1648: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((5720u + sh) & 16383u));
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

static __attribute__((noinline, cold)) void vu1_43FDB15C1D55009D_c(Vu0Regs &r, std::uint8_t *mem) { vu1_43FDB15C1D55009D_s<true>(r, mem); }

void vu1_43FDB15C1D55009D(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_43FDB15C1D55009D_s<false>(r, mem);
    else vu1_43FDB15C1D55009D_c(r, mem);
}

template <bool kSticky>
PS2_VU_BODY void vu1_811B1114DB6135E4_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
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
    if (pendj) { pendj = false; vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((544u + sh) & 16383u));
    return;
L_0270: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[27].w[2]); fl.end_q(r, qb, 7u); } vstore(r.vf[24], uv); n24 = vshadow(r.vf[24]); }
L_0278: { ++fl.t; const v4u uv = vmuld(n18, n26); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0280: { ++fl.t; const v4u uv = vmuld(n20, n26); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0288: { ++fl.t; const v4u uv = vmuld(n22, n26); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0290: { ++fl.t; }
L_0298: { ++fl.t; const v4u uv = vaddd(n16, vsplat(n16[1])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_02A0: { ++fl.t; const v4u uv = vmaddd(nacc, n24, vsplat(n16[2])); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_02A8: { ++fl.t; const v4u uv = vaddd(n17, vsplat(n17[0])); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 8, &v, 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02B0: { ++fl.t; const v4u uv = vmaddd(nacc, n24, vsplat(n17[2])); { const std::uint8_t *q = qword(mem, 0u + 38u); std::memcpy(&r.vf[17], q, 16); } vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n17 = vshadow(r.vf[17]); n16 = vsel(n16, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_02B8: { ++fl.t; const v4u uv = vaddd(n5, vsplat(n5[0])); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_02C0: { ++fl.t; const v4u uv = vmaddd(nacc, n24, vsplat(n5[1])); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n16 = vsel(n16, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_02C8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vqd(r.q)); { const std::uint8_t *q = qword(mem, i13 + 0u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[1], uv); fl.stick<15u, kSticky>(uv); n2 = vshadow(r.vf[2]); n1 = uv; }
L_02D0: { ++fl.t; const v4u uv = vmuld(n27, n17); set_vi(i2, 0u + 16u); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_02D8: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); { const std::uint8_t *q = qword(mem, 0u + 134u); std::memcpy(&r.vf[3], q, 16); } vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n3 = vshadow(r.vf[3]); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_02E0: { ++fl.t; vflushd(r.vf[16], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[16]), v4u{0u, 0u, 0u, 0x3F800000u}); set_vi(i3, i8 & i2); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n16 = vshadow(r.vf[16]); }
L_02E8: { ++fl.t; vflushd(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmax(vload(r.vf[1]), vsplat(r.vf[17].w[3])); { const std::uint8_t *q = qword(mem, 0u + 135u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n5 = vshadow(r.vf[5]); n1 = vshadow(r.vf[1]); }
L_02F0: { ++fl.t; const v4u uv = vmuld(vswz<1, 2, 0, 3>(n13), vswz<2, 0, 1, 3>(n25)); { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&r.vf[4], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n4 = vshadow(r.vf[4]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02F8: { ++fl.t; const v4u uv = vmsubd(nacc, vswz<1, 2, 0, 3>(n25), vswz<2, 0, 1, 3>(n13)); { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0300: { ++fl.t; const v4u uv = vmuld(n19, vsplat(n16[0])); { const std::uint8_t *q = qword(mem, 0u + 145u); vstore(r.vf[7], vsel(vload(r.vf[7]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n7 = vshadow(r.vf[7]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0308: { ++fl.t; const v4u uv = vmaddd(nacc, n21, vsplat(n16[1])); vstore(r.vf[8], vsel(vload(r.vf[8]), vload(r.vf[0]), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0310: { ++fl.t; const v4u uv = vmaddd(nacc, n23, vsplat(n16[2])); set_vi(i1, i12 + 0u); vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0318: { ++fl.t; const v4u uv = vmuld(n17, n1); { const std::uint8_t *q = qword(mem, 0u + 137u); vstore(r.vf[6], vsel(vload(r.vf[6]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n6 = vshadow(r.vf[6]); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0320: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n4[2])); { const std::uint8_t *q = qword(mem, i13 + 2u); std::memcpy(&r.vf[17], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n17 = vshadow(r.vf[17]); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0328: { ++fl.t; const v4u uv = vmaddd(nacc, n4, vsplat(n27[2])); { const std::uint8_t *q = qword(mem, i13 + 1u); std::memcpy(&r.vf[16], q, 16); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n16 = vshadow(r.vf[16]); n13 = vsel(n13, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0330: { ++fl.t; vflushd(r.vf[8], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[8]), vsplat(r.vf[7].w[0])); { const std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[8], uv); n9 = vshadow(r.vf[9]); n8 = vshadow(r.vf[8]); }
L_0338: { ++fl.t; const v4u uv = vmuld(n13, n27); set_vi(i12, i12 + 3u); vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n7 = vsel(n7, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0340: { ++fl.t; const v4u uv = vmuld(n26, n5); set_vi(i10, i10 + 1u); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0348: { ++fl.t; vflushd(r.vf[13], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmax(vload(r.vf[13]), vsplat(r.vf[4].w[1])); set_vi(i13, i13 + 3u); vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n24 = vshadow(r.vf[24]); }
L_0350: { ++fl.t; vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); const v4u uv = vmuld(n9, n8); vstore(r.vf[13], vsel(vload(r.vf[13]), vload(r.vf[25]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n13 = vshadow(r.vf[13]); n5 = uv; }
L_0358: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n3 * (v4f)vsplat(0x3F800000u))); { const std::uint8_t *q = qword(mem, 0u + 136u); vstore(r.vf[25], vsel(vload(r.vf[25]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n25 = vshadow(r.vf[25]); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0360: { ++fl.t; const v4u uv = vaddd(n7, vsplat(n7[1])); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 132u) + 12, 2); set_vi(i4, v); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0368: { ++fl.t; const v4u uv = vmin(vload(r.vf[24]), vsplat(r.vf[4].w[0])); { const std::uint8_t *q = qword(mem, i3 + 15u); vstore(r.vf[24], vsel(vload(r.vf[24]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n24 = vshadow(r.vf[24]); n25 = vshadow(r.vf[25]); }
L_0370: { ++fl.t; const v4u uv = vaddd(n5, n6); { const std::uint8_t *q = qword(mem, 0u + 137u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vshadow(r.vf[2]); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0378: { ++fl.t; vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmaddd(nacc, n24, vsplat(n7[2])); { std::uint8_t *q = qword(mem, 0u + 113u); std::memcpy(q + 0, &r.vf[26].w[0], 4); std::memcpy(q + 4, &r.vf[26].w[1], 4); } vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
    vflushd(r.vf[1], v4u{0u, 0u, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[7], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); 
L_0380: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n1[0])); { const std::uint8_t *q = qword(mem, i4 + 112u); vstore(r.vf[26], vsel(vload(r.vf[26]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n26 = vshadow(r.vf[26]); n25 = vsel(n25, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_0388: { ++fl.t; const v4u uv = vftoi(vload(r.vf[25]), 4); { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n4 = vshadow(r.vf[4]); n25 = vshadow(r.vf[25]); }
L_0390: { ++fl.t; const v4u uv = vmin(vload(r.vf[5]), vsplat(r.vf[2].w[3])); { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[3], q, 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n3 = vshadow(r.vf[3]); n5 = vshadow(r.vf[5]); }
L_0398: { ++fl.t; const v4u uv = vmuld(n24, vsplat(n24[0])); vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n24 = vsel(n24, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_03A0: { ++fl.t; const v4u uv = vaddd(n26, n25); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.push<12u, kSticky>(uv); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_03A8: { ++fl.t; const v4u uv = vaddd(n2, n4); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_03B0: { ++fl.t; const v4u uv = vmuld(n5, n3); vstore(r.vf[24], uv); fl.push<15u, kSticky>(uv); n24 = uv; }
L_03B8: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n17[0])); set_vi(i2, (fl.mac() & 0xFFFFu) == i2 ? 1u : 0u); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_03C0: { ++fl.t; const v4u uv = vmuld(n25, vsplat(n1[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, i2 + 126u) + 12, 2); set_vi(i3, v); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_03C8: { ++fl.t; const v4u uv = vftoi(vload(r.vf[26]), 4); set_vi(i2, r.vf[25].w[3]); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n5 = vshadow(r.vf[5]); }
L_03D0: { ++fl.t; const v4u uv = vftoi(vload(r.vf[24]), 0); vstore(r.vf[24], vsel(vload(r.vf[24]), vload(r.vf[27]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[2], uv); n24 = vshadow(r.vf[24]); n2 = vshadow(r.vf[2]); }
L_03D8: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n17[1])); set_vi(i4, 0u + 16384u); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_03E0: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n17[2])); set_vi(i8, i8 | i3); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_03E8: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n31 * (v4f)vsplat(0x3F800000u))); set_vi(i3, i4 & i8); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_03F0: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n16[0])); set_vi(i3, i3 + i3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_03F8: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n16[1])); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[2], 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0400: { ++fl.t; vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmaddd(nacc, n30, vsplat(n16[2])); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[25].w[0], 4); std::memcpy(q + 4, &r.vf[25].w[1], 4); std::memcpy(q + 8, &r.vf[25].w[2], 4); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0408: { ++fl.t; const v4u uv = vsubd(n27, n24); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q + 0, &r.vf[5].w[0], 4); std::memcpy(q + 4, &r.vf[5].w[1], 4); std::memcpy(q + 8, &r.vf[5].w[2], 4); } vstore(r.vf[25], uv); fl.push<15u, kSticky>(uv); n25 = uv; }
L_0410: { ++fl.t; set_vi(i2, i2 | i3); }
L_0418: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 2u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0420: { ++fl.t; set_vi(i1, i11 - i12); }
L_0428: { ++fl.t; set_vi(i6, i8 + 0u); }
L_0430: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_0438: { ++fl.t; }
    if (pend) { pend = false; goto L_0468; }
L_0440: { ++fl.t; set_vi(i15, (((1088u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0448: { ++fl.t; }
    if (pend) { pend = false; goto L_1658; }
L_0450: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0458: { ++fl.t; set_vi(i9, 0u + i12); }
L_0460: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_0468: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_0470: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_0270; }
L_0478: { ++fl.t; set_vi(i5, 0u + 146u); }
L_0480: { ++fl.t; pend = true; }
L_0488: { ++fl.t; set_vi(i4, 0u + 78u); }
    if (pend) { pend = false; goto L_17F8; }
    vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((1168u + sh) & 16383u));
    return;
L_1658: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1660: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1668: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1670: { ++fl.t; set_vi(i2, i10 | i2); }
L_1678: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1680: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1688: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_1690: { ++fl.t; }
L_1698: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_16A0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_16A8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_16B0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_16B8: { ++fl.t; vkick_last(daz, 1, i3); }
    if (pendj) { pendj = false; vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_16C0: { ++fl.t; ending = true; }
L_16C8: { ++fl.t; }
    if (ending) { vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((5840u + sh) & 16383u); return; }
    vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((5840u + sh) & 16383u));
    return;
L_16F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_1700: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 26u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } n2 = vshadow(r.vf[2]); }
L_1708: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1710: { ++fl.t; set_vi(i10, 0u + 0u); }
L_1718: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_1720: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 1u); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
L_1728: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); std::memcpy(q + 12, &r.vf[2].w[3], 4); } }
L_1730: { ++fl.t; set_vi(i9, i12 + 2u); }
L_1738: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1740: { ++fl.t; set_vi(i12, i12 + 3u); }
    if (pendj) { pendj = false; vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((5960u + sh) & 16383u));
    return;
L_17F8: { ++fl.t; set_vi(i6, i6 + i6); }
L_1800: { ++fl.t; set_vi(i6, i6 + i6); }
L_1808: { ++fl.t; set_vi(i3, 0u + 4096u); }
L_1810: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_1818: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_1850; }
L_1820: { ++fl.t; set_vi(i15, (((6176u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1828: { ++fl.t; set_vi(i1, 0u + 4u); }
    if (pend) { pend = false; goto L_16F8; }
L_1830: { ++fl.t; set_vi(i1, 0u + 1u); }
L_1838: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
L_1840: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 0, &v, 4); } }
L_1848: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 4, &v, 4); } }
L_1850: { ++fl.t; set_vi(i3, i6 & i3); }
L_1858: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_1860: { ++fl.t; set_vi(i6, i6 + i6); bi = 6u; }
    if (pend) { pend = false; goto L_1878; }
L_1868: { ++fl.t; set_vi(i15, (((6248u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1870: { ++fl.t; next_bk = i3; set_vi(i3, 0u + 512u); bk = next_bk; bi = 3u; }
    if (pend) { pend = false; goto L_16C0; }
L_1878: { ++fl.t; pend = 0u == (bi == 3 ? bk : i3); }
L_1880: { ++fl.t; { const std::uint8_t *q = qword(mem, i13 + 0u); std::memcpy(&r.vf[14], q, 16); } }
    if (pend) { pend = false; goto L_18B8; }
L_1888: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_1890: { ++fl.t; set_vi(i7, r.vf[17].w[3]); }
    if (pend) { pend = false; goto L_18D8; }
L_1898: { ++fl.t; jpc = (static_cast<std::uint32_t>(i5) * 8u) & 16383u; set_vi(i15, (((6296u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_18A0: { ++fl.t; set_vi(i6, i4 + 0u); }
    if (pendj) { pendj = false; vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18A8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i6) * 8u) & 16383u; pendj = true; }
L_18B0: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18B8: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_18C0: { ++fl.t; }
    if (pend) { pend = false; goto L_18D8; }
L_18C8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_18D0: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18D8: { ++fl.t; pend = true; }
L_18E0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
    vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((6376u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_811B1114DB6135E4_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_811B1114DB6135E4_b<true>(r, mem, daz, hop); }
void vu1_811B1114DB6135E4(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_811B1114DB6135E4_b<false>(r, mem, daz, hop);
        else vu1_811B1114DB6135E4_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

template <bool kSticky>
static void vu1_A32B1C6BC539BBFF_s(Vu0Regs &r, std::uint8_t *mem) {
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
    if (pend) { pend = false; goto L_1628; }
L_00F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i8, v); } }
L_0100: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0108: { ++fl.t; set_vi(i15, (((264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 4, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0A58; }
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0E10; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0D68; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1228; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F60; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1628; }
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
L_0A58: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); set_vi(i1, 0u + 8u); vstore(r.vf[3], uv); n3 = vshadow_eager(r.vf[3]); }
L_0A60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0A68: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0A70: { ++fl.t; pend = 0u == i1; }
L_0A78: { ++fl.t; set_vi(i3, 0u + 3u); }
    if (pend) { pend = false; goto L_0A88; }
L_0A80: { ++fl.t; set_vi(i4, 0u + i2); }
L_0A88: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0A90: { ++fl.t; set_vi(i1, i4 & i1); }
L_0A98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0AA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0AB0: { ++fl.t; pend = 0u == i1; }
L_0AB8: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0AC8; }
L_0AC0: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0AC8: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); set_vi(i5, i4 & i3); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0AD0: { ++fl.t; set_vi(i4, i4 & i2); }
L_0AD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0AE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0AE8: { ++fl.t; pend = 0u == i5; }
L_0AF0: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0B38; }
L_0AF8: { ++fl.t; r.i = 1124073472u; }
L_0B00: { ++fl.t; pend = 0u == i5; }
L_0B08: { ++fl.t; }
    if (pend) { pend = false; goto L_0B60; }
L_0B10: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 1u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0B18: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B20: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B28: { ++fl.t; pend = true; }
L_0B30: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B38: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B40: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B48: { ++fl.t; set_vi(i1, i1 & i3); }
L_0B50: { ++fl.t; pend = true; }
L_0B58: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B60: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B68: { ++fl.t; r.i = 1124073472u; }
L_0B70: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B78: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B80: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0B88: { ++fl.t; pend = 0u == i4; }
L_0B90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0BA8; }
L_0B98: { ++fl.t; r.i = 1073676288u; }
L_0BA0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0BA8: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0BB0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0BB8: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BC0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0BC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0BD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
L_0BD8: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0BE0: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0BE8: { ++fl.t; set_vi(i15, (((3048u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0BF0: { ++fl.t; }
    if (pend) { pend = false; goto L_1628; }
L_0BF8: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0C00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0C08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0C10: { ++fl.t; pend = true; }
L_0C18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0F98; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3104u + sh) & 16383u));
    return;
L_0D68: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0D70: { ++fl.t; set_vi(i1, i5 & i1); }
L_0D78: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0D80: { ++fl.t; pend = 0u == i1; }
L_0D88: { ++fl.t; }
    if (pend) { pend = false; goto L_0DA0; }
L_0D90: { ++fl.t; set_vi(i4, 0u + i2); }
L_0D98: { ++fl.t; }
L_0DA0: { ++fl.t; pend = 0u == i4; }
L_0DA8: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0DF8; }
L_0DB0: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0DB8: { ++fl.t; pend = 0u == i4; }
L_0DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_0DE0; }
L_0DC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0DD0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0DE8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0E00: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0E18: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0E20: { ++fl.t; pend = 0u != i4; }
L_0E28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; goto L_0E40; }
L_0E30: { ++fl.t; pend = 0u != i3; }
L_0E38: { ++fl.t; }
    if (pend) { pend = false; goto L_0E58; }
L_0E40: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_0E48: { ++fl.t; pend = true; }
L_0E50: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0E68; }
L_0E58: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0E60: { ++fl.t; set_vi(i1, i1 | i3); }
L_0E68: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0E70: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0E78: { ++fl.t; pend = true; }
L_0E80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_1628; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3720u + sh) & 16383u));
    return;
L_0F60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F68: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F78: { ++fl.t; pend = 0u == i1; }
L_0F80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0F90; }
L_0F88: { ++fl.t; set_vi(i4, 0u + i2); }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0F98: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FB0: { ++fl.t; pend = 0u != i4; }
L_0FB8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FD8; }
L_0FC0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4080u + sh) & 16383u));
    return;
L_1228: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1230: { ++fl.t; set_vi(i1, i5 & i1); }
L_1238: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1240: { ++fl.t; pend = 0u == i1; }
L_1248: { ++fl.t; }
    if (pend) { pend = false; goto L_1260; }
L_1250: { ++fl.t; set_vi(i4, 0u + i2); }
L_1258: { ++fl.t; }
L_1260: { ++fl.t; pend = 0u != i4; }
L_1268: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1280; }
L_1270: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1278: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4752u + sh) & 16383u));
    return;
L_1628: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1630: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1638: { ++fl.t; set_vi(i9, 0u + i12); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1648: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5720u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_A32B1C6BC539BBFF_c(Vu0Regs &r, std::uint8_t *mem) { vu1_A32B1C6BC539BBFF_s<true>(r, mem); }

void vu1_A32B1C6BC539BBFF(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_A32B1C6BC539BBFF_s<false>(r, mem);
    else vu1_A32B1C6BC539BBFF_c(r, mem);
}

template <bool kSticky>
static void vu1_A61F50A10F9CA3C5_s(Vu0Regs &r, std::uint8_t *mem) {
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
    if (pend) { pend = false; goto L_1628; }
L_00F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i8, v); } }
L_0100: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0108: { ++fl.t; set_vi(i15, (((264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 4, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0A58; }
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0E10; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0D68; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1228; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F60; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1628; }
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
L_0A58: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); set_vi(i1, 0u + 8u); vstore(r.vf[3], uv); n3 = vshadow_eager(r.vf[3]); }
L_0A60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0A68: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0A70: { ++fl.t; pend = 0u == i1; }
L_0A78: { ++fl.t; set_vi(i3, 0u + 3u); }
    if (pend) { pend = false; goto L_0A88; }
L_0A80: { ++fl.t; set_vi(i4, 0u + i2); }
L_0A88: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0A90: { ++fl.t; set_vi(i1, i4 & i1); }
L_0A98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0AA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0AB0: { ++fl.t; pend = 0u == i1; }
L_0AB8: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0AC8; }
L_0AC0: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0AC8: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); set_vi(i5, i4 & i3); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0AD0: { ++fl.t; set_vi(i4, i4 & i2); }
L_0AD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0AE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0AE8: { ++fl.t; pend = 0u == i5; }
L_0AF0: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0B38; }
L_0AF8: { ++fl.t; r.i = 1124073472u; }
L_0B00: { ++fl.t; pend = 0u == i5; }
L_0B08: { ++fl.t; }
    if (pend) { pend = false; goto L_0B60; }
L_0B10: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 1u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0B18: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B20: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B28: { ++fl.t; pend = true; }
L_0B30: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B38: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B40: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B48: { ++fl.t; set_vi(i1, i1 & i3); }
L_0B50: { ++fl.t; pend = true; }
L_0B58: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B60: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B68: { ++fl.t; r.i = 1124073472u; }
L_0B70: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B78: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B80: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0B88: { ++fl.t; pend = 0u == i4; }
L_0B90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0BA8; }
L_0B98: { ++fl.t; r.i = 1073676288u; }
L_0BA0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0BA8: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0BB0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0BB8: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BC0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0BC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0BD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
L_0BD8: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0BE0: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0BE8: { ++fl.t; set_vi(i15, (((3048u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0BF0: { ++fl.t; }
    if (pend) { pend = false; goto L_1628; }
L_0BF8: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0C00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0C08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0C10: { ++fl.t; pend = true; }
L_0C18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0F98; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3104u + sh) & 16383u));
    return;
L_0D68: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0D70: { ++fl.t; set_vi(i1, i5 & i1); }
L_0D78: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0D80: { ++fl.t; pend = 0u == i1; }
L_0D88: { ++fl.t; }
    if (pend) { pend = false; goto L_0DA0; }
L_0D90: { ++fl.t; set_vi(i4, 0u + i2); }
L_0D98: { ++fl.t; }
L_0DA0: { ++fl.t; pend = 0u == i4; }
L_0DA8: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0DF8; }
L_0DB0: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0DB8: { ++fl.t; pend = 0u == i4; }
L_0DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_0DE0; }
L_0DC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0DD0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0DE8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0E00: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0E18: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0E20: { ++fl.t; pend = 0u != i4; }
L_0E28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; goto L_0E40; }
L_0E30: { ++fl.t; pend = 0u != i3; }
L_0E38: { ++fl.t; }
    if (pend) { pend = false; goto L_0E58; }
L_0E40: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_0E48: { ++fl.t; pend = true; }
L_0E50: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0E68; }
L_0E58: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0E60: { ++fl.t; set_vi(i1, i1 | i3); }
L_0E68: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0E70: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0E78: { ++fl.t; pend = true; }
L_0E80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_1628; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3720u + sh) & 16383u));
    return;
L_0F60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F68: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F78: { ++fl.t; pend = 0u == i1; }
L_0F80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0F90; }
L_0F88: { ++fl.t; set_vi(i4, 0u + i2); }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0F98: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FB0: { ++fl.t; pend = 0u != i4; }
L_0FB8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FD8; }
L_0FC0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4080u + sh) & 16383u));
    return;
L_1228: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1230: { ++fl.t; set_vi(i1, i5 & i1); }
L_1238: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1240: { ++fl.t; pend = 0u == i1; }
L_1248: { ++fl.t; }
    if (pend) { pend = false; goto L_1260; }
L_1250: { ++fl.t; set_vi(i4, 0u + i2); }
L_1258: { ++fl.t; }
L_1260: { ++fl.t; pend = 0u != i4; }
L_1268: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1280; }
L_1270: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1278: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4752u + sh) & 16383u));
    return;
L_1628: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1630: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1638: { ++fl.t; set_vi(i9, 0u + i12); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1648: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5720u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_A61F50A10F9CA3C5_c(Vu0Regs &r, std::uint8_t *mem) { vu1_A61F50A10F9CA3C5_s<true>(r, mem); }

void vu1_A61F50A10F9CA3C5(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_A61F50A10F9CA3C5_s<false>(r, mem);
    else vu1_A61F50A10F9CA3C5_c(r, mem);
}

template <bool kSticky>
PS2_VU_BODY void vu1_B7D83EFFFD0963A0_b(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) {
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
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((544u + sh) & 16383u));
    return;
L_0500: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 1u); const std::uint32_t v = i9; std::memcpy(q + 0, &v, 4); } }
L_0508: { ++fl.t; { const std::uint8_t *q = qword(mem, i10 + 30u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_0510: { ++fl.t; set_vi(i10, 0u + 0u); }
L_0518: { ++fl.t; set_vi(i9, i12 + 2u); }
L_0520: { ++fl.t; }
L_0528: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_0530: { ++fl.t; set_vi(i12, i12 + 3u); }
L_0538: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); vefu(daz.csr, r, 115u, 26u, 2u); vstore(r.vf[2], uv); n2 = vshadow(r.vf[2]); }
L_0540: { ++fl.t; const v4u uv = vmuld(n18, n26); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n16 = vsel(n16, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0548: { ++fl.t; const v4u uv = vmuld(n20, n26); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[15].w[0], r.vf[27].w[2]); fl.end_q(r, qb, 7u); } vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0550: { ++fl.t; const v4u uv = vmuld(n22, n26); vstore(r.vf[17], vsel(vload(r.vf[17]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n17 = vsel(n17, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0558: { ++fl.t; }
L_0560: { ++fl.t; const v4u uv = vaddd(n16, vsplat(n16[1])); { const std::uint8_t *q = qword(mem, i13 + 4u); std::memcpy(&r.vf[3], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vshadow(r.vf[3]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0568: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n16[2])); { const std::uint8_t *q = qword(mem, 0u + 38u); std::memcpy(&r.vf[6], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n6 = vshadow(r.vf[6]); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0570: { ++fl.t; const v4u uv = vaddd(n24, vsplat(n24[0])); { const std::uint8_t *q = qword(mem, i13 + 1u); std::memcpy(&r.vf[16], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n16 = vshadow(r.vf[16]); nacc = vsel(nacc, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0578: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n24[2])); { const std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(&r.vf[24], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n24 = vshadow(r.vf[24]); n4 = vsel(n4, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0580: { ++fl.t; const v4u uv = vaddd(n17, vsplat(n17[0])); { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 8, &v, 4); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_0588: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n17[1])); { const std::uint8_t *q = qword(mem, 0u + 33u); std::memcpy(&r.vf[9], q, 16); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n9 = vshadow(r.vf[9]); n4 = vsel(n4, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_0590: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vqd(r.q)); vstore(r.vf[13], vsel(vload(r.vf[13]), vload(r.vf[0]), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); vstore(r.vf[5], uv); fl.stick<15u, kSticky>(uv); n13 = vshadow(r.vf[13]); n5 = uv; }
L_0598: { ++fl.t; fl.flush_q(r); const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vqd(r.q)); r.i = 998244352u; vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n27 = vsel(n27, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_05A0: { ++fl.t; const v4u uv = vmuld(n27, n6); set_vi(i3, 0u + 16u); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_05A8: { ++fl.t; const v4u uv = vitof(vload(r.vf[3]), 15); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 132u) + 12, 2); set_vi(i2, v); } vstore(r.vf[8], uv); n8 = vshadow(r.vf[8]); }
L_05B0: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmax(vload(r.vf[5]), vsplat(r.vf[6].w[3])); { const std::uint8_t *q = qword(mem, i13 + 3u); std::memcpy(&r.vf[17], q, 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n17 = vshadow(r.vf[17]); n5 = vshadow(r.vf[5]); }
L_05B8: { ++fl.t; const v4u uv = vmuld(vswz<1, 2, 0, 3>(n13), vswz<2, 0, 1, 3>(n25)); { const std::uint8_t *q = qword(mem, 0u + 135u); std::memcpy(&r.vf[11], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n11 = vshadow(r.vf[11]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05C0: { ++fl.t; const v4u uv = vmsubd(nacc, vswz<1, 2, 0, 3>(n25), vswz<2, 0, 1, 3>(n13)); { const std::uint8_t *q = qword(mem, 0u + 134u); std::memcpy(&r.vf[10], q, 16); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n10 = vshadow(r.vf[10]); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05C8: { ++fl.t; const v4u uv = vmuld(n8, vfix(vsplat(r.i))); set_vi(i1, i8 & i3); vstore(r.vf[1], uv); fl.stick<15u, kSticky>(uv); n1 = uv; }
L_05D0: { ++fl.t; const v4u uv = vmuld(n6, n5); { const std::uint8_t *q = qword(mem, i1 + 15u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n3 = vshadow(r.vf[3]); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05D8: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vsplat(n9[2])); { const std::uint8_t *q = qword(mem, 0u + 136u); vstore(r.vf[7], vsel(vload(r.vf[7]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n7 = vshadow(r.vf[7]); nacc = vsel(nacc, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_05E0: { ++fl.t; const v4u uv = vmaddd(nacc, n9, vsplat(n27[2])); { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[16].w[0], 4); std::memcpy(q + 4, &r.vf[16].w[1], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_05E8: { ++fl.t; const v4u uv = vmuld(n13, n27); set_vi(i5, 0u + 63u); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_05F0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vsplat(n5[0])); { const std::uint8_t *q = qword(mem, i13 + 2u); std::memcpy(&r.vf[16], q, 16); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); fl.stick<2u, kSticky>(uv); n16 = vshadow(r.vf[16]); n5 = vsel(n5, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_05F8: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n1[0])); r.vf[2].w[3] = r.p; vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n2 = vshadow(r.vf[2]); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0600: { ++fl.t; vflushd(r.vf[4], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmax(vload(r.vf[4]), vsplat(r.vf[9].w[1])); set_vi(i4, r.vf[3].w[1]); vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n4 = vshadow(r.vf[4]); }
L_0608: { ++fl.t; const v4u uv = vaddd(n13, vsplat(n13[1])); { const std::uint8_t *q = qword(mem, 0u + 145u); vstore(r.vf[12], vsel(vload(r.vf[12]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0610: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n13[2])); set_vi(i6, 0u + 16384u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0618: { ++fl.t; const v4u uv = vmuld(n4, vsplat(n2[3])); set_vi(i1, i12 + 0u); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0620: { ++fl.t; const v4u uv = vmuld(n26, vsplat(n2[3])); set_vi(i4, i4 & i5); vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n4 = vsel(n4, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0628: { ++fl.t; const v4u uv = vmin(vload(r.vf[4]), vsplat(r.vf[9].w[0])); { const std::uint8_t *q = qword(mem, 0u + 39u); vstore(r.vf[26], vsel(vload(r.vf[26]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n26 = vshadow(r.vf[26]); n6 = vshadow(r.vf[6]); }
L_0630: { ++fl.t; const v4u uv = vmuld(n3, vsplat(n3[0])); { const std::uint8_t *q = qword(mem, i4 + 960u); std::memcpy(&r.vf[2], q, 16); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.push<1u, kSticky>(uv); n2 = vshadow(r.vf[2]); n3 = vsel(n3, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0638: { ++fl.t; vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[13]), v4u{0u, 0u, 0u, 0x3F800000u}); set_vi(i7, r.vf[3].w[2]); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n13 = vshadow(r.vf[13]); }
L_0640: { ++fl.t; const v4u uv = vmuld(n4, n11); { const std::uint8_t *q = qword(mem, i4 + 961u); std::memcpy(&r.vf[4], q, 16); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.push<12u, kSticky>(uv); n4 = vshadow(r.vf[4]); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0648: { ++fl.t; const v4u uv = vaddd(nacc, (v4u)((v4f)n10 * (v4f)vsplat(0x3F800000u))); { const std::uint8_t *q = qword(mem, i4 + 962u); std::memcpy(&r.vf[3], q, 16); } vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.push<12u, kSticky>(uv); n3 = vshadow(r.vf[3]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0650: { ++fl.t; const v4u uv = vftoi(vload(r.vf[6]), 4); set_vi(i3, (fl.mac() & 0xFFFFu) == i3 ? 1u : 0u); vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n6 = vshadow(r.vf[6]); }
L_0658: { ++fl.t; const v4u uv = vmuld(n19, vsplat(n13[0])); { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 126u) + 12, 2); set_vi(i15, v); } vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0660: { ++fl.t; const v4u uv = vmaddd(nacc, n21, vsplat(n13[1])); set_vi(i3, i7 & i5); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0668: { ++fl.t; vflushd(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); const v4u uv = vmaddd(nacc, n23, vsplat(n13[2])); { std::uint8_t *q = qword(mem, 0u + 113u); std::memcpy(q + 0, &r.vf[9].w[0], 4); std::memcpy(q + 4, &r.vf[9].w[1], 4); } vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0670: { ++fl.t; const v4u uv = vaddd(n8, n26); { const std::uint8_t *q = qword(mem, i2 + 112u); vstore(r.vf[9], vsel(vload(r.vf[9]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } vstore(r.vf[8], vsel(vload(r.vf[8]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n9 = vshadow(r.vf[9]); n8 = vsel(n8, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0678: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n6[0])); set_vi(i8, i8 | i15); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0680: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n1[1])); set_vi(i2, i6 & i8); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0688: { ++fl.t; vflushd(r.vf[13], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmax(vload(r.vf[13]), vsplat(r.vf[12].w[0])); set_vi(i2, i2 + i2); vstore(r.vf[10], uv); n10 = vshadow(r.vf[10]); }
L_0690: { ++fl.t; const v4u uv = vaddd(n9, n7); set_vi(i5, r.vf[6].w[3]); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0698: { ++fl.t; const v4u uv = vftoi(vload(r.vf[8]), 4); { const std::uint8_t *q = qword(mem, 0u + 137u); vstore(r.vf[13], vsel(vload(r.vf[13]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[7], vsel(vload(r.vf[7]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n13 = vshadow(r.vf[13]); n7 = vshadow(r.vf[7]); }
L_06A0: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n6[1])); { const std::uint8_t *q = qword(mem, i4 + 963u); std::memcpy(&r.vf[8], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n8 = vshadow(r.vf[8]); nacc = uv; }
L_06A8: { ++fl.t; const v4u uv = vmuld(n24, n10); set_vi(i12, i12 + 3u); vstore(r.vf[24], uv); fl.stick<15u, kSticky>(uv); n24 = uv; }
L_06B0: { ++fl.t; const v4u uv = vmuld(n9, vsplat(n5[0])); set_vi(i2, i5 | i2); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); fl.stick<12u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_06B8: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n6[2])); { std::uint8_t *q = qword(mem, i1 + 2u); std::memcpy(q + 0, &r.vf[7].w[0], 4); std::memcpy(q + 4, &r.vf[7].w[1], 4); std::memcpy(q + 8, &r.vf[7].w[2], 4); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_06C0: { ++fl.t; const v4u uv = vmaddd(nacc, n31, vsplat(n1[0])); { std::uint8_t *q = qword(mem, i1 + 2u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_06C8: { ++fl.t; const v4u uv = vaddd(n24, n13); { const std::uint8_t *q = qword(mem, 0u + 137u); vstore(r.vf[13], vsel(vload(r.vf[13]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n13 = vshadow(r.vf[13]); n24 = vsel(n24, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06D0: { ++fl.t; vflushd(r.vf[5], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmaddd(nacc, n2, vsplat(n26[0])); { std::uint8_t *q = qword(mem, i1 + 0u); std::memcpy(q + 0, &r.vf[5].w[0], 4); std::memcpy(q + 4, &r.vf[5].w[1], 4); std::memcpy(q + 8, &r.vf[5].w[2], 4); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_06D8: { ++fl.t; const v4u uv = vmaddd(nacc, n4, vsplat(n26[1])); set_vi(i10, i10 + 1u); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_06E0: { ++fl.t; const v4u uv = vmaddd(nacc, n3, vsplat(n26[2])); { const std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(&r.vf[7], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n7 = vshadow(r.vf[7]); nacc = uv; }
L_06E8: { ++fl.t; vflushd(r.vf[24], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); const v4u uv = vmin(vload(r.vf[24]), vsplat(r.vf[13].w[3])); set_vi(i13, i13 + 4u); vstore(r.vf[24], vsel(vload(r.vf[24]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n24 = vshadow(r.vf[24]); }
L_06F0: { ++fl.t; const v4u uv = vmuld(n16, vsplat(n1[0])); { const std::uint8_t *q = qword(mem, i3 + 960u); std::memcpy(&r.vf[5], q, 16); } vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n5 = vshadow(r.vf[5]); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_06F8: { ++fl.t; const v4u uv = vmuld(n17, vsplat(n1[2])); vstore(r.vf[13], vsel(vload(r.vf[13]), vload(r.vf[25]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[9], vsel(vload(r.vf[9]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n13 = vshadow(r.vf[13]); n9 = vsel(n9, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0700: { ++fl.t; const v4u uv = vmaddd(nacc, n8, vsplat(n1[1])); { const std::uint8_t *q = qword(mem, i3 + 961u); std::memcpy(&r.vf[6], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n6 = vshadow(r.vf[6]); nacc = uv; }
L_0708: { ++fl.t; const v4u uv = vmuld(n24, n7); vstore(r.vf[24], uv); fl.stick<15u, kSticky>(uv); n24 = uv; }
L_0710: { ++fl.t; const v4u uv = vmuld(n16, vsplat(n1[1])); { const std::uint8_t *q = qword(mem, i3 + 962u); std::memcpy(&r.vf[8], q, 16); } vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n8 = vshadow(r.vf[8]); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0718: { ++fl.t; const v4u uv = vmaddd(nacc, n5, vsplat(n9[0])); { const std::uint8_t *q = qword(mem, i3 + 963u); std::memcpy(&r.vf[10], q, 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); n10 = vshadow(r.vf[10]); nacc = uv; }
L_0720: { ++fl.t; const v4u uv = vmaddd(nacc, n6, vsplat(n9[1])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0728: { ++fl.t; const v4u uv = vftoi(vload(r.vf[24]), 0); vstore(r.vf[7], uv); n7 = vshadow(r.vf[7]); }
L_0730: { ++fl.t; const v4u uv = vmaddd(nacc, n8, vsplat(n9[2])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0738: { ++fl.t; vflushd(r.vf[27], v4u{0u, 0u, 0u, 0xFFFFFFFFu}); const v4u uv = vmaddd(nacc, n10, vsplat(n1[2])); vstore(r.vf[24], vsel(vload(r.vf[24]), vload(r.vf[27]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n24 = vshadow(r.vf[24]); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0740: { ++fl.t; const v4u uv = vmuld(n28, vsplat(n26[0])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0748: { ++fl.t; const v4u uv = vmaddd(nacc, n29, vsplat(n26[1])); { std::uint8_t *q = qword(mem, i1 + 1u); std::memcpy(q, &r.vf[7], 16); } vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0750: { ++fl.t; const v4u uv = vmaddd(nacc, n30, vsplat(n26[2])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0758: { ++fl.t; const v4u uv = vmaddd(nacc, n2, vsplat(n25[0])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0760: { ++fl.t; const v4u uv = vmaddd(nacc, n4, vsplat(n25[1])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0768: { ++fl.t; const v4u uv = vmaddd(nacc, n3, vsplat(n25[2])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0770: { ++fl.t; const v4u uv = vmuld(n16, vsplat(n1[2])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.stick<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0778: { ++fl.t; const v4u uv = vsubd(n27, n24); vstore(r.vf[25], uv); fl.stick<15u, kSticky>(uv); n25 = uv; }
L_0780: { ++fl.t; }
L_0788: { ++fl.t; }
L_0790: { ++fl.t; const v4u uv = vmaddd(nacc, n5, vsplat(n26[0])); vstore(r.acc, uv); fl.stick<15u, kSticky>(uv); nacc = uv; }
L_0798: { ++fl.t; const v4u uv = vmaddd(nacc, n6, vsplat(n26[1])); vstore(r.acc, uv); fl.push<15u, kSticky>(uv); nacc = uv; }
L_07A0: { ++fl.t; const v4u uv = vmaddd(nacc, n8, vsplat(n26[2])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push<14u, kSticky>(uv); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_07A8: { ++fl.t; set_vi(i1, i11 - i12); }
L_07B0: { ++fl.t; set_vi(i6, i8 + 0u); }
L_07B8: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_07C0: { ++fl.t; }
    if (pend) { pend = false; goto L_07F0; }
L_07C8: { ++fl.t; set_vi(i15, (((1992u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_07D0: { ++fl.t; }
    if (pend) { pend = false; goto L_1658; }
L_07D8: { ++fl.t; set_vi(i10, 0u + 0u); }
L_07E0: { ++fl.t; set_vi(i9, 0u + i12); }
L_07E8: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_07F0: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_07F8: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; vflushd(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflushd(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflushd(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); goto L_0538; }
L_0800: { ++fl.t; set_vi(i5, 0u + 259u); }
L_0808: { ++fl.t; pend = true; }
L_0810: { ++fl.t; set_vi(i4, 0u + 167u); }
    if (pend) { pend = false; goto L_17F8; }
    vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((2072u + sh) & 16383u));
    return;
L_1658: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1660: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1668: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1670: { ++fl.t; set_vi(i2, i10 | i2); }
L_1678: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1680: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1688: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_1690: { ++fl.t; }
L_1698: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_16A0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_16A8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_16B0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_16B8: { ++fl.t; vkick_last(daz, 1, i3); }
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_16C0: { ++fl.t; ending = true; }
L_16C8: { ++fl.t; }
    if (ending) { vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((5840u + sh) & 16383u); return; }
    vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((5840u + sh) & 16383u));
    return;
L_16F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 31u); std::memcpy(&r.vf[1], q, 16); } n1 = vshadow(r.vf[1]); }
L_1700: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 26u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } n2 = vshadow(r.vf[2]); }
L_1708: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1710: { ++fl.t; set_vi(i10, 0u + 0u); }
L_1718: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_1720: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 1u); const std::uint32_t v = i1; std::memcpy(q + 0, &v, 4); } }
L_1728: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 2u); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); std::memcpy(q + 12, &r.vf[2].w[3], 4); } }
L_1730: { ++fl.t; set_vi(i9, i12 + 2u); }
L_1738: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1740: { ++fl.t; set_vi(i12, i12 + 3u); }
    if (pendj) { pendj = false; vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
    vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((5960u + sh) & 16383u));
    return;
L_17F8: { ++fl.t; set_vi(i6, i6 + i6); }
L_1800: { ++fl.t; set_vi(i6, i6 + i6); }
L_1808: { ++fl.t; set_vi(i3, 0u + 4096u); }
L_1810: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_1818: { ++fl.t; set_vi(i6, i6 + i6); }
    if (pend) { pend = false; goto L_1850; }
L_1820: { ++fl.t; set_vi(i15, (((6176u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1828: { ++fl.t; set_vi(i1, 0u + 4u); }
    if (pend) { pend = false; goto L_16F8; }
L_1830: { ++fl.t; set_vi(i1, 0u + 1u); }
L_1838: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 8, &v, 4); } }
L_1840: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 0, &v, 4); } }
L_1848: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = 0u; std::memcpy(q + 4, &v, 4); } }
L_1850: { ++fl.t; set_vi(i3, i6 & i3); }
L_1858: { ++fl.t; pend = static_cast<std::int16_t>(i6) >= 0; }
L_1860: { ++fl.t; set_vi(i6, i6 + i6); bi = 6u; }
    if (pend) { pend = false; goto L_1878; }
L_1868: { ++fl.t; set_vi(i15, (((6248u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1870: { ++fl.t; next_bk = i3; set_vi(i3, 0u + 512u); bk = next_bk; bi = 3u; }
    if (pend) { pend = false; goto L_16C0; }
L_1878: { ++fl.t; pend = 0u == (bi == 3 ? bk : i3); }
L_1880: { ++fl.t; { const std::uint8_t *q = qword(mem, i13 + 0u); std::memcpy(&r.vf[14], q, 16); } }
    if (pend) { pend = false; goto L_18B8; }
L_1888: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_1890: { ++fl.t; set_vi(i7, r.vf[17].w[3]); }
    if (pend) { pend = false; goto L_18D8; }
L_1898: { ++fl.t; jpc = (static_cast<std::uint32_t>(i5) * 8u) & 16383u; set_vi(i15, (((6296u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_18A0: { ++fl.t; set_vi(i6, i4 + 0u); }
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18A8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i6) * 8u) & 16383u; pendj = true; }
L_18B0: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18B8: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_18C0: { ++fl.t; }
    if (pend) { pend = false; goto L_18D8; }
L_18C8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i4) * 8u) & 16383u; pendj = true; }
L_18D0: { ++fl.t; }
    if (pendj) { pendj = false; vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); goto dispatch; }
L_18D8: { ++fl.t; pend = true; }
L_18E0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
    if (pend) { pend = false; goto L_01F8; }
    vflush(r.vf[1], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[9], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[25], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); vflush(r.vf[26], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.vf[27], v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); vflush(r.acc, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu}); fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, ((6376u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vhop(hop, jpc);
    return;
}
static __attribute__((noinline, cold)) void vu1_B7D83EFFFD0963A0_c(Vu0Regs &r, std::uint8_t *mem, VuDaz &daz, std::uint32_t &hop) { vu1_B7D83EFFFD0963A0_b<true>(r, mem, daz, hop); }
void vu1_B7D83EFFFD0963A0(Vu0Regs &r, std::uint8_t *mem) {
    std::uint32_t hop = kNoHop;
    {
        VuDaz daz;
        if ((r.status & 0xC0u) == 0xC0u) vu1_B7D83EFFFD0963A0_b<false>(r, mem, daz, hop);
        else vu1_B7D83EFFFD0963A0_c(r, mem, daz, hop);
    }
    if (hop != kNoHop) vu::interpret(1, hop);
}

template <bool kSticky>
static void vu1_21FAF78CD670DD7D_s(Vu0Regs &r, std::uint8_t *mem) {
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
    static constexpr std::uint8_t ks_0E40[] = {0, 0};
    static constexpr std::uint8_t ks_0E48[] = {0, 0};
    static constexpr std::uint8_t ks_0E50[] = {1, 0};
    static constexpr std::uint8_t ke_0E40_0E48[] = {0, 1};
    static constexpr std::uint8_t ke_0E48_0E50[] = {0, 1};
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
    if (pend) { pend = false; goto L_0E10; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0D68; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1228; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F60; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1628; }
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
L_0D68: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0D70: { ++fl.t; set_vi(i1, i5 & i1); }
L_0D78: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0D80: { ++fl.t; pend = 0u == i1; }
L_0D88: { ++fl.t; }
    if (pend) { pend = false; goto L_0DA0; }
L_0D90: { ++fl.t; set_vi(i4, 0u + i2); }
L_0D98: { ++fl.t; }
L_0DA0: { ++fl.t; pend = 0u == i4; }
L_0DA8: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0DF8; }
L_0DB0: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0DB8: { ++fl.t; pend = 0u == i4; }
L_0DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_0DE0; }
L_0DC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0DD0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0DE8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0E00: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0E18: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0E20: { ++fl.t; pend = 0u != i4; }
L_0E28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; st = 0u; goto L_0E40; }
L_0E30: { ++fl.t; pend = 0u != i3; }
L_0E38: { ++fl.t; }
    if (pend) { pend = false; goto L_0E58; }
    st = 1u; 
L_0E40: { fl.t += 1u + ks_0E40[st]; set_vi(i3, 0u + 32735u); }
    st = ke_0E40_0E48[st]; 
L_0E48: { fl.t += 1u + ks_0E48[st]; pend = true; }
    st = ke_0E48_0E50[st]; 
L_0E50: { fl.t += 1u + ks_0E50[st]; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0E68; }
L_0E58: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0E60: { ++fl.t; set_vi(i1, i1 | i3); }
L_0E68: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0E70: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0E78: { ++fl.t; pend = true; }
L_0E80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_1628; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3720u + sh) & 16383u));
    return;
L_0F60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F68: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F78: { ++fl.t; pend = 0u == i1; }
L_0F80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0F90; }
L_0F88: { ++fl.t; set_vi(i4, 0u + i2); }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0F98: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FB0: { ++fl.t; pend = 0u != i4; }
L_0FB8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FD8; }
L_0FC0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4080u + sh) & 16383u));
    return;
L_1228: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1230: { ++fl.t; set_vi(i1, i5 & i1); }
L_1238: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1240: { ++fl.t; pend = 0u == i1; }
L_1248: { ++fl.t; }
    if (pend) { pend = false; goto L_1260; }
L_1250: { ++fl.t; set_vi(i4, 0u + i2); }
L_1258: { ++fl.t; }
L_1260: { ++fl.t; pend = 0u != i4; }
L_1268: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1280; }
L_1270: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1278: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4752u + sh) & 16383u));
    return;
L_1628: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1630: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1638: { ++fl.t; set_vi(i9, 0u + i12); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1648: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5720u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_21FAF78CD670DD7D_c(Vu0Regs &r, std::uint8_t *mem) { vu1_21FAF78CD670DD7D_s<true>(r, mem); }

void vu1_21FAF78CD670DD7D(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_21FAF78CD670DD7D_s<false>(r, mem);
    else vu1_21FAF78CD670DD7D_c(r, mem);
}

template <bool kSticky>
static void vu1_41BEFC0E70BE7C5C_s(Vu0Regs &r, std::uint8_t *mem) {
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
    if (pend) { pend = false; goto L_1628; }
L_00F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i8, v); } }
L_0100: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0108: { ++fl.t; set_vi(i15, (((264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 4, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0A58; }
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0E10; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0D68; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1228; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F60; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1628; }
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
L_0A58: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); set_vi(i1, 0u + 8u); vstore(r.vf[3], uv); n3 = vshadow_eager(r.vf[3]); }
L_0A60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0A68: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0A70: { ++fl.t; pend = 0u == i1; }
L_0A78: { ++fl.t; set_vi(i3, 0u + 3u); }
    if (pend) { pend = false; goto L_0A88; }
L_0A80: { ++fl.t; set_vi(i4, 0u + i2); }
L_0A88: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0A90: { ++fl.t; set_vi(i1, i4 & i1); }
L_0A98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0AA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0AB0: { ++fl.t; pend = 0u == i1; }
L_0AB8: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0AC8; }
L_0AC0: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0AC8: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); set_vi(i5, i4 & i3); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0AD0: { ++fl.t; set_vi(i4, i4 & i2); }
L_0AD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0AE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0AE8: { ++fl.t; pend = 0u == i5; }
L_0AF0: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0B38; }
L_0AF8: { ++fl.t; r.i = 1124073472u; }
L_0B00: { ++fl.t; pend = 0u == i5; }
L_0B08: { ++fl.t; }
    if (pend) { pend = false; goto L_0B60; }
L_0B10: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 1u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0B18: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B20: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B28: { ++fl.t; pend = true; }
L_0B30: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B38: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B40: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B48: { ++fl.t; set_vi(i1, i1 & i3); }
L_0B50: { ++fl.t; pend = true; }
L_0B58: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B60: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B68: { ++fl.t; r.i = 1124073472u; }
L_0B70: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B78: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B80: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0B88: { ++fl.t; pend = 0u == i4; }
L_0B90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0BA8; }
L_0B98: { ++fl.t; r.i = 1073676288u; }
L_0BA0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0BA8: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0BB0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0BB8: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BC0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0BC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0BD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
L_0BD8: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0BE0: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0BE8: { ++fl.t; set_vi(i15, (((3048u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0BF0: { ++fl.t; }
    if (pend) { pend = false; goto L_1628; }
L_0BF8: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0C00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0C08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0C10: { ++fl.t; pend = true; }
L_0C18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0F98; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3104u + sh) & 16383u));
    return;
L_0D68: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0D70: { ++fl.t; set_vi(i1, i5 & i1); }
L_0D78: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0D80: { ++fl.t; pend = 0u == i1; }
L_0D88: { ++fl.t; }
    if (pend) { pend = false; goto L_0DA0; }
L_0D90: { ++fl.t; set_vi(i4, 0u + i2); }
L_0D98: { ++fl.t; }
L_0DA0: { ++fl.t; pend = 0u == i4; }
L_0DA8: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0DF8; }
L_0DB0: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0DB8: { ++fl.t; pend = 0u == i4; }
L_0DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_0DE0; }
L_0DC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0DD0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0DE8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0E00: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0E18: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0E20: { ++fl.t; pend = 0u != i4; }
L_0E28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; goto L_0E40; }
L_0E30: { ++fl.t; pend = 0u != i3; }
L_0E38: { ++fl.t; }
    if (pend) { pend = false; goto L_0E58; }
L_0E40: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_0E48: { ++fl.t; pend = true; }
L_0E50: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0E68; }
L_0E58: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0E60: { ++fl.t; set_vi(i1, i1 | i3); }
L_0E68: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0E70: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0E78: { ++fl.t; pend = true; }
L_0E80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_1628; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3720u + sh) & 16383u));
    return;
L_0F60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F68: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F78: { ++fl.t; pend = 0u == i1; }
L_0F80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0F90; }
L_0F88: { ++fl.t; set_vi(i4, 0u + i2); }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0F98: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FB0: { ++fl.t; pend = 0u != i4; }
L_0FB8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FD8; }
L_0FC0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4080u + sh) & 16383u));
    return;
L_1228: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1230: { ++fl.t; set_vi(i1, i5 & i1); }
L_1238: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1240: { ++fl.t; pend = 0u == i1; }
L_1248: { ++fl.t; }
    if (pend) { pend = false; goto L_1260; }
L_1250: { ++fl.t; set_vi(i4, 0u + i2); }
L_1258: { ++fl.t; }
L_1260: { ++fl.t; pend = 0u != i4; }
L_1268: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1280; }
L_1270: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1278: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4752u + sh) & 16383u));
    return;
L_1628: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1630: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1638: { ++fl.t; set_vi(i9, 0u + i12); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1648: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5720u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_41BEFC0E70BE7C5C_c(Vu0Regs &r, std::uint8_t *mem) { vu1_41BEFC0E70BE7C5C_s<true>(r, mem); }

void vu1_41BEFC0E70BE7C5C(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_41BEFC0E70BE7C5C_s<false>(r, mem);
    else vu1_41BEFC0E70BE7C5C_c(r, mem);
}

template <bool kSticky>
static void vu1_7B919CBD7F8FF7DA_s(Vu0Regs &r, std::uint8_t *mem) {
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
    if (pend) { pend = false; goto L_1628; }
L_00F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i8, v); } }
L_0100: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0108: { ++fl.t; set_vi(i15, (((264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 4, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0A58; }
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0E10; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0D68; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1228; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F60; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1628; }
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
L_0A58: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); set_vi(i1, 0u + 8u); vstore(r.vf[3], uv); n3 = vshadow_eager(r.vf[3]); }
L_0A60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0A68: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0A70: { ++fl.t; pend = 0u == i1; }
L_0A78: { ++fl.t; set_vi(i3, 0u + 3u); }
    if (pend) { pend = false; goto L_0A88; }
L_0A80: { ++fl.t; set_vi(i4, 0u + i2); }
L_0A88: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0A90: { ++fl.t; set_vi(i1, i4 & i1); }
L_0A98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0AA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0AB0: { ++fl.t; pend = 0u == i1; }
L_0AB8: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0AC8; }
L_0AC0: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0AC8: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); set_vi(i5, i4 & i3); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0AD0: { ++fl.t; set_vi(i4, i4 & i2); }
L_0AD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0AE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0AE8: { ++fl.t; pend = 0u == i5; }
L_0AF0: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0B38; }
L_0AF8: { ++fl.t; r.i = 1124073472u; }
L_0B00: { ++fl.t; pend = 0u == i5; }
L_0B08: { ++fl.t; }
    if (pend) { pend = false; goto L_0B60; }
L_0B10: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 1u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0B18: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B20: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B28: { ++fl.t; pend = true; }
L_0B30: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B38: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B40: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B48: { ++fl.t; set_vi(i1, i1 & i3); }
L_0B50: { ++fl.t; pend = true; }
L_0B58: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B60: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B68: { ++fl.t; r.i = 1124073472u; }
L_0B70: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B78: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B80: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0B88: { ++fl.t; pend = 0u == i4; }
L_0B90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0BA8; }
L_0B98: { ++fl.t; r.i = 1073676288u; }
L_0BA0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0BA8: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0BB0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0BB8: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BC0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0BC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0BD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
L_0BD8: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0BE0: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0BE8: { ++fl.t; set_vi(i15, (((3048u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0BF0: { ++fl.t; }
    if (pend) { pend = false; goto L_1628; }
L_0BF8: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0C00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0C08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0C10: { ++fl.t; pend = true; }
L_0C18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0F98; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3104u + sh) & 16383u));
    return;
L_0D68: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0D70: { ++fl.t; set_vi(i1, i5 & i1); }
L_0D78: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0D80: { ++fl.t; pend = 0u == i1; }
L_0D88: { ++fl.t; }
    if (pend) { pend = false; goto L_0DA0; }
L_0D90: { ++fl.t; set_vi(i4, 0u + i2); }
L_0D98: { ++fl.t; }
L_0DA0: { ++fl.t; pend = 0u == i4; }
L_0DA8: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0DF8; }
L_0DB0: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0DB8: { ++fl.t; pend = 0u == i4; }
L_0DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_0DE0; }
L_0DC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0DD0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0DE8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0E00: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0E18: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0E20: { ++fl.t; pend = 0u != i4; }
L_0E28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; goto L_0E40; }
L_0E30: { ++fl.t; pend = 0u != i3; }
L_0E38: { ++fl.t; }
    if (pend) { pend = false; goto L_0E58; }
L_0E40: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_0E48: { ++fl.t; pend = true; }
L_0E50: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0E68; }
L_0E58: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0E60: { ++fl.t; set_vi(i1, i1 | i3); }
L_0E68: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0E70: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0E78: { ++fl.t; pend = true; }
L_0E80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_1628; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3720u + sh) & 16383u));
    return;
L_0F60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F68: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F78: { ++fl.t; pend = 0u == i1; }
L_0F80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0F90; }
L_0F88: { ++fl.t; set_vi(i4, 0u + i2); }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0F98: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FB0: { ++fl.t; pend = 0u != i4; }
L_0FB8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FD8; }
L_0FC0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4080u + sh) & 16383u));
    return;
L_1228: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1230: { ++fl.t; set_vi(i1, i5 & i1); }
L_1238: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1240: { ++fl.t; pend = 0u == i1; }
L_1248: { ++fl.t; }
    if (pend) { pend = false; goto L_1260; }
L_1250: { ++fl.t; set_vi(i4, 0u + i2); }
L_1258: { ++fl.t; }
L_1260: { ++fl.t; pend = 0u != i4; }
L_1268: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1280; }
L_1270: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1278: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4752u + sh) & 16383u));
    return;
L_1628: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1630: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1638: { ++fl.t; set_vi(i9, 0u + i12); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1648: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5720u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_7B919CBD7F8FF7DA_c(Vu0Regs &r, std::uint8_t *mem) { vu1_7B919CBD7F8FF7DA_s<true>(r, mem); }

void vu1_7B919CBD7F8FF7DA(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_7B919CBD7F8FF7DA_s<false>(r, mem);
    else vu1_7B919CBD7F8FF7DA_c(r, mem);
}

template <bool kSticky>
static void vu1_8FB77EAA43501C37_s(Vu0Regs &r, std::uint8_t *mem) {
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
    if (pend) { pend = false; goto L_1628; }
L_00F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i8, v); } }
L_0100: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0108: { ++fl.t; set_vi(i15, (((264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 4, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0A58; }
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0E10; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0D68; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1228; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F60; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1628; }
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
L_0A58: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); set_vi(i1, 0u + 8u); vstore(r.vf[3], uv); n3 = vshadow_eager(r.vf[3]); }
L_0A60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0A68: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0A70: { ++fl.t; pend = 0u == i1; }
L_0A78: { ++fl.t; set_vi(i3, 0u + 3u); }
    if (pend) { pend = false; goto L_0A88; }
L_0A80: { ++fl.t; set_vi(i4, 0u + i2); }
L_0A88: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0A90: { ++fl.t; set_vi(i1, i4 & i1); }
L_0A98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0AA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0AB0: { ++fl.t; pend = 0u == i1; }
L_0AB8: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0AC8; }
L_0AC0: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0AC8: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); set_vi(i5, i4 & i3); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0AD0: { ++fl.t; set_vi(i4, i4 & i2); }
L_0AD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0AE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0AE8: { ++fl.t; pend = 0u == i5; }
L_0AF0: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0B38; }
L_0AF8: { ++fl.t; r.i = 1124073472u; }
L_0B00: { ++fl.t; pend = 0u == i5; }
L_0B08: { ++fl.t; }
    if (pend) { pend = false; goto L_0B60; }
L_0B10: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 1u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0B18: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B20: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B28: { ++fl.t; pend = true; }
L_0B30: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B38: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B40: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B48: { ++fl.t; set_vi(i1, i1 & i3); }
L_0B50: { ++fl.t; pend = true; }
L_0B58: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B60: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B68: { ++fl.t; r.i = 1124073472u; }
L_0B70: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B78: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B80: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0B88: { ++fl.t; pend = 0u == i4; }
L_0B90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0BA8; }
L_0B98: { ++fl.t; r.i = 1073676288u; }
L_0BA0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0BA8: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0BB0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0BB8: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BC0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0BC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0BD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
L_0BD8: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0BE0: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0BE8: { ++fl.t; set_vi(i15, (((3048u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0BF0: { ++fl.t; }
    if (pend) { pend = false; goto L_1628; }
L_0BF8: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0C00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0C08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0C10: { ++fl.t; pend = true; }
L_0C18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0F98; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((3104u + sh) & 16383u));
    return;
L_0D68: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0D70: { ++fl.t; set_vi(i1, i5 & i1); }
L_0D78: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0D80: { ++fl.t; pend = 0u == i1; }
L_0D88: { ++fl.t; }
    if (pend) { pend = false; goto L_0DA0; }
L_0D90: { ++fl.t; set_vi(i4, 0u + i2); }
L_0D98: { ++fl.t; }
L_0DA0: { ++fl.t; pend = 0u == i4; }
L_0DA8: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0DF8; }
L_0DB0: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0DB8: { ++fl.t; pend = 0u == i4; }
L_0DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_0DE0; }
L_0DC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0DD0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0DE8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0E00: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0E18: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0E20: { ++fl.t; pend = 0u != i4; }
L_0E28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; goto L_0E40; }
L_0E30: { ++fl.t; pend = 0u != i3; }
L_0E38: { ++fl.t; }
    if (pend) { pend = false; goto L_0E58; }
L_0E40: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_0E48: { ++fl.t; pend = true; }
L_0E50: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0E68; }
L_0E58: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0E60: { ++fl.t; set_vi(i1, i1 | i3); }
L_0E68: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0E70: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0E78: { ++fl.t; pend = true; }
L_0E80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_1628; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((3720u + sh) & 16383u));
    return;
L_0F60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F68: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F78: { ++fl.t; pend = 0u == i1; }
L_0F80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0F90; }
L_0F88: { ++fl.t; set_vi(i4, 0u + i2); }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0F98: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FB0: { ++fl.t; pend = 0u != i4; }
L_0FB8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FD8; }
L_0FC0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((4080u + sh) & 16383u));
    return;
L_1228: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1230: { ++fl.t; set_vi(i1, i5 & i1); }
L_1238: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1240: { ++fl.t; pend = 0u == i1; }
L_1248: { ++fl.t; }
    if (pend) { pend = false; goto L_1260; }
L_1250: { ++fl.t; set_vi(i4, 0u + i2); }
L_1258: { ++fl.t; }
L_1260: { ++fl.t; pend = 0u != i4; }
L_1268: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1280; }
L_1270: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1278: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((4752u + sh) & 16383u));
    return;
L_1628: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1630: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1638: { ++fl.t; set_vi(i9, 0u + i12); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1648: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, ((5720u + sh) & 16383u));
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

static __attribute__((noinline, cold)) void vu1_8FB77EAA43501C37_c(Vu0Regs &r, std::uint8_t *mem) { vu1_8FB77EAA43501C37_s<true>(r, mem); }

void vu1_8FB77EAA43501C37(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_8FB77EAA43501C37_s<false>(r, mem);
    else vu1_8FB77EAA43501C37_c(r, mem);
}

void vu1_93375384E3A4C884(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 528u) & 16383u;
    (void)sh;
    std::uint16_t i2 = r.vi[2];
    goto L_0210;
L_0210: { ++fl.t; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); vu::interpret(1, ((544u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); vu::interpret(1, jpc);
    return;
}

template <bool kSticky>
static void vu1_BCC0A6521B147730_s(Vu0Regs &r, std::uint8_t *mem) {
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
    if (pend) { pend = false; goto L_1628; }
L_00F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i8, v); } }
L_0100: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0108: { ++fl.t; set_vi(i15, (((264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 4, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0A58; }
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0E10; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0D68; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1228; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F60; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1628; }
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
L_0A58: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); set_vi(i1, 0u + 8u); vstore(r.vf[3], uv); n3 = vshadow_eager(r.vf[3]); }
L_0A60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0A68: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0A70: { ++fl.t; pend = 0u == i1; }
L_0A78: { ++fl.t; set_vi(i3, 0u + 3u); }
    if (pend) { pend = false; goto L_0A88; }
L_0A80: { ++fl.t; set_vi(i4, 0u + i2); }
L_0A88: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0A90: { ++fl.t; set_vi(i1, i4 & i1); }
L_0A98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0AA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0AB0: { ++fl.t; pend = 0u == i1; }
L_0AB8: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0AC8; }
L_0AC0: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0AC8: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); set_vi(i5, i4 & i3); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0AD0: { ++fl.t; set_vi(i4, i4 & i2); }
L_0AD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0AE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0AE8: { ++fl.t; pend = 0u == i5; }
L_0AF0: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0B38; }
L_0AF8: { ++fl.t; r.i = 1124073472u; }
L_0B00: { ++fl.t; pend = 0u == i5; }
L_0B08: { ++fl.t; }
    if (pend) { pend = false; goto L_0B60; }
L_0B10: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 1u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0B18: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B20: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B28: { ++fl.t; pend = true; }
L_0B30: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B38: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B40: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B48: { ++fl.t; set_vi(i1, i1 & i3); }
L_0B50: { ++fl.t; pend = true; }
L_0B58: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B60: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B68: { ++fl.t; r.i = 1124073472u; }
L_0B70: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B78: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B80: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0B88: { ++fl.t; pend = 0u == i4; }
L_0B90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0BA8; }
L_0B98: { ++fl.t; r.i = 1073676288u; }
L_0BA0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0BA8: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0BB0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0BB8: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BC0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0BC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0BD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
L_0BD8: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0BE0: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0BE8: { ++fl.t; set_vi(i15, (((3048u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0BF0: { ++fl.t; }
    if (pend) { pend = false; goto L_1628; }
L_0BF8: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0C00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0C08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0C10: { ++fl.t; pend = true; }
L_0C18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0F98; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3104u + sh) & 16383u));
    return;
L_0D68: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0D70: { ++fl.t; set_vi(i1, i5 & i1); }
L_0D78: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0D80: { ++fl.t; pend = 0u == i1; }
L_0D88: { ++fl.t; }
    if (pend) { pend = false; goto L_0DA0; }
L_0D90: { ++fl.t; set_vi(i4, 0u + i2); }
L_0D98: { ++fl.t; }
L_0DA0: { ++fl.t; pend = 0u == i4; }
L_0DA8: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0DF8; }
L_0DB0: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0DB8: { ++fl.t; pend = 0u == i4; }
L_0DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_0DE0; }
L_0DC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0DD0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0DE8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0E00: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0E18: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0E20: { ++fl.t; pend = 0u != i4; }
L_0E28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; goto L_0E40; }
L_0E30: { ++fl.t; pend = 0u != i3; }
L_0E38: { ++fl.t; }
    if (pend) { pend = false; goto L_0E58; }
L_0E40: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_0E48: { ++fl.t; pend = true; }
L_0E50: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0E68; }
L_0E58: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0E60: { ++fl.t; set_vi(i1, i1 | i3); }
L_0E68: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0E70: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0E78: { ++fl.t; pend = true; }
L_0E80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_1628; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3720u + sh) & 16383u));
    return;
L_0F60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F68: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F78: { ++fl.t; pend = 0u == i1; }
L_0F80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0F90; }
L_0F88: { ++fl.t; set_vi(i4, 0u + i2); }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0F98: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FB0: { ++fl.t; pend = 0u != i4; }
L_0FB8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FD8; }
L_0FC0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4080u + sh) & 16383u));
    return;
L_1228: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1230: { ++fl.t; set_vi(i1, i5 & i1); }
L_1238: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1240: { ++fl.t; pend = 0u == i1; }
L_1248: { ++fl.t; }
    if (pend) { pend = false; goto L_1260; }
L_1250: { ++fl.t; set_vi(i4, 0u + i2); }
L_1258: { ++fl.t; }
L_1260: { ++fl.t; pend = 0u != i4; }
L_1268: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1280; }
L_1270: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1278: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4752u + sh) & 16383u));
    return;
L_1628: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1630: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1638: { ++fl.t; set_vi(i9, 0u + i12); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1648: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5720u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_BCC0A6521B147730_c(Vu0Regs &r, std::uint8_t *mem) { vu1_BCC0A6521B147730_s<true>(r, mem); }

void vu1_BCC0A6521B147730(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_BCC0A6521B147730_s<false>(r, mem);
    else vu1_BCC0A6521B147730_c(r, mem);
}

template <bool kSticky>
static void vu1_CAAAF09008FD1477_s(Vu0Regs &r, std::uint8_t *mem) {
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
    if (pend) { pend = false; goto L_0A58; }
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0E10; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0D68; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1228; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F60; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1628; }
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
L_0A58: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); set_vi(i1, 0u + 8u); vstore(r.vf[3], uv); n3 = vshadow_eager(r.vf[3]); }
L_0A60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0A68: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0A70: { ++fl.t; pend = 0u == i1; }
L_0A78: { ++fl.t; set_vi(i3, 0u + 3u); }
    if (pend) { pend = false; goto L_0A88; }
L_0A80: { fl.t += 2u; set_vi(i4, 0u + i2); }
L_0A88: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0A90: { ++fl.t; set_vi(i1, i4 & i1); }
L_0A98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0AA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0AB0: { ++fl.t; pend = 0u == i1; }
L_0AB8: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0AC8; }
L_0AC0: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0AC8: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); set_vi(i5, i4 & i3); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0AD0: { ++fl.t; set_vi(i4, i4 & i2); }
L_0AD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0AE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0AE8: { ++fl.t; pend = 0u == i5; }
L_0AF0: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0B38; }
L_0AF8: { ++fl.t; r.i = 1124073472u; }
L_0B00: { ++fl.t; pend = 0u == i5; }
L_0B08: { ++fl.t; }
    if (pend) { pend = false; goto L_0B60; }
L_0B10: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 1u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0B18: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B20: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B28: { ++fl.t; pend = true; }
L_0B30: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B38: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B40: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B48: { ++fl.t; set_vi(i1, i1 & i3); }
L_0B50: { ++fl.t; pend = true; }
L_0B58: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B60: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B68: { ++fl.t; r.i = 1124073472u; }
L_0B70: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B78: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B80: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0B88: { ++fl.t; pend = 0u == i4; }
L_0B90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0BA8; }
L_0B98: { ++fl.t; r.i = 1073676288u; }
L_0BA0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0BA8: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0BB0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0BB8: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BC0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0BC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0BD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
L_0BD8: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0BE0: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0BE8: { ++fl.t; set_vi(i15, (((3048u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0BF0: { ++fl.t; }
    if (pend) { pend = false; goto L_1628; }
L_0BF8: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0C00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0C08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0C10: { ++fl.t; pend = true; }
L_0C18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0F98; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3104u + sh) & 16383u));
    return;
L_0D68: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0D70: { ++fl.t; set_vi(i1, i5 & i1); }
L_0D78: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0D80: { ++fl.t; pend = 0u == i1; }
L_0D88: { ++fl.t; }
    if (pend) { pend = false; goto L_0DA0; }
L_0D90: { ++fl.t; set_vi(i4, 0u + i2); }
L_0D98: { ++fl.t; }
L_0DA0: { ++fl.t; pend = 0u == i4; }
L_0DA8: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0DF8; }
L_0DB0: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0DB8: { ++fl.t; pend = 0u == i4; }
L_0DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_0DE0; }
L_0DC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0DD0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0DE8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0E00: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0E18: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0E20: { ++fl.t; pend = 0u != i4; }
L_0E28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; goto L_0E40; }
L_0E30: { ++fl.t; pend = 0u != i3; }
L_0E38: { ++fl.t; }
    if (pend) { pend = false; goto L_0E58; }
L_0E40: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_0E48: { ++fl.t; pend = true; }
L_0E50: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0E68; }
L_0E58: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0E60: { ++fl.t; set_vi(i1, i1 | i3); }
L_0E68: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0E70: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0E78: { ++fl.t; pend = true; }
L_0E80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_1628; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3720u + sh) & 16383u));
    return;
L_0F60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F68: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F78: { ++fl.t; pend = 0u == i1; }
L_0F80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0F90; }
L_0F88: { ++fl.t; set_vi(i4, 0u + i2); }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0F98: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FB0: { ++fl.t; pend = 0u != i4; }
L_0FB8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FD8; }
L_0FC0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4080u + sh) & 16383u));
    return;
L_1228: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1230: { ++fl.t; set_vi(i1, i5 & i1); }
L_1238: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1240: { ++fl.t; pend = 0u == i1; }
L_1248: { ++fl.t; }
    if (pend) { pend = false; goto L_1260; }
L_1250: { ++fl.t; set_vi(i4, 0u + i2); }
L_1258: { ++fl.t; }
L_1260: { ++fl.t; pend = 0u != i4; }
L_1268: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1280; }
L_1270: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1278: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4752u + sh) & 16383u));
    return;
L_1628: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1630: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1638: { ++fl.t; set_vi(i9, 0u + i12); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1648: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5720u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_CAAAF09008FD1477_c(Vu0Regs &r, std::uint8_t *mem) { vu1_CAAAF09008FD1477_s<true>(r, mem); }

void vu1_CAAAF09008FD1477(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_CAAAF09008FD1477_s<false>(r, mem);
    else vu1_CAAAF09008FD1477_c(r, mem);
}

template <bool kSticky>
static void vu1_D7AEA3DF1DA3B67C_s(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 216u) & 16383u;
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
    goto L_00D8;
L_00D8: { ++fl.t; set_vi(i1, 0u + 26u); }
L_00E0: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(0u))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_00E8: { ++fl.t; set_vi(i15, (((232u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_00F0: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1628; }
L_00F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i8, v); } }
L_0100: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0108: { ++fl.t; set_vi(i15, (((264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 4, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0A58; }
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0E10; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0D68; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1228; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F60; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1628; }
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
L_0A58: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); set_vi(i1, 0u + 8u); vstore(r.vf[3], uv); n3 = vshadow_eager(r.vf[3]); }
L_0A60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0A68: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0A70: { ++fl.t; pend = 0u == i1; }
L_0A78: { ++fl.t; set_vi(i3, 0u + 3u); }
    if (pend) { pend = false; goto L_0A88; }
L_0A80: { ++fl.t; set_vi(i4, 0u + i2); }
L_0A88: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0A90: { ++fl.t; set_vi(i1, i4 & i1); }
L_0A98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0AA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0AB0: { ++fl.t; pend = 0u == i1; }
L_0AB8: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0AC8; }
L_0AC0: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0AC8: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); set_vi(i5, i4 & i3); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0AD0: { ++fl.t; set_vi(i4, i4 & i2); }
L_0AD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0AE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0AE8: { ++fl.t; pend = 0u == i5; }
L_0AF0: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0B38; }
L_0AF8: { ++fl.t; r.i = 1124073472u; }
L_0B00: { ++fl.t; pend = 0u == i5; }
L_0B08: { ++fl.t; }
    if (pend) { pend = false; goto L_0B60; }
L_0B10: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 1u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0B18: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B20: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B28: { ++fl.t; pend = true; }
L_0B30: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B38: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B40: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B48: { ++fl.t; set_vi(i1, i1 & i3); }
L_0B50: { ++fl.t; pend = true; }
L_0B58: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B60: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B68: { ++fl.t; r.i = 1124073472u; }
L_0B70: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B78: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B80: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0B88: { ++fl.t; pend = 0u == i4; }
L_0B90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0BA8; }
L_0B98: { ++fl.t; r.i = 1073676288u; }
L_0BA0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0BA8: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0BB0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0BB8: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BC0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0BC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0BD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
L_0BD8: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0BE0: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0BE8: { ++fl.t; set_vi(i15, (((3048u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0BF0: { ++fl.t; }
    if (pend) { pend = false; goto L_1628; }
L_0BF8: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0C00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0C08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0C10: { ++fl.t; pend = true; }
L_0C18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0F98; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3104u + sh) & 16383u));
    return;
L_0D68: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0D70: { ++fl.t; set_vi(i1, i5 & i1); }
L_0D78: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0D80: { ++fl.t; pend = 0u == i1; }
L_0D88: { ++fl.t; }
    if (pend) { pend = false; goto L_0DA0; }
L_0D90: { ++fl.t; set_vi(i4, 0u + i2); }
L_0D98: { ++fl.t; }
L_0DA0: { ++fl.t; pend = 0u == i4; }
L_0DA8: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0DF8; }
L_0DB0: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0DB8: { ++fl.t; pend = 0u == i4; }
L_0DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_0DE0; }
L_0DC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0DD0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0DE8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0E00: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0E18: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0E20: { ++fl.t; pend = 0u != i4; }
L_0E28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; goto L_0E40; }
L_0E30: { ++fl.t; pend = 0u != i3; }
L_0E38: { ++fl.t; }
    if (pend) { pend = false; goto L_0E58; }
L_0E40: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_0E48: { ++fl.t; pend = true; }
L_0E50: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0E68; }
L_0E58: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0E60: { ++fl.t; set_vi(i1, i1 | i3); }
L_0E68: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0E70: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0E78: { ++fl.t; pend = true; }
L_0E80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_1628; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3720u + sh) & 16383u));
    return;
L_0F60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F68: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F78: { ++fl.t; pend = 0u == i1; }
L_0F80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0F90; }
L_0F88: { ++fl.t; set_vi(i4, 0u + i2); }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0F98: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FB0: { ++fl.t; pend = 0u != i4; }
L_0FB8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FD8; }
L_0FC0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4080u + sh) & 16383u));
    return;
L_1228: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1230: { ++fl.t; set_vi(i1, i5 & i1); }
L_1238: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1240: { ++fl.t; pend = 0u == i1; }
L_1248: { ++fl.t; }
    if (pend) { pend = false; goto L_1260; }
L_1250: { ++fl.t; set_vi(i4, 0u + i2); }
L_1258: { ++fl.t; }
L_1260: { ++fl.t; pend = 0u != i4; }
L_1268: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1280; }
L_1270: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1278: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4752u + sh) & 16383u));
    return;
L_1628: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1630: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1638: { ++fl.t; set_vi(i9, 0u + i12); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1648: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5720u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_D7AEA3DF1DA3B67C_c(Vu0Regs &r, std::uint8_t *mem) { vu1_D7AEA3DF1DA3B67C_s<true>(r, mem); }

void vu1_D7AEA3DF1DA3B67C(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_D7AEA3DF1DA3B67C_s<false>(r, mem);
    else vu1_D7AEA3DF1DA3B67C_c(r, mem);
}

template <bool kSticky>
static void vu1_EE39DB3DDC62AEB7_s(Vu0Regs &r, std::uint8_t *mem) {
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
    if (pend) { pend = false; goto L_0A58; }
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0E10; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0D68; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1228; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F60; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1628; }
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
L_0A58: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); set_vi(i1, 0u + 8u); vstore(r.vf[3], uv); n3 = vshadow_eager(r.vf[3]); }
L_0A60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0A68: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0A70: { ++fl.t; pend = 0u == i1; }
L_0A78: { ++fl.t; set_vi(i3, 0u + 3u); }
    if (pend) { pend = false; goto L_0A88; }
L_0A80: { fl.t += 2u; set_vi(i4, 0u + i2); }
L_0A88: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0A90: { ++fl.t; set_vi(i1, i4 & i1); }
L_0A98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0AA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0AB0: { ++fl.t; pend = 0u == i1; }
L_0AB8: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0AC8; }
L_0AC0: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0AC8: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); set_vi(i5, i4 & i3); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0AD0: { ++fl.t; set_vi(i4, i4 & i2); }
L_0AD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0AE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0AE8: { ++fl.t; pend = 0u == i5; }
L_0AF0: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0B38; }
L_0AF8: { ++fl.t; r.i = 1124073472u; }
L_0B00: { ++fl.t; pend = 0u == i5; }
L_0B08: { ++fl.t; }
    if (pend) { pend = false; goto L_0B60; }
L_0B10: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 1u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0B18: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B20: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B28: { ++fl.t; pend = true; }
L_0B30: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B38: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B40: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B48: { ++fl.t; set_vi(i1, i1 & i3); }
L_0B50: { ++fl.t; pend = true; }
L_0B58: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B60: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B68: { ++fl.t; r.i = 1124073472u; }
L_0B70: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B78: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B80: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0B88: { ++fl.t; pend = 0u == i4; }
L_0B90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0BA8; }
L_0B98: { ++fl.t; r.i = 1073676288u; }
L_0BA0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0BA8: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0BB0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0BB8: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BC0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0BC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0BD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
L_0BD8: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0BE0: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0BE8: { ++fl.t; set_vi(i15, (((3048u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0BF0: { ++fl.t; }
    if (pend) { pend = false; goto L_1628; }
L_0BF8: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0C00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0C08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0C10: { ++fl.t; pend = true; }
L_0C18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0F98; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3104u + sh) & 16383u));
    return;
L_0D68: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0D70: { ++fl.t; set_vi(i1, i5 & i1); }
L_0D78: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0D80: { ++fl.t; pend = 0u == i1; }
L_0D88: { ++fl.t; }
    if (pend) { pend = false; goto L_0DA0; }
L_0D90: { ++fl.t; set_vi(i4, 0u + i2); }
L_0D98: { ++fl.t; }
L_0DA0: { ++fl.t; pend = 0u == i4; }
L_0DA8: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0DF8; }
L_0DB0: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0DB8: { ++fl.t; pend = 0u == i4; }
L_0DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_0DE0; }
L_0DC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0DD0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0DE8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0E00: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0E18: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0E20: { ++fl.t; pend = 0u != i4; }
L_0E28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; goto L_0E40; }
L_0E30: { ++fl.t; pend = 0u != i3; }
L_0E38: { ++fl.t; }
    if (pend) { pend = false; goto L_0E58; }
L_0E40: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_0E48: { ++fl.t; pend = true; }
L_0E50: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0E68; }
L_0E58: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0E60: { ++fl.t; set_vi(i1, i1 | i3); }
L_0E68: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0E70: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0E78: { ++fl.t; pend = true; }
L_0E80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_1628; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3720u + sh) & 16383u));
    return;
L_0F60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F68: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F78: { ++fl.t; pend = 0u == i1; }
L_0F80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0F90; }
L_0F88: { ++fl.t; set_vi(i4, 0u + i2); }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0F98: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FB0: { ++fl.t; pend = 0u != i4; }
L_0FB8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FD8; }
L_0FC0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4080u + sh) & 16383u));
    return;
L_1228: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1230: { ++fl.t; set_vi(i1, i5 & i1); }
L_1238: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1240: { ++fl.t; pend = 0u == i1; }
L_1248: { ++fl.t; }
    if (pend) { pend = false; goto L_1260; }
L_1250: { ++fl.t; set_vi(i4, 0u + i2); }
L_1258: { ++fl.t; }
L_1260: { ++fl.t; pend = 0u != i4; }
L_1268: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1280; }
L_1270: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1278: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4752u + sh) & 16383u));
    return;
L_1628: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1630: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1638: { ++fl.t; set_vi(i9, 0u + i12); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1648: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5720u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_EE39DB3DDC62AEB7_c(Vu0Regs &r, std::uint8_t *mem) { vu1_EE39DB3DDC62AEB7_s<true>(r, mem); }

void vu1_EE39DB3DDC62AEB7(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_EE39DB3DDC62AEB7_s<false>(r, mem);
    else vu1_EE39DB3DDC62AEB7_c(r, mem);
}

template <bool kSticky>
static void vu1_5C4C8635B51B0F89_s(Vu0Regs &r, std::uint8_t *mem) {
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
    if (pend) { pend = false; goto L_0D68; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1228; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F60; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1628; }
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
L_0D68: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0D70: { ++fl.t; set_vi(i1, i5 & i1); }
L_0D78: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0D80: { ++fl.t; pend = 0u == i1; }
L_0D88: { ++fl.t; }
    if (pend) { pend = false; goto L_0DA0; }
L_0D90: { fl.t += 2u; set_vi(i4, 0u + i2); }
L_0D98: { ++fl.t; }
L_0DA0: { ++fl.t; pend = 0u == i4; }
L_0DA8: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0DF8; }
L_0DB0: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0DB8: { ++fl.t; pend = 0u == i4; }
L_0DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_0DE0; }
L_0DC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0DD0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0DE8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0E00: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3600u + sh) & 16383u));
    return;
L_0F60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F68: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F78: { ++fl.t; pend = 0u == i1; }
L_0F80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0F90; }
L_0F88: { ++fl.t; set_vi(i4, 0u + i2); }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0F98: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FB0: { ++fl.t; pend = 0u != i4; }
L_0FB8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FD8; }
L_0FC0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4080u + sh) & 16383u));
    return;
L_1228: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1230: { ++fl.t; set_vi(i1, i5 & i1); }
L_1238: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1240: { ++fl.t; pend = 0u == i1; }
L_1248: { ++fl.t; }
    if (pend) { pend = false; goto L_1260; }
L_1250: { ++fl.t; set_vi(i4, 0u + i2); }
L_1258: { ++fl.t; }
L_1260: { ++fl.t; pend = 0u != i4; }
L_1268: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1280; }
L_1270: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1278: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4752u + sh) & 16383u));
    return;
L_1628: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1630: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1638: { ++fl.t; set_vi(i9, 0u + i12); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1648: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5720u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_5C4C8635B51B0F89_c(Vu0Regs &r, std::uint8_t *mem) { vu1_5C4C8635B51B0F89_s<true>(r, mem); }

void vu1_5C4C8635B51B0F89(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_5C4C8635B51B0F89_s<false>(r, mem);
    else vu1_5C4C8635B51B0F89_c(r, mem);
}

template <bool kSticky>
static void vu1_8F70C808605BFCDF_s(Vu0Regs &r, std::uint8_t *mem) {
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
    if (pend) { pend = false; goto L_1228; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F60; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1628; }
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
L_0F60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F68: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F78: { ++fl.t; pend = 0u == i1; }
L_0F80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0F90; }
L_0F88: { ++fl.t; set_vi(i4, 0u + i2); }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0F98: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FB0: { ++fl.t; pend = 0u != i4; }
L_0FB8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FD8; }
L_0FC0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4080u + sh) & 16383u));
    return;
L_1228: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1230: { ++fl.t; set_vi(i1, i5 & i1); }
L_1238: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1240: { ++fl.t; pend = 0u == i1; }
L_1248: { ++fl.t; }
    if (pend) { pend = false; goto L_1260; }
L_1250: { fl.t += 2u; set_vi(i4, 0u + i2); }
L_1258: { ++fl.t; }
L_1260: { ++fl.t; pend = 0u != i4; }
L_1268: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1280; }
L_1270: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1278: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { fl.t += 3u; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4752u + sh) & 16383u));
    return;
L_1628: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1630: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1638: { ++fl.t; set_vi(i9, 0u + i12); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1648: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5720u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_8F70C808605BFCDF_c(Vu0Regs &r, std::uint8_t *mem) { vu1_8F70C808605BFCDF_s<true>(r, mem); }

void vu1_8F70C808605BFCDF(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_8F70C808605BFCDF_s<false>(r, mem);
    else vu1_8F70C808605BFCDF_c(r, mem);
}

template <bool kSticky>
static void vu1_FC16B1DD921AE558_s(Vu0Regs &r, std::uint8_t *mem) {
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
    static constexpr std::uint8_t ks_0FD8[] = {0, 1};
    static constexpr std::uint8_t ks_0FE0[] = {0, 0};
    static constexpr std::uint8_t ks_0FE8[] = {1, 0};
    static constexpr std::uint8_t ke_0FD8_0FE0[] = {0, 1};
    static constexpr std::uint8_t ke_0FE0_0FE8[] = {0, 1};
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
    if (pend) { pend = false; goto L_0F60; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1628; }
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
L_0F60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F68: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F78: { ++fl.t; pend = 0u == i1; }
L_0F80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0F90; }
L_0F88: { fl.t += 2u; set_vi(i4, 0u + i2); }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0F98: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FB0: { ++fl.t; pend = 0u != i4; }
L_0FB8: { fl.t += 2u; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; st = 0u; goto L_0FD8; }
L_0FC0: { fl.t += 4u; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    st = 1u; 
L_0FD8: { fl.t += 1u + ks_0FD8[st]; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
    st = ke_0FD8_0FE0[st]; 
L_0FE0: { fl.t += 1u + ks_0FE0[st]; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
    st = ke_0FE0_0FE8[st]; 
L_0FE8: { fl.t += 1u + ks_0FE8[st]; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4080u + sh) & 16383u));
    return;
L_1628: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1630: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1638: { ++fl.t; set_vi(i9, 0u + i12); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1648: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5720u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[4] = i4; r.vi[5] = i5; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_FC16B1DD921AE558_c(Vu0Regs &r, std::uint8_t *mem) { vu1_FC16B1DD921AE558_s<true>(r, mem); }

void vu1_FC16B1DD921AE558(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_FC16B1DD921AE558_s<false>(r, mem);
    else vu1_FC16B1DD921AE558_c(r, mem);
}

void vu1_9A5472E4C0DA89ED(Vu0Regs &r, std::uint8_t *mem) {
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
    if (pend) { pend = false; goto L_1628; }
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
L_1628: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1630: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1638: { ++fl.t; set_vi(i9, 0u + i12); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1648: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5720u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[9] = i9; r.vi[10] = i10; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_B35A5B9FCD3BA345(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 5312u) & 16383u;
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
    goto L_14C0;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_14C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 24u); vstore(r.vf[15], vsel(vload(r.vf[15]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_14C8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[1], q, 16); set_vi(i13, i13 + 1u); } }
L_14D0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[2], q, 16); set_vi(i13, i13 + 1u); } }
L_14D8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[3], q, 16); set_vi(i13, i13 + 1u); } }
L_14E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[4], q, 16); set_vi(i13, i13 + 1u); } }
L_14E8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[5], q, 16); set_vi(i13, i13 + 1u); } }
L_14F0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[6], q, 16); set_vi(i13, i13 + 1u); } }
L_14F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[7], q, 16); set_vi(i13, i13 + 1u); } }
L_1500: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[8], q, 16); set_vi(i13, i13 + 1u); } }
L_1508: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[9], q, 16); set_vi(i13, i13 + 1u); } }
L_1510: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 128u); std::memcpy(q + 0, &r.vf[16].w[0], 4); std::memcpy(q + 4, &r.vf[16].w[1], 4); std::memcpy(q + 8, &r.vf[16].w[2], 4); } }
L_1518: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 129u); std::memcpy(q + 0, &r.vf[17].w[0], 4); std::memcpy(q + 4, &r.vf[17].w[1], 4); std::memcpy(q + 8, &r.vf[17].w[2], 4); } }
L_1520: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 130u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } }
L_1528: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_1530: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); std::memcpy(q + 8, &r.vf[3].w[2], 4); } }
L_1538: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_1540: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); std::memcpy(q + 0, &r.vf[5].w[0], 4); std::memcpy(q + 4, &r.vf[5].w[1], 4); std::memcpy(q + 8, &r.vf[5].w[2], 4); } }
L_1548: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 131u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } }
L_1550: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); std::memcpy(q + 0, &r.vf[7].w[0], 4); std::memcpy(q + 4, &r.vf[7].w[1], 4); std::memcpy(q + 8, &r.vf[7].w[2], 4); } }
L_1558: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 128u) + 12, 2); set_vi(i1, v); } }
L_1560: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 129u) + 12, 2); set_vi(i2, v); } }
L_1568: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 130u) + 12, 2); set_vi(i3, v); } }
L_1570: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 131u) + 12, 2); set_vi(i4, v); } }
L_1578: { ++fl.t; set_vi(i10, 0u + 5u); }
L_1580: { ++fl.t; set_vi(i9, 0u + i12); }
L_1588: { ++fl.t; { const std::uint8_t *q = qword(mem, i1 + 128u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } }
L_1590: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 124u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u})); } }
L_1598: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i4))); vstore(r.vf[2], vsel(vload(r.vf[2]), vsplat(v), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } }
L_15A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i3 + 131u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } }
L_15A8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_15B0: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_15B8: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); set_vi(i12, i12 + 1u); } }
L_15C0: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); set_vi(i12, i12 + 1u); } }
L_15C8: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); std::memcpy(q + 8, &r.vf[3].w[2], 4); set_vi(i12, i12 + 1u); } }
L_15D0: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[8].w[0], 4); std::memcpy(q + 4, &r.vf[8].w[1], 4); std::memcpy(q + 8, &r.vf[8].w[2], 4); set_vi(i12, i12 + 1u); } }
L_15D8: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[9].w[0], 4); std::memcpy(q + 4, &r.vf[9].w[1], 4); std::memcpy(q + 8, &r.vf[9].w[2], 4); set_vi(i12, i12 + 1u); } }
L_15E0: { ++fl.t; set_vi(i1, i11 - i12); }
L_15E8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } }
L_15F0: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_15F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
    if (pend) { pend = false; goto L_1610; }
L_1600: { ++fl.t; set_vi(i15, (((5632u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1608: { ++fl.t; }
    if (pend) { pend = false; goto L_1658; }
L_1610: { ++fl.t; set_vi(i7, i8 + 0u); }
L_1618: { ++fl.t; pend = true; }
L_1620: { ++fl.t; set_vi(i15, 0u + 665u); }
    if (pend) { pend = false; goto L_1778; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((5672u + sh) & 16383u));
    return;
L_1658: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1660: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1668: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1670: { ++fl.t; set_vi(i2, i10 | i2); }
L_1678: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1680: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1688: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_1690: { ++fl.t; }
L_1698: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_16A0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_16A8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_16B0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_16B8: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_16C0: { ++fl.t; ending = true; }
L_16C8: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((5840u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((5840u + sh) & 16383u));
    return;
L_1778: { ++fl.t; pend = static_cast<std::int16_t>(i8) < 0; }
L_1780: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_1798; }
L_1788: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1790: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1798: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_17A0: { ++fl.t; set_vi(i1, i7 & i6); }
L_17A8: { ++fl.t; set_vi(i6, 0u + 2048u); }
L_17B0: { ++fl.t; set_vi(i6, i7 & i6); }
L_17B8: { ++fl.t; pend = 0u == i1; }
L_17C0: { ++fl.t; set_vi(i1, 0u + i15); }
    if (pend) { pend = false; goto L_17D8; }
L_17C8: { ++fl.t; set_vi(i15, (((6088u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_17D0: { ++fl.t; }
    if (pend) { pend = false; goto L_16C0; }
L_17D8: { ++fl.t; pend = 0u != i6; }
L_17E0: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_01F8; }
L_17E8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_17F0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6136u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_594C545FC7E707B6(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 5320u) & 16383u;
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
    goto L_14C8;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_14C8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[1], q, 16); set_vi(i13, i13 + 1u); } }
L_14D0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[2], q, 16); set_vi(i13, i13 + 1u); } }
L_14D8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[3], q, 16); set_vi(i13, i13 + 1u); } }
L_14E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[4], q, 16); set_vi(i13, i13 + 1u); } }
L_14E8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[5], q, 16); set_vi(i13, i13 + 1u); } }
L_14F0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[6], q, 16); set_vi(i13, i13 + 1u); } }
L_14F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[7], q, 16); set_vi(i13, i13 + 1u); } }
L_1500: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[8], q, 16); set_vi(i13, i13 + 1u); } }
L_1508: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[9], q, 16); set_vi(i13, i13 + 1u); } }
L_1510: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 128u); std::memcpy(q + 0, &r.vf[16].w[0], 4); std::memcpy(q + 4, &r.vf[16].w[1], 4); std::memcpy(q + 8, &r.vf[16].w[2], 4); } }
L_1518: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 129u); std::memcpy(q + 0, &r.vf[17].w[0], 4); std::memcpy(q + 4, &r.vf[17].w[1], 4); std::memcpy(q + 8, &r.vf[17].w[2], 4); } }
L_1520: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 130u); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); } }
L_1528: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_1530: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); std::memcpy(q + 8, &r.vf[3].w[2], 4); } }
L_1538: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_1540: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); std::memcpy(q + 0, &r.vf[5].w[0], 4); std::memcpy(q + 4, &r.vf[5].w[1], 4); std::memcpy(q + 8, &r.vf[5].w[2], 4); } }
L_1548: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 131u); std::memcpy(q + 0, &r.vf[6].w[0], 4); std::memcpy(q + 4, &r.vf[6].w[1], 4); std::memcpy(q + 8, &r.vf[6].w[2], 4); } }
L_1550: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); std::memcpy(q + 0, &r.vf[7].w[0], 4); std::memcpy(q + 4, &r.vf[7].w[1], 4); std::memcpy(q + 8, &r.vf[7].w[2], 4); } }
L_1558: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 128u) + 12, 2); set_vi(i1, v); } }
L_1560: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 129u) + 12, 2); set_vi(i2, v); } }
L_1568: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 130u) + 12, 2); set_vi(i3, v); } }
L_1570: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 131u) + 12, 2); set_vi(i4, v); } }
L_1578: { ++fl.t; set_vi(i10, 0u + 5u); }
L_1580: { ++fl.t; set_vi(i9, 0u + i12); }
L_1588: { ++fl.t; { const std::uint8_t *q = qword(mem, i1 + 128u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } }
L_1590: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 124u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0u, 0xFFFFFFFFu, 0u})); } }
L_1598: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i4))); vstore(r.vf[2], vsel(vload(r.vf[2]), vsplat(v), v4u{0u, 0xFFFFFFFFu, 0u, 0u})); } }
L_15A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i3 + 131u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } }
L_15A8: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_15B0: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_15B8: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); set_vi(i12, i12 + 1u); } }
L_15C0: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[1].w[0], 4); std::memcpy(q + 4, &r.vf[1].w[1], 4); std::memcpy(q + 8, &r.vf[1].w[2], 4); set_vi(i12, i12 + 1u); } }
L_15C8: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); std::memcpy(q + 8, &r.vf[3].w[2], 4); set_vi(i12, i12 + 1u); } }
L_15D0: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[8].w[0], 4); std::memcpy(q + 4, &r.vf[8].w[1], 4); std::memcpy(q + 8, &r.vf[8].w[2], 4); set_vi(i12, i12 + 1u); } }
L_15D8: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 0, &r.vf[9].w[0], 4); std::memcpy(q + 4, &r.vf[9].w[1], 4); std::memcpy(q + 8, &r.vf[9].w[2], 4); set_vi(i12, i12 + 1u); } }
L_15E0: { ++fl.t; set_vi(i1, i11 - i12); }
L_15E8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } }
L_15F0: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_15F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
    if (pend) { pend = false; goto L_1610; }
L_1600: { ++fl.t; set_vi(i15, (((5632u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_1608: { ++fl.t; }
    if (pend) { pend = false; goto L_1658; }
L_1610: { ++fl.t; set_vi(i7, i8 + 0u); }
L_1618: { ++fl.t; pend = true; }
L_1620: { ++fl.t; set_vi(i15, 0u + 665u); }
    if (pend) { pend = false; goto L_1778; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((5672u + sh) & 16383u));
    return;
L_1658: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1660: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1668: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1670: { ++fl.t; set_vi(i2, i10 | i2); }
L_1678: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1680: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1688: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_1690: { ++fl.t; }
L_1698: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_16A0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_16A8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_16B0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_16B8: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_16C0: { ++fl.t; ending = true; }
L_16C8: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((5840u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((5840u + sh) & 16383u));
    return;
L_1778: { ++fl.t; pend = static_cast<std::int16_t>(i8) < 0; }
L_1780: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_1798; }
L_1788: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1790: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1798: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_17A0: { ++fl.t; set_vi(i1, i7 & i6); }
L_17A8: { ++fl.t; set_vi(i6, 0u + 2048u); }
L_17B0: { ++fl.t; set_vi(i6, i7 & i6); }
L_17B8: { ++fl.t; pend = 0u == i1; }
L_17C0: { ++fl.t; set_vi(i1, 0u + i15); }
    if (pend) { pend = false; goto L_17D8; }
L_17C8: { ++fl.t; set_vi(i15, (((6088u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_17D0: { ++fl.t; }
    if (pend) { pend = false; goto L_16C0; }
L_17D8: { ++fl.t; pend = 0u != i6; }
L_17E0: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_01F8; }
L_17E8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_17F0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6136u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_9C2023F74010864E(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 5648u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i15 = r.vi[15];
    goto L_1610;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_1610: { ++fl.t; set_vi(i7, i8 + 0u); }
L_1618: { ++fl.t; pend = true; }
L_1620: { ++fl.t; set_vi(i15, 0u + 665u); }
    if (pend) { pend = false; goto L_1778; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[15] = i15; vu::interpret(1, ((5672u + sh) & 16383u));
    return;
L_16C0: { ++fl.t; ending = true; }
L_16C8: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[15] = i15; r.tpc = ((5840u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[15] = i15; vu::interpret(1, ((5840u + sh) & 16383u));
    return;
L_1778: { ++fl.t; pend = static_cast<std::int16_t>(i8) < 0; }
L_1780: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_1798; }
L_1788: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1790: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1798: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_17A0: { ++fl.t; set_vi(i1, i7 & i6); }
L_17A8: { ++fl.t; set_vi(i6, 0u + 2048u); }
L_17B0: { ++fl.t; set_vi(i6, i7 & i6); }
L_17B8: { ++fl.t; pend = 0u == i1; }
L_17C0: { ++fl.t; set_vi(i1, 0u + i15); }
    if (pend) { pend = false; goto L_17D8; }
L_17C8: { ++fl.t; set_vi(i15, (((6088u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_17D0: { ++fl.t; }
    if (pend) { pend = false; goto L_16C0; }
L_17D8: { ++fl.t; pend = 0u != i6; }
L_17E0: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_01F8; }
L_17E8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_17F0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[15] = i15; vu::interpret(1, ((6136u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_5BA76508A09C33CC(Vu0Regs &r, std::uint8_t *mem) {
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
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i15 = r.vi[15];
    goto L_17D8;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_17D8: { ++fl.t; pend = 0u != i6; }
L_17E0: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_01F8; }
L_17E8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_17F0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[15] = i15; vu::interpret(1, ((6136u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_80E38EBA532CC485(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 2384u) & 16383u;
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
    goto L_0950;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_0950: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 24u); vstore(r.vf[15], vsel(vload(r.vf[15]), vload_ptr(q), v4u{0u, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_0958: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_0960: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[11], q, 16); set_vi(i13, i13 + 1u); } }
L_0968: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[12], q, 16); set_vi(i13, i13 + 1u); } }
L_0970: { ++fl.t; set_vi(i7, 0u + 2u); }
L_0978: { ++fl.t; pend = 0u == i6; }
L_0980: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6) + 0, 2); set_vi(i2, v); } }
    if (pend) { pend = false; goto L_09D8; }
L_0988: { ++fl.t; vstore(r.vf[4], vsel(vload(r.vf[4]), vload(r.vf[17]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_0990: { ++fl.t; set_vi(i4, r.vf[17].w[0]); }
L_0998: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i5, v); } }
L_09A0: { ++fl.t; { const v4u m = vload(r.vf[16]); vstore(r.vf[16], vsel(vload(r.vf[16]), v4u{m[1], m[2], m[3], m[0]}, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_09A8: { ++fl.t; vstore(r.vf[17], vsel(vload(r.vf[17]), vload(r.vf[11]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_09B0: { ++fl.t; vstore(r.vf[11], vsel(vload(r.vf[11]), vload(r.vf[12]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_09B8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; set_vi(i15, (((2488u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_09C0: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
    if (pendj) { pendj = false; goto dispatch; }
L_09C8: { ++fl.t; pend = 0u != i7; }
L_09D0: { ++fl.t; set_vi(i7, i7 - 1u); }
    if (pend) { pend = false; goto L_0978; }
L_09D8: { ++fl.t; set_vi(i1, i11 - i12); }
L_09E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } }
L_09E8: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_09F0: { ++fl.t; set_vi(i7, i8 + 0u); }
    if (pend) { pend = false; goto L_0A08; }
L_09F8: { ++fl.t; set_vi(i15, (((2552u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0A00: { ++fl.t; }
    if (pend) { pend = false; goto L_1658; }
L_0A08: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
L_0A10: { ++fl.t; pend = true; }
L_0A18: { ++fl.t; set_vi(i15, 0u + 299u); }
    if (pend) { pend = false; goto L_1778; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((2592u + sh) & 16383u));
    return;
L_1658: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1660: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1668: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1670: { ++fl.t; set_vi(i2, i10 | i2); }
L_1678: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1680: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1688: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_1690: { ++fl.t; }
L_1698: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_16A0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_16A8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_16B0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_16B8: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_16C0: { ++fl.t; ending = true; }
L_16C8: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((5840u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((5840u + sh) & 16383u));
    return;
L_1778: { ++fl.t; pend = static_cast<std::int16_t>(i8) < 0; }
L_1780: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_1798; }
L_1788: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1790: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1798: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_17A0: { ++fl.t; set_vi(i1, i7 & i6); }
L_17A8: { ++fl.t; set_vi(i6, 0u + 2048u); }
L_17B0: { ++fl.t; set_vi(i6, i7 & i6); }
L_17B8: { ++fl.t; pend = 0u == i1; }
L_17C0: { ++fl.t; set_vi(i1, 0u + i15); }
    if (pend) { pend = false; goto L_17D8; }
L_17C8: { ++fl.t; set_vi(i15, (((6088u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_17D0: { ++fl.t; }
    if (pend) { pend = false; goto L_16C0; }
L_17D8: { ++fl.t; pend = 0u != i6; }
L_17E0: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_01F8; }
L_17E8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_17F0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6136u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_DABC058C23066E86(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 2504u) & 16383u;
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
    goto L_09C8;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_0978: { ++fl.t; pend = 0u == i6; }
L_0980: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6) + 0, 2); set_vi(i2, v); } }
    if (pend) { pend = false; goto L_09D8; }
L_0988: { ++fl.t; vstore(r.vf[4], vsel(vload(r.vf[4]), vload(r.vf[17]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_0990: { ++fl.t; set_vi(i4, r.vf[17].w[0]); }
L_0998: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i5, v); } }
L_09A0: { ++fl.t; { const v4u m = vload(r.vf[16]); vstore(r.vf[16], vsel(vload(r.vf[16]), v4u{m[1], m[2], m[3], m[0]}, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_09A8: { ++fl.t; vstore(r.vf[17], vsel(vload(r.vf[17]), vload(r.vf[11]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_09B0: { ++fl.t; vstore(r.vf[11], vsel(vload(r.vf[11]), vload(r.vf[12]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_09B8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; set_vi(i15, (((2488u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_09C0: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
    if (pendj) { pendj = false; goto dispatch; }
L_09C8: { ++fl.t; pend = 0u != i7; }
L_09D0: { ++fl.t; set_vi(i7, i7 - 1u); }
    if (pend) { pend = false; goto L_0978; }
L_09D8: { ++fl.t; set_vi(i1, i11 - i12); }
L_09E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } }
L_09E8: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_09F0: { ++fl.t; set_vi(i7, i8 + 0u); }
    if (pend) { pend = false; goto L_0A08; }
L_09F8: { ++fl.t; set_vi(i15, (((2552u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0A00: { ++fl.t; }
    if (pend) { pend = false; goto L_1658; }
L_0A08: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
L_0A10: { ++fl.t; pend = true; }
L_0A18: { ++fl.t; set_vi(i15, 0u + 299u); }
    if (pend) { pend = false; goto L_1778; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((2592u + sh) & 16383u));
    return;
L_1658: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1660: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1668: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1670: { ++fl.t; set_vi(i2, i10 | i2); }
L_1678: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1680: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1688: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_1690: { ++fl.t; }
L_1698: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_16A0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_16A8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_16B0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_16B8: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_16C0: { ++fl.t; ending = true; }
L_16C8: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((5840u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((5840u + sh) & 16383u));
    return;
L_1778: { ++fl.t; pend = static_cast<std::int16_t>(i8) < 0; }
L_1780: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_1798; }
L_1788: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1790: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1798: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_17A0: { ++fl.t; set_vi(i1, i7 & i6); }
L_17A8: { ++fl.t; set_vi(i6, 0u + 2048u); }
L_17B0: { ++fl.t; set_vi(i6, i7 & i6); }
L_17B8: { ++fl.t; pend = 0u == i1; }
L_17C0: { ++fl.t; set_vi(i1, 0u + i15); }
    if (pend) { pend = false; goto L_17D8; }
L_17C8: { ++fl.t; set_vi(i15, (((6088u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_17D0: { ++fl.t; }
    if (pend) { pend = false; goto L_16C0; }
L_17D8: { ++fl.t; pend = 0u != i6; }
L_17E0: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_01F8; }
L_17E8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_17F0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6136u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_41D336ADF6A42716(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 4896u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i15 = r.vi[15];
    goto L_1320;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_1320: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_1328: { ++fl.t; set_vi(i6, i6 - 1u); }
L_1330: { ++fl.t; set_vi(i1, r.vf[17].w[0]); }
L_1338: { ++fl.t; { const v4u m = vload(r.vf[17]); vstore(r.vf[17], vsel(vload(r.vf[17]), v4u{m[1], m[2], m[3], m[0]}, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_1340: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[2], q, 16); set_vi(i13, i13 + 1u); } }
L_1348: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[3], q, 16); set_vi(i13, i13 + 1u); } }
L_1350: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[4], q, 16); set_vi(i13, i13 + 1u); } }
L_1358: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[5], q, 16); set_vi(i13, i13 + 1u); } }
L_1360: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 960u); std::memcpy(q, &r.vf[2], 16); } }
L_1368: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 961u); std::memcpy(q, &r.vf[3], 16); } }
L_1370: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 962u); std::memcpy(q, &r.vf[4], 16); } }
L_1378: { ++fl.t; { std::uint8_t *q = qword(mem, i1 + 963u); std::memcpy(q, &r.vf[5], 16); } }
L_1380: { ++fl.t; pend = 0u != i6; }
L_1388: { ++fl.t; set_vi(i6, i6 - 1u); }
    if (pend) { pend = false; goto L_1330; }
L_1390: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } }
L_1398: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
L_13A0: { ++fl.t; set_vi(i7, i8 + 0u); }
L_13A8: { ++fl.t; pend = true; }
L_13B0: { ++fl.t; set_vi(i15, 0u + 612u); }
    if (pend) { pend = false; goto L_1778; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((5048u + sh) & 16383u));
    return;
L_16C0: { ++fl.t; ending = true; }
L_16C8: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((5840u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((5840u + sh) & 16383u));
    return;
L_1778: { ++fl.t; pend = static_cast<std::int16_t>(i8) < 0; }
L_1780: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_1798; }
L_1788: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1790: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1798: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_17A0: { ++fl.t; set_vi(i1, i7 & i6); }
L_17A8: { ++fl.t; set_vi(i6, 0u + 2048u); }
L_17B0: { ++fl.t; set_vi(i6, i7 & i6); }
L_17B8: { ++fl.t; pend = 0u == i1; }
L_17C0: { ++fl.t; set_vi(i1, 0u + i15); }
    if (pend) { pend = false; goto L_17D8; }
L_17C8: { ++fl.t; set_vi(i15, (((6088u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_17D0: { ++fl.t; }
    if (pend) { pend = false; goto L_16C0; }
L_17D8: { ++fl.t; pend = 0u != i6; }
L_17E0: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_01F8; }
L_17E8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_17F0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6136u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_77F6777D1D9254E7(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 2392u) & 16383u;
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
    goto L_0958;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_0958: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
L_0960: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[11], q, 16); set_vi(i13, i13 + 1u); } }
L_0968: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[12], q, 16); set_vi(i13, i13 + 1u); } }
L_0970: { ++fl.t; set_vi(i7, 0u + 2u); }
L_0978: { ++fl.t; pend = 0u == i6; }
L_0980: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i6) + 0, 2); set_vi(i2, v); } }
    if (pend) { pend = false; goto L_09D8; }
L_0988: { ++fl.t; vstore(r.vf[4], vsel(vload(r.vf[4]), vload(r.vf[17]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_0990: { ++fl.t; set_vi(i4, r.vf[17].w[0]); }
L_0998: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i5, v); } }
L_09A0: { ++fl.t; { const v4u m = vload(r.vf[16]); vstore(r.vf[16], vsel(vload(r.vf[16]), v4u{m[1], m[2], m[3], m[0]}, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); } }
L_09A8: { ++fl.t; vstore(r.vf[17], vsel(vload(r.vf[17]), vload(r.vf[11]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_09B0: { ++fl.t; vstore(r.vf[11], vsel(vload(r.vf[11]), vload(r.vf[12]), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu})); }
L_09B8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; set_vi(i15, (((2488u + sh) & 16383u) + 16u) / 8u); pendj = true; }
L_09C0: { ++fl.t; set_vi(i6, r.vf[16].w[0]); }
    if (pendj) { pendj = false; goto dispatch; }
L_09C8: { ++fl.t; pend = 0u != i7; }
L_09D0: { ++fl.t; set_vi(i7, i7 - 1u); }
    if (pend) { pend = false; goto L_0978; }
L_09D8: { ++fl.t; set_vi(i1, i11 - i12); }
L_09E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } }
L_09E8: { ++fl.t; pend = static_cast<std::int16_t>(i1) > 0; }
L_09F0: { ++fl.t; set_vi(i7, i8 + 0u); }
    if (pend) { pend = false; goto L_0A08; }
L_09F8: { ++fl.t; set_vi(i15, (((2552u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0A00: { ++fl.t; }
    if (pend) { pend = false; goto L_1658; }
L_0A08: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
L_0A10: { ++fl.t; pend = true; }
L_0A18: { ++fl.t; set_vi(i15, 0u + 299u); }
    if (pend) { pend = false; goto L_1778; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((2592u + sh) & 16383u));
    return;
L_1658: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 114u) + 12, 2); set_vi(i3, v); } }
L_1660: { ++fl.t; set_vi(i2, 0u + 32767u); }
L_1668: { ++fl.t; set_vi(i2, i2 + 1u); }
L_1670: { ++fl.t; set_vi(i2, i10 | i2); }
L_1678: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 0u) + 12, 2); set_vi(i1, v); } }
L_1680: { ++fl.t; { std::uint8_t *q = qword(mem, i9); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_1688: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i3 + 2u) + 12, 2); set_vi(i3, v); } }
L_1690: { ++fl.t; }
L_1698: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 114u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_16A0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 2u) + 12, 2); set_vi(i12, v); } }
L_16A8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1 + 4u) + 12, 2); set_vi(i11, v); } }
L_16B0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_16B8: { ++fl.t; vu::kick(1, i3); }
    if (pendj) { pendj = false; goto dispatch; }
L_16C0: { ++fl.t; ending = true; }
L_16C8: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((5840u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((5840u + sh) & 16383u));
    return;
L_1778: { ++fl.t; pend = static_cast<std::int16_t>(i8) < 0; }
L_1780: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_1798; }
L_1788: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1790: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1798: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_17A0: { ++fl.t; set_vi(i1, i7 & i6); }
L_17A8: { ++fl.t; set_vi(i6, 0u + 2048u); }
L_17B0: { ++fl.t; set_vi(i6, i7 & i6); }
L_17B8: { ++fl.t; pend = 0u == i1; }
L_17C0: { ++fl.t; set_vi(i1, 0u + i15); }
    if (pend) { pend = false; goto L_17D8; }
L_17C8: { ++fl.t; set_vi(i15, (((6088u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_17D0: { ++fl.t; }
    if (pend) { pend = false; goto L_16C0; }
L_17D8: { ++fl.t; pend = 0u != i6; }
L_17E0: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_01F8; }
L_17E8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_17F0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6136u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

template <bool kSticky>
static void vu1_75E35763D4083EFF_s(Vu0Regs &r, std::uint8_t *mem) {
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
    if (pend) { pend = false; goto L_1628; }
L_00F8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 12, 2); set_vi(i8, v); } }
L_0100: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0108: { ++fl.t; set_vi(i15, (((264u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0110: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 4, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0A58; }
L_0118: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0120: { ++fl.t; set_vi(i15, (((288u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0128: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0E10; }
L_0130: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0138: { ++fl.t; set_vi(i15, (((312u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0140: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 37u) + 0, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0D68; }
L_0148: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0150: { ++fl.t; set_vi(i15, (((336u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0158: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_1228; }
L_0160: { ++fl.t; set_vi(i5, i8 + 0u); }
L_0168: { ++fl.t; set_vi(i15, (((360u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0170: { ++fl.t; set_vi(i4, 0u + 0u); }
    if (pend) { pend = false; goto L_0F60; }
L_0178: { ++fl.t; set_vi(i1, 0u + 66u); }
L_0180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 45u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
L_0188: { ++fl.t; set_vi(i15, (((392u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0190: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
    if (pend) { pend = false; goto L_1628; }
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
L_0A58: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); set_vi(i1, 0u + 8u); vstore(r.vf[3], uv); n3 = vshadow_eager(r.vf[3]); }
L_0A60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, i5 & i1); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n5 = vshadow_eager(r.vf[5]); }
L_0A68: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, v4u{0u, 0u, 0u, 0x3F800000u}); { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 8, 2); set_vi(i2, v); } vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n5 = vshadow_eager(r.vf[5]); }
L_0A70: { ++fl.t; pend = 0u == i1; }
L_0A78: { ++fl.t; set_vi(i3, 0u + 3u); }
    if (pend) { pend = false; goto L_0A88; }
L_0A80: { ++fl.t; set_vi(i4, 0u + i2); }
L_0A88: { ++fl.t; set_vi(i1, 0u + 8u); }
L_0A90: { ++fl.t; set_vi(i1, i4 & i1); }
L_0A98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 37u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } n1 = vshadow_eager(r.vf[1]); }
L_0AA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 139u); std::memcpy(&r.vf[6], q, 16); } n6 = vshadow_eager(r.vf[6]); }
L_0AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 140u); std::memcpy(&r.vf[7], q, 16); } n7 = vshadow_eager(r.vf[7]); }
L_0AB0: { ++fl.t; pend = 0u == i1; }
L_0AB8: { ++fl.t; set_vi(i2, 0u + 4u); }
    if (pend) { pend = false; goto L_0AC8; }
L_0AC0: { ++fl.t; const v4u uv = vaddn(n1, n1); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0AC8: { ++fl.t; const v4u uv = (v4u)((v4f)n5 + (v4f)vsplat(0x3F800000u)); set_vi(i5, i4 & i3); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0AD0: { ++fl.t; set_vi(i4, i4 & i2); }
L_0AD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
L_0AE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 12, &r.vf[1].w[3], 4); } }
L_0AE8: { ++fl.t; pend = 0u == i5; }
L_0AF0: { ++fl.t; set_vi(i5, i5 - 1u); }
    if (pend) { pend = false; goto L_0B38; }
L_0AF8: { ++fl.t; r.i = 1124073472u; }
L_0B00: { ++fl.t; pend = 0u == i5; }
L_0B08: { ++fl.t; }
    if (pend) { pend = false; goto L_0B60; }
L_0B10: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 1u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); fl.stick<4u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0B18: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B20: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B28: { ++fl.t; pend = true; }
L_0B30: { ++fl.t; set_vi(i3, 0u + 1u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B38: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); r.i = 1132396544u; vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B40: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 32751u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B48: { ++fl.t; set_vi(i1, i1 & i3); }
L_0B50: { ++fl.t; pend = true; }
L_0B58: { ++fl.t; set_vi(i3, 0u + 0u); }
    if (pend) { pend = false; goto L_0B88; }
L_0B60: { ++fl.t; const v4u uv = (v4u)((v4f)n3 + (v4f)vsplat(0x3F800000u)); set_vi(i2, 0u + 0u); vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B68: { ++fl.t; r.i = 1124073472u; }
L_0B70: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} + (v4f)vfix(vsplat(r.i))); set_vi(i3, 0u + 16u); vstore(r.vf[1], vsel(vload(r.vf[1]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); fl.stick<8u, kSticky>(uv); n1 = vsel(n1, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0B78: { ++fl.t; set_vi(i1, i1 | i3); }
L_0B80: { ++fl.t; set_vi(i3, 0u + 1u); }
L_0B88: { ++fl.t; pend = 0u == i4; }
L_0B90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 134u); const std::uint32_t v = i3; std::memcpy(q + 8, &v, 4); } }
    if (pend) { pend = false; goto L_0BA8; }
L_0B98: { ++fl.t; r.i = 1073676288u; }
L_0BA0: { ++fl.t; const v4u uv = (v4u)((v4f)v4u{0u, 0u, 0u, 0x3F800000u} * (v4f)vfix(vsplat(r.i))); vstore(r.vf[5], vsel(vload(r.vf[5]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); fl.stick<1u, kSticky>(uv); n5 = vsel(n5, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0BA8: { ++fl.t; set_vi(i3, 0u + 27u); }
L_0BB0: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(r.vf[1].w[0])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n2 = vshadow_eager(r.vf[2]); }
L_0BB8: { ++fl.t; const v4u uv = vmuln(n6, vsplat(n1[3])); { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i3))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } vstore(r.vf[6], vsel(vload(r.vf[6]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n6 = vsel(n6, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BC0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0BC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 132u); const std::uint32_t v = i2; std::memcpy(q + 12, &v, 4); } }
L_0BD0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 112u); std::memcpy(q + 0, &r.vf[3].w[0], 4); std::memcpy(q + 4, &r.vf[3].w[1], 4); } }
L_0BD8: { ++fl.t; const v4u uv = vmuln(n7, n6); { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 12, &r.vf[5].w[3], 4); } vstore(r.vf[7], uv); fl.push_last<15u, kSticky>(uv); n7 = uv; }
L_0BE0: { ++fl.t; set_vi(i2, i15 + 0u); }
L_0BE8: { ++fl.t; set_vi(i15, (((3048u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_0BF0: { ++fl.t; }
    if (pend) { pend = false; goto L_1628; }
L_0BF8: { ++fl.t; set_vi(i15, i2 + 0u); }
L_0C00: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 133u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
L_0C08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 143u); std::memcpy(q, &r.vf[7], 16); } }
L_0C10: { ++fl.t; pend = true; }
L_0C18: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 125u) + 12, 2); set_vi(i4, v); } }
    if (pend) { pend = false; goto L_0F98; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3104u + sh) & 16383u));
    return;
L_0D68: { ++fl.t; set_vi(i1, 0u + 16u); }
L_0D70: { ++fl.t; set_vi(i1, i5 & i1); }
L_0D78: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 12, 2); set_vi(i2, v); } }
L_0D80: { ++fl.t; pend = 0u == i1; }
L_0D88: { ++fl.t; }
    if (pend) { pend = false; goto L_0DA0; }
L_0D90: { ++fl.t; set_vi(i4, 0u + i2); }
L_0D98: { ++fl.t; }
L_0DA0: { ++fl.t; pend = 0u == i4; }
L_0DA8: { ++fl.t; set_vi(i4, i4 - 1u); }
    if (pend) { pend = false; goto L_0DF8; }
L_0DB0: { ++fl.t; set_vi(i1, 0u + 16384u); }
L_0DB8: { ++fl.t; pend = 0u == i4; }
L_0DC0: { ++fl.t; }
    if (pend) { pend = false; goto L_0DE0; }
L_0DC8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0DD0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DE0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
L_0DE8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0DF0: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0DF8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 126u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
L_0E00: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E08: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 127u); const std::uint32_t v = 0u; std::memcpy(q + 12, &v, 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_0E10: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 32u) + 8, 2); set_vi(i3, v); } }
L_0E18: { ++fl.t; set_vi(i2, 0u + 27u); }
L_0E20: { ++fl.t; pend = 0u != i4; }
L_0E28: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 124u) + 12, 2); set_vi(i1, v); } }
    if (pend) { pend = false; goto L_0E40; }
L_0E30: { ++fl.t; pend = 0u != i3; }
L_0E38: { ++fl.t; }
    if (pend) { pend = false; goto L_0E58; }
L_0E40: { ++fl.t; set_vi(i3, 0u + 32735u); }
L_0E48: { ++fl.t; pend = true; }
L_0E50: { ++fl.t; set_vi(i1, i1 & i3); }
    if (pend) { pend = false; goto L_0E68; }
L_0E58: { ++fl.t; set_vi(i3, 0u + 32u); }
L_0E60: { ++fl.t; set_vi(i1, i1 | i3); }
L_0E68: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i1))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0xFFFFFFFFu, 0u, 0u, 0u})); } }
L_0E70: { ++fl.t; { const std::uint32_t v = static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(i2))); vstore(r.vf[4], vsel(vload(r.vf[4]), vsplat(v), v4u{0u, 0u, 0xFFFFFFFFu, 0u})); } }
L_0E78: { ++fl.t; pend = true; }
L_0E80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 124u); const std::uint32_t v = i1; std::memcpy(q + 12, &v, 4); } }
    if (pend) { pend = false; goto L_1628; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((3720u + sh) & 16383u));
    return;
L_0F60: { ++fl.t; const v4u uv = vmax(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i1, 0u + 4u); vstore(r.vf[1], uv); n1 = vshadow_eager(r.vf[1]); }
L_0F68: { ++fl.t; set_vi(i1, i5 & i1); }
L_0F70: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 46u) + 4, 2); set_vi(i2, v); } }
L_0F78: { ++fl.t; pend = 0u == i1; }
L_0F80: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[1].w[0], 4); } }
    if (pend) { pend = false; goto L_0F90; }
L_0F88: { ++fl.t; set_vi(i4, 0u + i2); }
L_0F90: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 125u); const std::uint32_t v = i4; std::memcpy(q + 12, &v, 4); } }
L_0F98: { ++fl.t; const v4u uv = vmin(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0u)); { const std::uint8_t *q = qword(mem, 0u + 138u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0u, 0u, 0u, 0xFFFFFFFFu})); } vstore(r.vf[4], uv); n3 = vshadow_eager(r.vf[3]); }
L_0FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 141u); vstore(r.vf[3], vsel(vload(r.vf[3]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n3 = vshadow_eager(r.vf[3]); }
L_0FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 64u); vstore(r.vf[1], vsel(vload(r.vf[1]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } n1 = vshadow_eager(r.vf[1]); }
L_0FB0: { ++fl.t; pend = 0u != i4; }
L_0FB8: { ++fl.t; const v4u uv = vmuln(n3, vsplat(n3[3])); { const std::uint8_t *q = qword(mem, 0u + 142u); vstore(r.vf[2], vsel(vload(r.vf[2]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); } vstore(r.vf[3], vsel(vload(r.vf[3]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vshadow_eager(r.vf[2]); n3 = vsel(n3, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
    if (pend) { pend = false; goto L_0FD8; }
L_0FC0: { ++fl.t; const v4u uv = vmuln(n1, n3); { std::uint8_t *q = qword(mem, 0u + 145u); std::memcpy(q + 0, &r.vf[0].w[0], 4); } vstore(r.vf[4], vsel(vload(r.vf[4]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); }
L_0FC8: { ++fl.t; const v4u uv = vmuln(n1, n3); vstore(r.acc, vsel(vload(r.acc), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); nacc = vsel(nacc, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD0: { ++fl.t; const v4u uv = vaddn(nacc, (v4u)((v4f)n2 * (v4f)vsplat(0x3F800000u))); vstore(r.vf[2], vsel(vload(r.vf[2]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); fl.push_last<14u, kSticky>(uv); n2 = vsel(n2, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FD8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 138u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); std::memcpy(q + 8, &r.vf[4].w[2], 4); } }
L_0FE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 137u); std::memcpy(q + 0, &r.vf[2].w[0], 4); std::memcpy(q + 4, &r.vf[2].w[1], 4); std::memcpy(q + 8, &r.vf[2].w[2], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4080u + sh) & 16383u));
    return;
L_1228: { ++fl.t; set_vi(i1, 0u + 32u); }
L_1230: { ++fl.t; set_vi(i1, i5 & i1); }
L_1238: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 47u) + 0, 2); set_vi(i2, v); } }
L_1240: { ++fl.t; pend = 0u == i1; }
L_1248: { ++fl.t; }
    if (pend) { pend = false; goto L_1260; }
L_1250: { ++fl.t; set_vi(i4, 0u + i2); }
L_1258: { ++fl.t; }
L_1260: { ++fl.t; pend = 0u != i4; }
L_1268: { ++fl.t; { const std::uint8_t *q = qword(mem, i4 + 33u); vstore(r.vf[4], vsel(vload(r.vf[4]), vload_ptr(q), v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); } }
    if (pend) { pend = false; goto L_1280; }
L_1270: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1278: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[0].w[0], 4); std::memcpy(q + 4, &r.vf[0].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
L_1280: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1288: { ++fl.t; { std::uint8_t *q = qword(mem, 0u + 136u); std::memcpy(q + 0, &r.vf[4].w[0], 4); std::memcpy(q + 4, &r.vf[4].w[1], 4); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((4752u + sh) & 16383u));
    return;
L_1628: { ++fl.t; set_vi(i10, 0u + 1u); }
L_1630: { ++fl.t; { std::uint8_t *q = qword(mem, i12 + 0u); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_1638: { ++fl.t; set_vi(i9, 0u + i12); }
L_1640: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q + 4, &r.vf[15].w[1], 4); std::memcpy(q + 8, &r.vf[15].w[2], 4); std::memcpy(q + 12, &r.vf[15].w[3], 4); set_vi(i12, i12 + 1u); } }
L_1648: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1650: { ++fl.t; { std::uint8_t *q = qword(mem, i12); std::memcpy(q, &r.vf[4], 16); set_vi(i12, i12 + 1u); } }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, ((5720u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

static __attribute__((noinline, cold)) void vu1_75E35763D4083EFF_c(Vu0Regs &r, std::uint8_t *mem) { vu1_75E35763D4083EFF_s<true>(r, mem); }

void vu1_75E35763D4083EFF(Vu0Regs &r, std::uint8_t *mem) {
    if ((r.status & 0xC0u) == 0xC0u) vu1_75E35763D4083EFF_s<false>(r, mem);
    else vu1_75E35763D4083EFF_c(r, mem);
}

void vu1_FA399641F0B8370E(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipeV fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    const std::uint32_t sh = (vu::entry() - 2568u) & 16383u;
    (void)sh;
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i13 = r.vi[13];
    std::uint16_t i15 = r.vi[15];
    goto L_0A08;
L_01F8: { ++fl.t; set_vi(i1, 0u + 15u); }
L_0200: { ++fl.t; set_vi(i1, i8 & i1); }
L_0208: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i1) + 4, 2); set_vi(i2, v); } }
L_0210: { fl.t += 4u; jpc = (static_cast<std::uint32_t>(i2) * 8u) & 16383u; pendj = true; }
L_0218: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((544u + sh) & 16383u));
    return;
L_0A08: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } }
L_0A10: { ++fl.t; pend = true; }
L_0A18: { ++fl.t; set_vi(i15, 0u + 299u); }
    if (pend) { pend = false; goto L_1778; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((2592u + sh) & 16383u));
    return;
L_16C0: { ++fl.t; ending = true; }
L_16C8: { ++fl.t; }
    if (ending) { fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; r.tpc = ((5840u + sh) & 16383u); return; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((5840u + sh) & 16383u));
    return;
L_1778: { ++fl.t; pend = static_cast<std::int16_t>(i8) < 0; }
L_1780: { ++fl.t; set_vi(i8, r.vf[16].w[3]); }
    if (pend) { pend = false; goto L_1798; }
L_1788: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1790: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1798: { ++fl.t; set_vi(i6, 0u + 4096u); }
L_17A0: { ++fl.t; set_vi(i1, i7 & i6); }
L_17A8: { ++fl.t; set_vi(i6, 0u + 2048u); }
L_17B0: { ++fl.t; set_vi(i6, i7 & i6); }
L_17B8: { ++fl.t; pend = 0u == i1; }
L_17C0: { ++fl.t; set_vi(i1, 0u + i15); }
    if (pend) { pend = false; goto L_17D8; }
L_17C8: { ++fl.t; set_vi(i15, (((6088u + sh) & 16383u) + 16u) / 8u); pend = true; }
L_17D0: { ++fl.t; }
    if (pend) { pend = false; goto L_16C0; }
L_17D8: { ++fl.t; pend = 0u != i6; }
L_17E0: { ++fl.t; set_vi(i15, 0u + i1); }
    if (pend) { pend = false; goto L_01F8; }
L_17E8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_17F0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, ((6136u + sh) & 16383u));
    return;
dispatch:
    fl.finish(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[6] = i6; r.vi[8] = i8; r.vi[13] = i13; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

}
