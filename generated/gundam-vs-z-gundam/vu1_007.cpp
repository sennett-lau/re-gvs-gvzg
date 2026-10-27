#include "ps2/vu_ops.hpp"

namespace gen {

using namespace ps2;
using namespace ps2::vuops;

void vu1_A137FD645D161E9F(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n1 = vfix(vload(r.vf[1]));
    v4u n2 = vfix(vload(r.vf[2]));
    v4u n3 = vfix(vload(r.vf[3]));
    v4u n4 = vfix(vload(r.vf[4]));
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n7 = vfix(vload(r.vf[7]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n13 = vfix(vload(r.vf[13]));
    v4u n14 = vfix(vload(r.vf[14]));
    v4u n17 = vfix(vload(r.vf[17]));
    v4u n18 = vfix(vload(r.vf[18]));
    v4u n19 = vfix(vload(r.vf[19]));
    v4u n20 = vfix(vload(r.vf[20]));
    v4u n21 = vfix(vload(r.vf[21]));
    v4u n22 = vfix(vload(r.vf[22]));
    v4u n23 = vfix(vload(r.vf[23]));
    v4u n24 = vfix(vload(r.vf[24]));
    v4u n25 = vfix(vload(r.vf[25]));
    v4u n26 = vfix(vload(r.vf[26]));
    v4u n27 = vfix(vload(r.vf[27]));
    v4u n28 = vfix(vload(r.vf[28]));
    v4u n29 = vfix(vload(r.vf[29]));
    v4u n30 = vfix(vload(r.vf[30]));
    v4u n31 = vfix(vload(r.vf[31]));
    v4u nacc = vfix(vload(r.acc));
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
    goto L_01C8;
L_0020: { ++fl.t; set_vi(i2, vu::top()); }
L_0028: { ++fl.t; set_vi(i5, i2 + 0u); }
L_0030: { ++fl.t; set_vi(i3, i2 + 254u); }
L_0038: { ++fl.t; set_vi(i4, i3 + 0u); }
L_0040: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5) + 4, 2); set_vi(i6, v); } }
L_0048: { ++fl.t; set_vi(i5, i5 + 1u); }
L_0050: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(&r.vf[12], q, 16); } }
L_0058: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5) + 0, 2); set_vi(i7, v); } }
L_0060: { ++fl.t; set_vi(i11, 0u + 32767u); }
L_0068: { ++fl.t; set_vi(i7, i11 & i7); }
L_0070: { ++fl.t; set_vi(i5, i5 + 1u); }
L_0078: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &r.vf[12], 16); set_vi(i4, i4 + 1u); } }
L_0080: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_0088: { ++fl.t; }
    if (pend) { pend = false; goto L_01D8; }
L_0090: { ++fl.t; pend = i6 == 0u; }
L_0098: { ++fl.t; }
    if (pend) { pend = false; goto L_0150; }
L_00A0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 12, 2); set_vi(i8, v); } }
L_00A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[27], q, 16); set_vi(i5, i5 + 1u); } n27 = vfix(vload(r.vf[27])); }
L_00B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[28], q, 16); set_vi(i5, i5 + 1u); } n28 = vfix(vload(r.vf[28])); }
L_00B8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[30], q, 16); set_vi(i5, i5 + 1u); } n30 = vfix(vload(r.vf[30])); }
L_00C0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[29], q, 16); set_vi(i5, i5 + 1u); } n29 = vfix(vload(r.vf[29])); }
L_00C8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 31u) + 4, 2); set_vi(i12, v); } }
L_00D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 30u); std::memcpy(&r.vf[1], q, 16); } n1 = vfix(vload(r.vf[1])); }
L_00D8: { ++fl.t; pend = 0u == i12; }
L_00E0: { ++fl.t; }
    if (pend) { pend = false; goto L_00F0; }
L_00E8: { ++fl.t; const v4u uv = vaddn(n29, n1); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); flags(r, r.vf[29], 12u); fl.set_mac(r.mac, r.status); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_00F0: { ++fl.t; r.vf[15].w[0] = r.vf[16].w[0]; r.vf[15].w[1] = r.vf[16].w[1]; r.vf[15].w[2] = r.vf[16].w[2]; r.vf[15].w[3] = r.vf[16].w[3]; }
L_00F8: { ++fl.t; r.vf[16].w[0] = r.vf[17].w[0]; r.vf[16].w[1] = r.vf[17].w[1]; r.vf[16].w[2] = r.vf[17].w[2]; r.vf[16].w[3] = r.vf[17].w[3]; }
L_0100: { ++fl.t; r.vf[17].w[0] = r.vf[30].w[0]; r.vf[17].w[1] = r.vf[30].w[1]; r.vf[17].w[2] = r.vf[30].w[2]; r.vf[17].w[3] = r.vf[30].w[3]; n17 = vfix(vload(r.vf[17])); }
L_0108: { ++fl.t; const v4u uv = vftoi(vload(r.vf[30]), 0); { const std::uint8_t *q = qword(mem, 0u + 0u); std::memcpy(&r.vf[1], q, 16); } vstore(r.vf[30], uv); n1 = vfix(vload(r.vf[1])); n30 = vfix(vload(r.vf[30])); }
L_0110: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vfix(vload(r.vf[2])); }
L_0118: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 2u); std::memcpy(&r.vf[3], q, 16); } n3 = vfix(vload(r.vf[3])); }
L_0120: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 3u); std::memcpy(&r.vf[4], q, 16); } n4 = vfix(vload(r.vf[4])); }
L_0128: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &r.vf[30], 16); } }
L_0130: { ++fl.t; set_vi(i15, 40u); pend = true; }
L_0138: { ++fl.t; }
    if (pend) { pend = false; goto L_0280; }
L_0140: { ++fl.t; pend = true; }
L_0148: { ++fl.t; }
    if (pend) { pend = false; goto L_00A0; }
L_0150: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[1], q, 16); } n1 = vfix(vload(r.vf[1])); }
L_0158: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } n2 = vfix(vload(r.vf[2])); }
L_0160: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[3], q, 16); } n3 = vfix(vload(r.vf[3])); }
L_0168: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 4u); std::memcpy(&r.vf[4], q, 16); } n4 = vfix(vload(r.vf[4])); }
L_0170: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_0178: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &r.vf[2], 16); } }
L_0180: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q, &r.vf[3], 16); } }
L_0188: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(q, &r.vf[4], 16); } }
L_0190: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 12, 2); set_vi(i9, v); } }
L_0198: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(&r.vf[31], q, 16); } n31 = vfix(vload(r.vf[31])); }
L_01A0: { ++fl.t; }
L_01A8: { ++fl.t; vu::kick(1, i3); }
L_01B0: { ++fl.t; }
L_01B8: { ++fl.t; ending = true; }
L_01C0: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; r.tpc = 456u; return; }
L_01C8: { ++fl.t; pend = true; }
L_01D0: { ++fl.t; }
    if (pend) { pend = false; goto L_0020; }
L_01D8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[1], q, 16); } n1 = vfix(vload(r.vf[1])); }
L_01E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } n2 = vfix(vload(r.vf[2])); }
L_01E8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[3], q, 16); } n3 = vfix(vload(r.vf[3])); }
L_01F0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 4u); std::memcpy(&r.vf[4], q, 16); } n4 = vfix(vload(r.vf[4])); }
L_01F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 5u); std::memcpy(&r.vf[5], q, 16); } n5 = vfix(vload(r.vf[5])); }
L_0200: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 6u); std::memcpy(&r.vf[6], q, 16); } n6 = vfix(vload(r.vf[6])); }
L_0208: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_0210: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &r.vf[2], 16); } }
L_0218: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q, &r.vf[3], 16); } }
L_0220: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(q, &r.vf[4], 16); } }
L_0228: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 4u); std::memcpy(q, &r.vf[5], 16); } }
L_0230: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 5u); std::memcpy(q, &r.vf[6], 16); } }
L_0238: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 12, 2); set_vi(i9, v); } }
L_0240: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(&r.vf[31], q, 16); } n31 = vfix(vload(r.vf[31])); }
L_0248: { ++fl.t; }
L_0250: { ++fl.t; vu::kick(1, i3); }
L_0258: { ++fl.t; }
L_0260: { ++fl.t; ending = true; }
L_0268: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; r.tpc = 624u; return; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, 624u);
    return;
L_0280: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n27[0])); { const std::uint8_t *q = qword(mem, 0u + 4u); std::memcpy(&r.vf[5], q, 16); } vstore(r.acc, uv); n5 = vfix(vload(r.vf[5])); nacc = uv; }
L_0288: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n27[1])); { const std::uint8_t *q = qword(mem, 0u + 5u); std::memcpy(&r.vf[6], q, 16); } vstore(r.acc, uv); n6 = vfix(vload(r.vf[6])); nacc = uv; }
L_0290: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n27[2])); { const std::uint8_t *q = qword(mem, 0u + 6u); std::memcpy(&r.vf[7], q, 16); } vstore(r.acc, uv); n7 = vfix(vload(r.vf[7])); nacc = uv; }
L_0298: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, 0u + 7u); std::memcpy(&r.vf[8], q, 16); } vstore(r.vf[13], uv); n8 = vfix(vload(r.vf[8])); n13 = uv; }
L_02A0: { ++fl.t; }
L_02A8: { ++fl.t; }
L_02B0: { ++fl.t; }
L_02B8: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[13].w[3]); fl.end_q(r, qb, 7u); } }
L_02C0: { ++fl.t; r.vf[18].w[0] = r.vf[19].w[0]; r.vf[18].w[1] = r.vf[19].w[1]; r.vf[18].w[2] = r.vf[19].w[2]; r.vf[18].w[3] = r.vf[19].w[3]; n18 = vfix(vload(r.vf[18])); }
L_02C8: { ++fl.t; r.vf[19].w[0] = r.vf[20].w[0]; r.vf[19].w[1] = r.vf[20].w[1]; r.vf[19].w[2] = r.vf[20].w[2]; r.vf[19].w[3] = r.vf[20].w[3]; n19 = vfix(vload(r.vf[19])); }
L_02D0: { ++fl.t; r.vf[20].w[0] = r.vf[29].w[0]; r.vf[20].w[1] = r.vf[29].w[1]; r.vf[20].w[2] = r.vf[29].w[2]; r.vf[20].w[3] = r.vf[29].w[3]; n20 = vfix(vload(r.vf[20])); }
L_02D8: { ++fl.t; r.vf[21].w[0] = r.vf[22].w[0]; r.vf[21].w[1] = r.vf[22].w[1]; r.vf[21].w[2] = r.vf[22].w[2]; r.vf[21].w[3] = r.vf[22].w[3]; n21 = vfix(vload(r.vf[21])); }
L_02E0: { ++fl.t; r.vf[22].w[0] = r.vf[23].w[0]; r.vf[22].w[1] = r.vf[23].w[1]; r.vf[22].w[2] = r.vf[23].w[2]; r.vf[22].w[3] = r.vf[23].w[3]; n22 = vfix(vload(r.vf[22])); }
L_02E8: { ++fl.t; }
L_02F0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n13, vfix(vsplat(r.q))); vstore(r.vf[13], uv); n13 = uv; }
L_02F8: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n27[0])); vstore(r.acc, uv); nacc = uv; }
L_0300: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n27[1])); r.vf[24].w[0] = r.vf[25].w[0]; r.vf[24].w[1] = r.vf[25].w[1]; r.vf[24].w[2] = r.vf[25].w[2]; vstore(r.acc, uv); n24 = vfix(vload(r.vf[24])); nacc = uv; }
L_0308: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n27[2])); r.vf[25].w[0] = r.vf[26].w[0]; r.vf[25].w[1] = r.vf[26].w[1]; r.vf[25].w[2] = r.vf[26].w[2]; vstore(r.acc, uv); n25 = vfix(vload(r.vf[25])); nacc = uv; }
L_0310: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(0x3F800000u)); r.vf[26].w[0] = r.vf[13].w[0]; r.vf[26].w[1] = r.vf[13].w[1]; r.vf[26].w[2] = r.vf[13].w[2]; vstore(r.vf[23], uv); n26 = vfix(vload(r.vf[26])); n23 = uv; }
L_0318: { ++fl.t; const v4u uv = vftoi(vload(r.vf[13]), 4); vstore(r.vf[10], uv); }
L_0320: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n29, vfix(vsplat(r.q))); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0328: { ++fl.t; set_vi(i14, 103u); pend = true; }
L_0330: { ++fl.t; const v4u uv = vsubn(n25, n24); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); flags(r, r.vf[12], 14u); fl.set_mac(r.mac, r.status); }
    if (pend) { pend = false; goto L_0580; }
L_0338: { ++fl.t; const v4u uv = vsubn(n26, n24); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); flags(r, r.vf[13], 14u); fl.set_mac(r.mac, r.status); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0340: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q + 0, &r.vf[10].w[0], 4); std::memcpy(q + 4, &r.vf[10].w[1], 4); std::memcpy(q + 8, &r.vf[10].w[2], 4); } }
L_0348: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &r.vf[11], 16); } }
L_0350: { ++fl.t; pend = 0u != i8; }
L_0358: { ++fl.t; }
    if (pend) { pend = false; goto L_0510; }
L_0360: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[21], r.vf[21].w[3]); { const std::uint8_t *q = qword(mem, 0u + 8u); std::memcpy(&r.vf[5], q, 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); n5 = vfix(vload(r.vf[5])); }
L_0368: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[22], r.vf[22].w[3]); { const std::uint8_t *q = qword(mem, 0u + 9u); std::memcpy(&r.vf[6], q, 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); n6 = vfix(vload(r.vf[6])); }
L_0370: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[23], r.vf[23].w[3]); { const std::uint8_t *q = qword(mem, 0u + 10u); std::memcpy(&r.vf[7], q, 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); n7 = vfix(vload(r.vf[7])); }
L_0378: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 11u); std::memcpy(&r.vf[8], q, 16); } n8 = vfix(vload(r.vf[8])); }
L_0380: { ++fl.t; }
L_0388: { ++fl.t; }
L_0390: { ++fl.t; set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); }
L_0398: { ++fl.t; pend = 0u == i1; }
L_03A0: { ++fl.t; }
    if (pend) { pend = false; goto L_0478; }
L_03A8: { ++fl.t; set_vi(i1, ((fl.clip() | 128991u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
L_03B0: { ++fl.t; pend = 0u != i1; }
L_03B8: { ++fl.t; }
    if (pend) { pend = false; goto L_0500; }
L_03C0: { ++fl.t; set_vi(i1, ((fl.clip() | 228855u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
L_03C8: { ++fl.t; pend = 0u != i1; }
L_03D0: { ++fl.t; }
    if (pend) { pend = false; goto L_0500; }
L_03D8: { ++fl.t; set_vi(i1, ((fl.clip() | 245499u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
L_03E0: { ++fl.t; pend = 0u != i1; }
L_03E8: { ++fl.t; }
    if (pend) { pend = false; goto L_0500; }
L_03F0: { ++fl.t; set_vi(i1, ((fl.clip() | 253821u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
L_03F8: { ++fl.t; pend = 0u != i1; }
L_0400: { ++fl.t; }
    if (pend) { pend = false; goto L_0500; }
L_0408: { ++fl.t; set_vi(i1, ((fl.clip() | 257982u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
L_0410: { ++fl.t; pend = 0u != i1; }
L_0418: { ++fl.t; }
    if (pend) { pend = false; goto L_0500; }
L_0420: { ++fl.t; set_vi(i14, 134u); pend = true; }
L_0428: { ++fl.t; }
    if (pend) { pend = false; goto L_0E98; }
L_0430: { ++fl.t; set_vi(i2, 0u + 945u); }
L_0438: { ++fl.t; set_vi(i3, 0u + 972u); }
L_0440: { ++fl.t; set_vi(i4, 0u + 920u); }
L_0448: { ++fl.t; set_vi(i14, 139u); pend = true; }
L_0450: { ++fl.t; }
    if (pend) { pend = false; goto L_0598; }
L_0458: { ++fl.t; set_vi(i14, 141u); pend = true; }
L_0460: { ++fl.t; }
    if (pend) { pend = false; goto L_0FA8; }
L_0468: { ++fl.t; pend = true; }
L_0470: { ++fl.t; }
    if (pend) { pend = false; goto L_0500; }
L_0478: { ++fl.t; const v4u uv = vsubn(n25, n24); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0480: { ++fl.t; const v4u uv = vsubn(n26, n24); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0488: { ++fl.t; }
L_0490: { ++fl.t; }
L_0498: { ++fl.t; }
L_04A0: { ++fl.t; const std::uint32_t ux = mul(r.vf[13].w[1], r.vf[12].w[2]); const std::uint32_t uy = mul(r.vf[13].w[2], r.vf[12].w[0]); const std::uint32_t uz = mul(r.vf[13].w[0], r.vf[12].w[1]); r.acc.w[0] = ux; r.acc.w[1] = uy; r.acc.w[2] = uz; nacc = vfix(vload(r.acc)); }
L_04A8: { ++fl.t; const std::uint32_t ux = msub(r.acc.w[0], r.vf[12].w[1], r.vf[13].w[2]); const std::uint32_t uy = msub(r.acc.w[1], r.vf[12].w[2], r.vf[13].w[0]); const std::uint32_t uz = msub(r.acc.w[2], r.vf[12].w[0], r.vf[13].w[1]); r.vf[14].w[0] = ux; r.vf[14].w[1] = uy; r.vf[14].w[2] = uz; n14 = vfix(vload(r.vf[14])); }
L_04B0: { ++fl.t; }
L_04B8: { ++fl.t; }
L_04C0: { ++fl.t; }
L_04C8: { ++fl.t; const v4u uv = vmuln(n14, vsplat(n28[3])); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); flags(r, r.vf[13], 2u); fl.set_mac(r.mac, r.status); n13 = vsel(n13, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_04D0: { ++fl.t; }
L_04D8: { ++fl.t; }
L_04E0: { ++fl.t; set_vi(i1, 0u + 32u); }
L_04E8: { ++fl.t; set_vi(i1, fl.mac() & i1); }
L_04F0: { ++fl.t; pend = 0u == i1; }
L_04F8: { ++fl.t; }
    if (pend) { pend = false; goto L_0510; }
L_0500: { ++fl.t; set_vi(i8, 0u + 32767u); }
L_0508: { ++fl.t; set_vi(i8, i8 + 1u); }
L_0510: { ++fl.t; set_vi(i8, i8 | i12); }
L_0518: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 2u); const std::uint32_t v = i8; std::memcpy(q + 12, &v, 4); } }
L_0520: { ++fl.t; set_vi(i7, i7 + 4294967295u); }
L_0528: { ++fl.t; set_vi(i4, i4 + 3u); }
L_0530: { ++fl.t; pend = 0u != i7; }
L_0538: { ++fl.t; }
    if (pend) { pend = false; goto L_0570; }
L_0540: { ++fl.t; vu::kick(1, i3); }
L_0548: { ++fl.t; }
L_0550: { ++fl.t; ending = true; }
L_0558: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; r.tpc = 1376u; return; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, 1376u);
    return;
L_0570: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0578: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0580: { ++fl.t; set_vi(i12, 0u + 4080u); }
L_0588: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_0590: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0598: { ++fl.t; set_vi(i8, i3 + 0u); }
L_05A0: { ++fl.t; const v4u uv = vaddn(n21, n22); r.i = 1065353216u; vstore(r.acc, uv); nacc = uv; }
L_05A8: { ++fl.t; const v4u uv = vmaddn(nacc, n23, vfix(vsplat(r.i))); r.i = 1051372202u; vstore(r.vf[31], uv); n31 = uv; }
L_05B0: { ++fl.t; }
L_05B8: { ++fl.t; }
L_05C0: { ++fl.t; }
L_05C8: { ++fl.t; const v4u uv = vmuln(n31, vfix(vsplat(r.i))); vstore(r.vf[31], uv); n31 = uv; }
L_05D0: { ++fl.t; }
L_05D8: { ++fl.t; }
L_05E0: { ++fl.t; }
L_05E8: { ++fl.t; const v4u uv = vsubn(n21, n31); vstore(r.vf[21], uv); n21 = uv; }
L_05F0: { ++fl.t; const v4u uv = vsubn(n22, n31); vstore(r.vf[22], uv); n22 = uv; }
L_05F8: { ++fl.t; const v4u uv = vsubn(n23, n31); r.i = 1065378382u; vstore(r.vf[23], uv); n23 = uv; }
L_0600: { ++fl.t; const v4u uv = vmuln(n31, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i8 + 2u); std::memcpy(q, &r.vf[18], 16); } vstore(r.acc, uv); nacc = uv; }
L_0608: { ++fl.t; const v4u uv = vmaddn(nacc, n21, vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, i8 + 5u); std::memcpy(q, &r.vf[19], 16); } vstore(r.vf[21], uv); n21 = uv; }
L_0610: { ++fl.t; const v4u uv = vmuln(n31, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i8 + 8u); std::memcpy(q, &r.vf[20], 16); } vstore(r.acc, uv); nacc = uv; }
L_0618: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, i8 + 11u); std::memcpy(q, &r.vf[18], 16); } vstore(r.vf[22], uv); n22 = uv; }
L_0620: { ++fl.t; const v4u uv = vmuln(n31, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i8 + 1u); std::memcpy(q, &r.vf[15], 16); } vstore(r.acc, uv); nacc = uv; }
L_0628: { ++fl.t; const v4u uv = vmaddn(nacc, n23, vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, i8 + 4u); std::memcpy(q, &r.vf[16], 16); } vstore(r.vf[23], uv); n23 = uv; }
L_0630: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 7u); std::memcpy(q, &r.vf[17], 16); } }
L_0638: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 10u); std::memcpy(q, &r.vf[15], 16); } }
L_0640: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 0u); std::memcpy(q, &r.vf[21], 16); } }
L_0648: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 3u); std::memcpy(q, &r.vf[22], 16); } }
L_0650: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 6u); std::memcpy(q, &r.vf[23], 16); } }
L_0658: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 9u); std::memcpy(q, &r.vf[21], 16); } }
L_0660: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i5, 0u + 2048u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); flags(r, r.vf[30], 8u); fl.set_mac(r.mac, r.status); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0668: { ++fl.t; set_vi(i6, 0u + 32u); }
L_0670: { ++fl.t; set_vi(i7, 0u + 2u); }
L_0678: { ++fl.t; set_vi(i8, i3 + 0u); }
L_0680: { ++fl.t; set_vi(i9, i2 + 0u); }
L_0688: { ++fl.t; set_vi(i10, 0u + 3u); }
L_0690: { ++fl.t; set_vi(i11, 0u + 0u); }
L_0698: { ++fl.t; set_vi(i15, 213u); pend = true; }
L_06A0: { ++fl.t; }
    if (pend) { pend = false; goto L_09F8; }
L_06A8: { ++fl.t; set_vi(i10, i10 - 1u); }
L_06B0: { ++fl.t; }
L_06B8: { ++fl.t; pend = 0u != i10; }
L_06C0: { ++fl.t; }
    if (pend) { pend = false; goto L_0698; }
L_06C8: { ++fl.t; set_vi(i8, i2 + 0u); }
L_06D0: { ++fl.t; set_vi(i15, 220u); pend = true; }
L_06D8: { ++fl.t; }
    if (pend) { pend = false; goto L_09B8; }
L_06E0: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_06E8: { ++fl.t; }
L_06F0: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_06F8: { ++fl.t; }
    if (pend) { pend = false; goto L_09A8; }
L_0700: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i5, 0u + 128u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); flags(r, r.vf[30], 8u); fl.set_mac(r.mac, r.status); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0708: { ++fl.t; set_vi(i6, 0u + 2u); }
L_0710: { ++fl.t; set_vi(i7, 0u + 0u); }
L_0718: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0720: { ++fl.t; set_vi(i9, i3 + 0u); }
L_0728: { ++fl.t; set_vi(i10, 0u + i11); }
L_0730: { ++fl.t; set_vi(i11, 0u + 0u); }
L_0738: { ++fl.t; set_vi(i15, 233u); pend = true; }
L_0740: { ++fl.t; }
    if (pend) { pend = false; goto L_09F8; }
L_0748: { ++fl.t; set_vi(i10, i10 - 1u); }
L_0750: { ++fl.t; }
L_0758: { ++fl.t; pend = 0u != i10; }
L_0760: { ++fl.t; }
    if (pend) { pend = false; goto L_0738; }
L_0768: { ++fl.t; set_vi(i8, i3 + 0u); }
L_0770: { ++fl.t; set_vi(i15, 240u); pend = true; }
L_0778: { ++fl.t; }
    if (pend) { pend = false; goto L_09B8; }
L_0780: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_0788: { ++fl.t; }
L_0790: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_0798: { ++fl.t; }
    if (pend) { pend = false; goto L_09A8; }
L_07A0: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i5, 0u + 64u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); flags(r, r.vf[30], 8u); fl.set_mac(r.mac, r.status); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_07A8: { ++fl.t; set_vi(i6, 0u + 1u); }
L_07B0: { ++fl.t; set_vi(i7, 0u + 0u); }
L_07B8: { ++fl.t; set_vi(i8, i3 + 0u); }
L_07C0: { ++fl.t; set_vi(i9, i2 + 0u); }
L_07C8: { ++fl.t; set_vi(i10, 0u + i11); }
L_07D0: { ++fl.t; set_vi(i11, 0u + 0u); }
L_07D8: { ++fl.t; set_vi(i15, 253u); pend = true; }
L_07E0: { ++fl.t; }
    if (pend) { pend = false; goto L_09F8; }
L_07E8: { ++fl.t; set_vi(i10, i10 - 1u); }
L_07F0: { ++fl.t; }
L_07F8: { ++fl.t; pend = 0u != i10; }
L_0800: { ++fl.t; }
    if (pend) { pend = false; goto L_07D8; }
L_0808: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0810: { ++fl.t; set_vi(i15, 260u); pend = true; }
L_0818: { ++fl.t; }
    if (pend) { pend = false; goto L_09B8; }
L_0820: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_0828: { ++fl.t; }
L_0830: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_0838: { ++fl.t; }
    if (pend) { pend = false; goto L_09A8; }
L_0840: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i5, 0u + 512u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); flags(r, r.vf[30], 8u); fl.set_mac(r.mac, r.status); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0848: { ++fl.t; set_vi(i6, 0u + 8u); }
L_0850: { ++fl.t; set_vi(i7, 0u + 1u); }
L_0858: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0860: { ++fl.t; set_vi(i9, i3 + 0u); }
L_0868: { ++fl.t; set_vi(i10, 0u + i11); }
L_0870: { ++fl.t; set_vi(i11, 0u + 0u); }
L_0878: { ++fl.t; set_vi(i15, 273u); pend = true; }
L_0880: { ++fl.t; }
    if (pend) { pend = false; goto L_09F8; }
L_0888: { ++fl.t; set_vi(i10, i10 - 1u); }
L_0890: { ++fl.t; }
L_0898: { ++fl.t; pend = 0u != i10; }
L_08A0: { ++fl.t; }
    if (pend) { pend = false; goto L_0878; }
L_08A8: { ++fl.t; set_vi(i8, i3 + 0u); }
L_08B0: { ++fl.t; set_vi(i15, 280u); pend = true; }
L_08B8: { ++fl.t; }
    if (pend) { pend = false; goto L_09B8; }
L_08C0: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_08C8: { ++fl.t; }
L_08D0: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_08D8: { ++fl.t; }
    if (pend) { pend = false; goto L_09A8; }
L_08E0: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i5, 0u + 256u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); flags(r, r.vf[30], 8u); fl.set_mac(r.mac, r.status); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_08E8: { ++fl.t; set_vi(i6, 0u + 4u); }
L_08F0: { ++fl.t; set_vi(i7, 0u + 1u); }
L_08F8: { ++fl.t; set_vi(i8, i3 + 0u); }
L_0900: { ++fl.t; set_vi(i9, i2 + 0u); }
L_0908: { ++fl.t; set_vi(i10, 0u + i11); }
L_0910: { ++fl.t; set_vi(i11, 0u + 0u); }
L_0918: { ++fl.t; set_vi(i15, 293u); pend = true; }
L_0920: { ++fl.t; }
    if (pend) { pend = false; goto L_09F8; }
L_0928: { ++fl.t; set_vi(i10, i10 - 1u); }
L_0930: { ++fl.t; }
L_0938: { ++fl.t; pend = 0u != i10; }
L_0940: { ++fl.t; }
    if (pend) { pend = false; goto L_0918; }
L_0948: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0950: { ++fl.t; set_vi(i15, 300u); pend = true; }
L_0958: { ++fl.t; }
    if (pend) { pend = false; goto L_09B8; }
L_0960: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_0968: { ++fl.t; }
L_0970: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_0978: { ++fl.t; }
    if (pend) { pend = false; goto L_09A8; }
L_0980: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0988: { ++fl.t; set_vi(i9, i4 + 0u); }
L_0990: { ++fl.t; set_vi(i10, 0u + i11); }
L_0998: { ++fl.t; set_vi(i15, 309u); pend = true; }
L_09A0: { ++fl.t; }
    if (pend) { pend = false; goto L_0D00; }
L_09A8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_09B0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_09B8: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 0u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_09C0: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 1u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_09C8: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 2u); std::memcpy(&r.vf[23], q, 16); } n23 = vfix(vload(r.vf[23])); }
L_09D0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[21], 16); set_vi(i9, i9 + 1u); } }
L_09D8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[22], 16); set_vi(i9, i9 + 1u); } }
L_09E0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[23], 16); set_vi(i9, i9 + 1u); } }
L_09E8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_09F0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_09F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i8); std::memcpy(&r.vf[17], q, 16); set_vi(i8, i8 + 1u); } n17 = vfix(vload(r.vf[17])); }
L_0A00: { ++fl.t; { const std::uint8_t *q = qword(mem, i8); std::memcpy(&r.vf[18], q, 16); set_vi(i8, i8 + 1u); } n18 = vfix(vload(r.vf[18])); }
L_0A08: { ++fl.t; { const std::uint8_t *q = qword(mem, i8); std::memcpy(&r.vf[19], q, 16); set_vi(i8, i8 + 1u); } n19 = vfix(vload(r.vf[19])); }
L_0A10: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 0u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_0A18: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 1u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0A20: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 2u); std::memcpy(&r.vf[23], q, 16); } n23 = vfix(vload(r.vf[23])); }
L_0A28: { ++fl.t; }
L_0A30: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[17], r.vf[17].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0A38: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[21], r.vf[21].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0A40: { ++fl.t; }
L_0A48: { ++fl.t; }
L_0A50: { ++fl.t; }
L_0A58: { ++fl.t; set_vi(i1, fl.clip() & 0xFFFu); }
L_0A60: { ++fl.t; set_vi(i12, i1 & i5); }
L_0A68: { ++fl.t; }
L_0A70: { ++fl.t; pend = 0u == i12; }
L_0A78: { ++fl.t; }
    if (pend) { pend = false; goto L_0AF0; }
L_0A80: { ++fl.t; set_vi(i12, i1 & i6); }
L_0A88: { ++fl.t; }
L_0A90: { ++fl.t; pend = 0u == i12; }
L_0A98: { ++fl.t; }
    if (pend) { pend = false; goto L_0AB0; }
L_0AA0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0AA8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0AB0: { ++fl.t; set_vi(i12, 344u); pend = true; }
L_0AB8: { ++fl.t; }
    if (pend) { pend = false; goto L_0B98; }
L_0AC0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[25], 16); set_vi(i9, i9 + 1u); } }
L_0AC8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[26], 16); set_vi(i9, i9 + 1u); } }
L_0AD0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[27], 16); set_vi(i9, i9 + 1u); } }
L_0AD8: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0AE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0AE8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0AF0: { ++fl.t; set_vi(i12, i1 & i6); }
L_0AF8: { ++fl.t; }
L_0B00: { ++fl.t; pend = 0u == i12; }
L_0B08: { ++fl.t; }
    if (pend) { pend = false; goto L_0B68; }
L_0B10: { ++fl.t; set_vi(i12, 356u); pend = true; }
L_0B18: { ++fl.t; }
    if (pend) { pend = false; goto L_0B98; }
L_0B20: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[17], 16); set_vi(i9, i9 + 1u); } }
L_0B28: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[18], 16); set_vi(i9, i9 + 1u); } }
L_0B30: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[19], 16); set_vi(i9, i9 + 1u); } }
L_0B38: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[25], 16); set_vi(i9, i9 + 1u); } }
L_0B40: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[26], 16); set_vi(i9, i9 + 1u); } }
L_0B48: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[27], 16); set_vi(i9, i9 + 1u); } }
L_0B50: { ++fl.t; set_vi(i11, i11 + 2u); }
L_0B58: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B60: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0B68: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[17], 16); set_vi(i9, i9 + 1u); } }
L_0B70: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[18], 16); set_vi(i9, i9 + 1u); } }
L_0B78: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[19], 16); set_vi(i9, i9 + 1u); } }
L_0B80: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0B88: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B90: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0B98: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n30[0])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n25 = vsel(n25, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0BA0: { ++fl.t; const v4u uv = vmuln(n21, vsplat(n30[0])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n26 = vsel(n26, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0BA8: { ++fl.t; }
L_0BB0: { ++fl.t; }
L_0BB8: { ++fl.t; const v4u uv = vsubn(n17, vsplat(n25[3])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BC0: { ++fl.t; const v4u uv = vsubn(n21, vsplat(n26[3])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BC8: { ++fl.t; set_vi(i1, 0u + i7); }
L_0BD0: { ++fl.t; }
L_0BD8: { ++fl.t; pend = 0u == i1; }
L_0BE0: { ++fl.t; }
    if (pend) { pend = false; goto L_0C18; }
L_0BE8: { ++fl.t; { const Reg128 m = r.vf[25]; r.vf[25].w[0] = m.w[1]; r.vf[25].w[1] = m.w[2]; r.vf[25].w[2] = m.w[3]; r.vf[25].w[3] = m.w[0]; } n25 = vfix(vload(r.vf[25])); }
L_0BF0: { ++fl.t; { const Reg128 m = r.vf[26]; r.vf[26].w[0] = m.w[1]; r.vf[26].w[1] = m.w[2]; r.vf[26].w[2] = m.w[3]; r.vf[26].w[3] = m.w[0]; } n26 = vfix(vload(r.vf[26])); }
L_0BF8: { ++fl.t; set_vi(i1, i1 - 1u); }
L_0C00: { ++fl.t; }
L_0C08: { ++fl.t; pend = true; }
L_0C10: { ++fl.t; }
    if (pend) { pend = false; goto L_0BD8; }
L_0C18: { ++fl.t; const v4u uv = vsubn(n26, n25); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0C20: { ++fl.t; }
L_0C28: { ++fl.t; }
L_0C30: { ++fl.t; }
L_0C38: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[25].w[0], r.vf[27].w[0]); fl.end_q(r, qb, 7u); } }
L_0C40: { ++fl.t; }
L_0C48: { ++fl.t; }
L_0C50: { ++fl.t; }
L_0C58: { ++fl.t; const v4u uv = vsubn(n21, n17); vstore(r.vf[25], uv); n25 = uv; }
L_0C60: { ++fl.t; const v4u uv = vsubn(n22, n18); vstore(r.vf[26], uv); n26 = uv; }
L_0C68: { ++fl.t; const v4u uv = vsubn(n23, n19); vstore(r.vf[27], uv); n27 = uv; }
L_0C70: { ++fl.t; fl.flush_q(r); const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vfix(vsplat(r.q))); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0C78: { ++fl.t; }
L_0C80: { ++fl.t; }
L_0C88: { ++fl.t; }
L_0C90: { ++fl.t; const v4u uv = vabs(vload(r.vf[29])); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n29 = vfix(vload(r.vf[29])); }
L_0C98: { ++fl.t; }
L_0CA0: { ++fl.t; }
L_0CA8: { ++fl.t; }
L_0CB0: { ++fl.t; const v4u uv = vmuln(n25, vsplat(n29[0])); vstore(r.vf[25], uv); n25 = uv; }
L_0CB8: { ++fl.t; const v4u uv = vmuln(n26, vsplat(n29[0])); vstore(r.vf[26], uv); n26 = uv; }
L_0CC0: { ++fl.t; const v4u uv = vmuln(n27, vsplat(n29[0])); vstore(r.vf[27], uv); n27 = uv; }
L_0CC8: { ++fl.t; }
L_0CD0: { ++fl.t; const v4u uv = vaddn(n25, n17); vstore(r.vf[25], uv); flags(r, r.vf[25], 15u); fl.set_mac(r.mac, r.status); n25 = uv; }
L_0CD8: { ++fl.t; const v4u uv = vaddn(n26, n18); vstore(r.vf[26], uv); flags(r, r.vf[26], 15u); fl.set_mac(r.mac, r.status); n26 = uv; }
L_0CE0: { ++fl.t; const v4u uv = vaddn(n27, n19); vstore(r.vf[27], uv); flags(r, r.vf[27], 15u); fl.set_mac(r.mac, r.status); n27 = uv; }
L_0CE8: { ++fl.t; }
L_0CF0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i12) * 8u) & 16383u; pendj = true; }
L_0CF8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0D00: { ++fl.t; set_vi(i1, i14 + 0u); }
L_0D08: { ++fl.t; set_vi(i2, i8 + 0u); }
L_0D10: { ++fl.t; set_vi(i3, i9 + 1u); }
L_0D18: { ++fl.t; set_vi(i11, 0u + 32767u); }
L_0D20: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0D28: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); const std::uint32_t v = i11; std::memcpy(q + 0, &v, 4); } }
L_0D30: { ++fl.t; }
L_0D38: { ++fl.t; }
L_0D40: { ++fl.t; }
L_0D48: { ++fl.t; vu::kick(1, i9); }
L_0D50: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 1006u) + 0, 2); set_vi(i6, v); } }
L_0D58: { ++fl.t; set_vi(i11, i10 + 32767u); }
L_0D60: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0D68: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); const std::uint32_t v = i11; std::memcpy(q + 0, &v, 4); } }
L_0D70: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 0u); std::memcpy(&r.vf[20], q, 16); } n20 = vfix(vload(r.vf[20])); }
L_0D78: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 1u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_0D80: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 2u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0D88: { ++fl.t; }
L_0D90: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n20[0])); vstore(r.acc, uv); nacc = uv; }
L_0D98: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n20[1])); vstore(r.acc, uv); nacc = uv; }
L_0DA0: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n20[2])); vstore(r.acc, uv); nacc = uv; }
L_0DA8: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n20[3])); vstore(r.vf[27], uv); flags(r, r.vf[27], 15u); fl.set_mac(r.mac, r.status); n27 = uv; }
L_0DB0: { ++fl.t; }
L_0DB8: { ++fl.t; }
L_0DC0: { ++fl.t; }
L_0DC8: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[27].w[3]); fl.end_q(r, qb, 7u); } }
L_0DD0: { ++fl.t; }
L_0DD8: { ++fl.t; }
L_0DE0: { ++fl.t; }
L_0DE8: { ++fl.t; }
L_0DF0: { ++fl.t; }
L_0DF8: { ++fl.t; }
L_0E00: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n27, vfix(vsplat(r.q))); vstore(r.vf[27], uv); flags(r, r.vf[27], 15u); fl.set_mac(r.mac, r.status); n27 = uv; }
L_0E08: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n22, vfix(vsplat(r.q))); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); flags(r, r.vf[29], 14u); fl.set_mac(r.mac, r.status); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0E10: { ++fl.t; const v4u uv = vftoi(vload(r.vf[21]), 0); vstore(r.vf[28], uv); n28 = vfix(vload(r.vf[28])); }
L_0E18: { ++fl.t; set_vi(i14, 453u); pend = true; }
L_0E20: { ++fl.t; const v4u uv = vftoi(vload(r.vf[27]), 4); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
    if (pend) { pend = false; goto L_0580; }
L_0E28: { ++fl.t; set_vi(i10, i10 + 4294967295u); }
L_0E30: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 0u); std::memcpy(q, &r.vf[29], 16); } }
L_0E38: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 1u); std::memcpy(q, &r.vf[28], 16); } }
L_0E40: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 2u); std::memcpy(q + 0, &r.vf[27].w[0], 4); std::memcpy(q + 4, &r.vf[27].w[1], 4); std::memcpy(q + 8, &r.vf[27].w[2], 4); } }
L_0E48: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 2u); const std::uint32_t v = i12; std::memcpy(q + 12, &v, 4); } }
L_0E50: { ++fl.t; set_vi(i3, i3 + 3u); }
L_0E58: { ++fl.t; set_vi(i2, i2 + 3u); }
L_0E60: { ++fl.t; pend = 0u != i10; }
L_0E68: { ++fl.t; }
    if (pend) { pend = false; goto L_0D70; }
L_0E70: { ++fl.t; vu::kick(1, i9); }
L_0E78: { ++fl.t; }
L_0E80: { ++fl.t; set_vi(i14, i1 + 0u); }
L_0E88: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E90: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0E98: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[16], 16); } }
L_0EA0: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[17], 16); } }
L_0EA8: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[18], 16); } }
L_0EB0: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[19], 16); } }
L_0EB8: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[20], 16); } }
L_0EC0: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[21], 16); } }
L_0EC8: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[22], 16); } }
L_0ED0: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[23], 16); } }
L_0ED8: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[24], 16); } }
L_0EE0: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[25], 16); } }
L_0EE8: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[26], 16); } }
L_0EF0: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[27], 16); } }
L_0EF8: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[28], 16); } }
L_0F00: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[29], 16); } }
L_0F08: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[30], 16); } }
L_0F10: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[31], 16); } }
L_0F18: { ++fl.t; set_vi(i13, i13 - 1u); }
L_0F20: { ++fl.t; { std::uint8_t *q = qword(mem, i13); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_0F28: { ++fl.t; { std::uint8_t *q = qword(mem, i13); const std::uint32_t v = i3; std::memcpy(q + 4, &v, 4); } }
L_0F30: { ++fl.t; { std::uint8_t *q = qword(mem, i13); const std::uint32_t v = i4; std::memcpy(q + 8, &v, 4); } }
L_0F38: { ++fl.t; { std::uint8_t *q = qword(mem, i13); const std::uint32_t v = i5; std::memcpy(q + 12, &v, 4); } }
L_0F40: { ++fl.t; set_vi(i13, i13 - 1u); }
L_0F48: { ++fl.t; { std::uint8_t *q = qword(mem, i13); const std::uint32_t v = i6; std::memcpy(q + 0, &v, 4); } }
L_0F50: { ++fl.t; { std::uint8_t *q = qword(mem, i13); const std::uint32_t v = i7; std::memcpy(q + 4, &v, 4); } }
L_0F58: { ++fl.t; { std::uint8_t *q = qword(mem, i13); const std::uint32_t v = i8; std::memcpy(q + 8, &v, 4); } }
L_0F60: { ++fl.t; { std::uint8_t *q = qword(mem, i13); const std::uint32_t v = i9; std::memcpy(q + 12, &v, 4); } }
L_0F68: { ++fl.t; set_vi(i13, i13 - 1u); }
L_0F70: { ++fl.t; { std::uint8_t *q = qword(mem, i13); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_0F78: { ++fl.t; { std::uint8_t *q = qword(mem, i13); const std::uint32_t v = i11; std::memcpy(q + 4, &v, 4); } }
L_0F80: { ++fl.t; { std::uint8_t *q = qword(mem, i13); const std::uint32_t v = i12; std::memcpy(q + 8, &v, 4); } }
L_0F88: { ++fl.t; { std::uint8_t *q = qword(mem, i13); const std::uint32_t v = i15; std::memcpy(q + 12, &v, 4); } }
L_0F90: { ++fl.t; }
L_0F98: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_0FA0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0FA8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i13) + 0, 2); set_vi(i10, v); } }
L_0FB0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i13) + 4, 2); set_vi(i11, v); } }
L_0FB8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i13) + 8, 2); set_vi(i12, v); } }
L_0FC0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i13) + 12, 2); set_vi(i15, v); } }
L_0FC8: { ++fl.t; set_vi(i13, i13 + 1u); }
L_0FD0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i13) + 0, 2); set_vi(i6, v); } }
L_0FD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i13) + 4, 2); set_vi(i7, v); } }
L_0FE0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i13) + 8, 2); set_vi(i8, v); } }
L_0FE8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i13) + 12, 2); set_vi(i9, v); } }
L_0FF0: { ++fl.t; set_vi(i13, i13 + 1u); }
L_0FF8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i13) + 0, 2); set_vi(i2, v); } }
L_1000: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i13) + 4, 2); set_vi(i3, v); } }
L_1008: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i13) + 8, 2); set_vi(i4, v); } }
L_1010: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i13) + 12, 2); set_vi(i5, v); } }
L_1018: { ++fl.t; set_vi(i13, i13 + 1u); }
L_1020: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[31], q, 16); set_vi(i13, i13 + 1u); } n31 = vfix(vload(r.vf[31])); }
L_1028: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[30], q, 16); set_vi(i13, i13 + 1u); } n30 = vfix(vload(r.vf[30])); }
L_1030: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[29], q, 16); set_vi(i13, i13 + 1u); } n29 = vfix(vload(r.vf[29])); }
L_1038: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[28], q, 16); set_vi(i13, i13 + 1u); } n28 = vfix(vload(r.vf[28])); }
L_1040: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[27], q, 16); set_vi(i13, i13 + 1u); } n27 = vfix(vload(r.vf[27])); }
L_1048: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[26], q, 16); set_vi(i13, i13 + 1u); } n26 = vfix(vload(r.vf[26])); }
L_1050: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[25], q, 16); set_vi(i13, i13 + 1u); } n25 = vfix(vload(r.vf[25])); }
L_1058: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[24], q, 16); set_vi(i13, i13 + 1u); } n24 = vfix(vload(r.vf[24])); }
L_1060: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[23], q, 16); set_vi(i13, i13 + 1u); } n23 = vfix(vload(r.vf[23])); }
L_1068: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[22], q, 16); set_vi(i13, i13 + 1u); } n22 = vfix(vload(r.vf[22])); }
L_1070: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[21], q, 16); set_vi(i13, i13 + 1u); } n21 = vfix(vload(r.vf[21])); }
L_1078: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[20], q, 16); set_vi(i13, i13 + 1u); } n20 = vfix(vload(r.vf[20])); }
L_1080: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[19], q, 16); set_vi(i13, i13 + 1u); } n19 = vfix(vload(r.vf[19])); }
L_1088: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[18], q, 16); set_vi(i13, i13 + 1u); } n18 = vfix(vload(r.vf[18])); }
L_1090: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } n17 = vfix(vload(r.vf[17])); }
L_1098: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } }
L_10A0: { ++fl.t; }
L_10A8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_10B0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, 4280u);
    return;
dispatch:
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_A1E7C1E2F5F10CF6(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n7 = vfix(vload(r.vf[7]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n12 = vfix(vload(r.vf[12]));
    v4u n20 = vfix(vload(r.vf[20]));
    v4u n22 = vfix(vload(r.vf[22]));
    v4u n27 = vfix(vload(r.vf[27]));
    v4u nacc = vfix(vload(r.acc));
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i14 = r.vi[14];
    std::uint16_t i15 = r.vi[15];
    goto L_0B18;
L_0640: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 29u); std::memcpy(&r.vf[12], q, 16); } n12 = vfix(vload(r.vf[12])); }
L_0648: { ++fl.t; set_vi(i12, 0u + 1u); }
L_0650: { ++fl.t; }
L_0658: { ++fl.t; pend = i6 == i12; }
L_0660: { ++fl.t; }
    if (pend) { pend = false; goto L_0738; }
L_0668: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n12, vfix(vsplat(r.q))); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0670: { ++fl.t; }
L_0678: { ++fl.t; }
L_0680: { ++fl.t; }
L_0688: { ++fl.t; const v4u uv = vaddn(n12, vsplat(n12[1])); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0690: { ++fl.t; }
L_0698: { ++fl.t; }
L_06A0: { ++fl.t; }
L_06A8: { ++fl.t; const v4u uv = vmin(vload(r.vf[12]), vsplat(r.vf[12].w[3])); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vfix(vload(r.vf[12])); }
L_06B0: { ++fl.t; }
L_06B8: { ++fl.t; }
L_06C0: { ++fl.t; }
L_06C8: { ++fl.t; const v4u uv = vmax(vload(r.vf[12]), vsplat(r.vf[12].w[2])); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vfix(vload(r.vf[12])); }
L_06D0: { ++fl.t; }
L_06D8: { ++fl.t; }
L_06E0: { ++fl.t; }
L_06E8: { ++fl.t; const v4u uv = vftoi(vload(r.vf[12]), 4); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vfix(vload(r.vf[12])); }
L_06F0: { ++fl.t; }
L_06F8: { ++fl.t; }
L_0700: { ++fl.t; }
L_0708: { ++fl.t; set_vi(i12, r.vf[12].w[0]); }
L_0710: { ++fl.t; }
L_0718: { ++fl.t; }
L_0720: { ++fl.t; }
L_0728: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_0730: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0738: { ++fl.t; set_vi(i12, 0u + 4080u); }
L_0740: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_0748: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, 1872u);
    return;
L_0B18: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_0B20: { ++fl.t; }
L_0B28: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_0B30: { ++fl.t; }
    if (pend) { pend = false; goto L_0B60; }
L_0B38: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0B40: { ++fl.t; set_vi(i9, i4 + 0u); }
L_0B48: { ++fl.t; set_vi(i10, 0u + i11); }
L_0B50: { ++fl.t; set_vi(i15, 364u); pend = true; }
L_0B58: { ++fl.t; }
    if (pend) { pend = false; goto L_0EB8; }
L_0B60: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_0B68: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, 2928u);
    return;
L_0EB8: { ++fl.t; set_vi(i1, i14 + 0u); }
L_0EC0: { ++fl.t; set_vi(i2, i8 + 0u); }
L_0EC8: { ++fl.t; set_vi(i3, i9 + 1u); }
L_0ED0: { ++fl.t; set_vi(i11, 0u + 32767u); }
L_0ED8: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0EE0: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); const std::uint32_t v = i11; std::memcpy(q + 0, &v, 4); } }
L_0EE8: { ++fl.t; }
L_0EF0: { ++fl.t; }
L_0EF8: { ++fl.t; }
L_0F00: { ++fl.t; vu::kick(1, i9); }
L_0F08: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 1006u) + 0, 2); set_vi(i6, v); } }
L_0F10: { ++fl.t; set_vi(i11, i10 + 32767u); }
L_0F18: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0F20: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); const std::uint32_t v = i11; std::memcpy(q + 0, &v, 4); } }
L_0F28: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 0u); std::memcpy(&r.vf[20], q, 16); } n20 = vfix(vload(r.vf[20])); }
L_0F30: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 1u); std::memcpy(&r.vf[21], q, 16); } }
L_0F38: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 2u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0F40: { ++fl.t; }
L_0F48: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n20[0])); vstore(r.acc, uv); nacc = uv; }
L_0F50: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n20[1])); vstore(r.acc, uv); nacc = uv; }
L_0F58: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n20[2])); vstore(r.acc, uv); nacc = uv; }
L_0F60: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n20[3])); vstore(r.vf[27], uv); n27 = uv; }
L_0F68: { ++fl.t; }
L_0F70: { ++fl.t; }
L_0F78: { ++fl.t; }
L_0F80: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[27].w[3]); fl.end_q(r, qb, 7u); } }
L_0F88: { ++fl.t; }
L_0F90: { ++fl.t; }
L_0F98: { ++fl.t; }
L_0FA0: { ++fl.t; }
L_0FA8: { ++fl.t; }
L_0FB0: { ++fl.t; }
L_0FB8: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n27, vfix(vsplat(r.q))); vstore(r.vf[27], uv); n27 = uv; }
L_0FC0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n22, vfix(vsplat(r.q))); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0FC8: { ++fl.t; const v4u uv = vftoi(vload(r.vf[21]), 0); vstore(r.vf[28], uv); }
L_0FD0: { ++fl.t; set_vi(i14, 508u); pend = true; }
L_0FD8: { ++fl.t; const v4u uv = vftoi(vload(r.vf[27]), 4); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
    if (pend) { pend = false; goto L_0640; }
L_0FE0: { ++fl.t; set_vi(i10, i10 + 4294967295u); }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 0u); std::memcpy(q, &r.vf[29], 16); } }
L_0FF0: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 1u); std::memcpy(q, &r.vf[28], 16); } }
L_0FF8: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 2u); std::memcpy(q + 0, &r.vf[27].w[0], 4); std::memcpy(q + 4, &r.vf[27].w[1], 4); std::memcpy(q + 8, &r.vf[27].w[2], 4); } }
L_1000: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 2u); const std::uint32_t v = i12; std::memcpy(q + 12, &v, 4); } }
L_1008: { ++fl.t; set_vi(i3, i3 + 3u); }
L_1010: { ++fl.t; set_vi(i2, i2 + 3u); }
L_1018: { ++fl.t; pend = 0u != i10; }
L_1020: { ++fl.t; }
    if (pend) { pend = false; goto L_0F28; }
L_1028: { ++fl.t; vu::kick(1, i9); }
L_1030: { ++fl.t; }
L_1038: { ++fl.t; set_vi(i14, i1 + 0u); }
L_1040: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1048: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, 4176u);
    return;
dispatch:
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_A21FE2931DB0A84E(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n7 = vfix(vload(r.vf[7]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n17 = vfix(vload(r.vf[17]));
    v4u n18 = vfix(vload(r.vf[18]));
    v4u n19 = vfix(vload(r.vf[19]));
    v4u n20 = vfix(vload(r.vf[20]));
    v4u n21 = vfix(vload(r.vf[21]));
    v4u n22 = vfix(vload(r.vf[22]));
    v4u n23 = vfix(vload(r.vf[23]));
    v4u n25 = vfix(vload(r.vf[25]));
    v4u n26 = vfix(vload(r.vf[26]));
    v4u n27 = vfix(vload(r.vf[27]));
    v4u n29 = vfix(vload(r.vf[29]));
    v4u n30 = vfix(vload(r.vf[30]));
    v4u nacc = vfix(vload(r.acc));
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
    goto L_0620;
L_04F8: { ++fl.t; set_vi(i12, 0u + 4080u); }
L_0500: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_0508: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, 1296u);
    return;
L_0610: { ++fl.t; set_vi(i15, 196u); pend = true; }
L_0618: { ++fl.t; }
    if (pend) { pend = false; goto L_0970; }
L_0620: { ++fl.t; set_vi(i10, i10 - 1u); }
L_0628: { ++fl.t; }
L_0630: { ++fl.t; pend = 0u != i10; }
L_0638: { ++fl.t; }
    if (pend) { pend = false; goto L_0610; }
L_0640: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0648: { ++fl.t; set_vi(i15, 203u); pend = true; }
L_0650: { ++fl.t; }
    if (pend) { pend = false; goto L_0930; }
L_0658: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_0660: { ++fl.t; }
L_0668: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_0670: { ++fl.t; }
    if (pend) { pend = false; goto L_0920; }
L_0678: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i5, 0u + 128u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0680: { ++fl.t; set_vi(i6, 0u + 2u); }
L_0688: { ++fl.t; set_vi(i7, 0u + 0u); }
L_0690: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0698: { ++fl.t; set_vi(i9, i3 + 0u); }
L_06A0: { ++fl.t; set_vi(i10, 0u + i11); }
L_06A8: { ++fl.t; set_vi(i11, 0u + 0u); }
L_06B0: { ++fl.t; set_vi(i15, 216u); pend = true; }
L_06B8: { ++fl.t; }
    if (pend) { pend = false; goto L_0970; }
L_06C0: { ++fl.t; set_vi(i10, i10 - 1u); }
L_06C8: { ++fl.t; }
L_06D0: { ++fl.t; pend = 0u != i10; }
L_06D8: { ++fl.t; }
    if (pend) { pend = false; goto L_06B0; }
L_06E0: { ++fl.t; set_vi(i8, i3 + 0u); }
L_06E8: { ++fl.t; set_vi(i15, 223u); pend = true; }
L_06F0: { ++fl.t; }
    if (pend) { pend = false; goto L_0930; }
L_06F8: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_0700: { ++fl.t; }
L_0708: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_0710: { ++fl.t; }
    if (pend) { pend = false; goto L_0920; }
L_0718: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i5, 0u + 64u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0720: { ++fl.t; set_vi(i6, 0u + 1u); }
L_0728: { ++fl.t; set_vi(i7, 0u + 0u); }
L_0730: { ++fl.t; set_vi(i8, i3 + 0u); }
L_0738: { ++fl.t; set_vi(i9, i2 + 0u); }
L_0740: { ++fl.t; set_vi(i10, 0u + i11); }
L_0748: { ++fl.t; set_vi(i11, 0u + 0u); }
L_0750: { ++fl.t; set_vi(i15, 236u); pend = true; }
L_0758: { ++fl.t; }
    if (pend) { pend = false; goto L_0970; }
L_0760: { ++fl.t; set_vi(i10, i10 - 1u); }
L_0768: { ++fl.t; }
L_0770: { ++fl.t; pend = 0u != i10; }
L_0778: { ++fl.t; }
    if (pend) { pend = false; goto L_0750; }
L_0780: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0788: { ++fl.t; set_vi(i15, 243u); pend = true; }
L_0790: { ++fl.t; }
    if (pend) { pend = false; goto L_0930; }
L_0798: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_07A0: { ++fl.t; }
L_07A8: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_07B0: { ++fl.t; }
    if (pend) { pend = false; goto L_0920; }
L_07B8: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i5, 0u + 512u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_07C0: { ++fl.t; set_vi(i6, 0u + 8u); }
L_07C8: { ++fl.t; set_vi(i7, 0u + 1u); }
L_07D0: { ++fl.t; set_vi(i8, i2 + 0u); }
L_07D8: { ++fl.t; set_vi(i9, i3 + 0u); }
L_07E0: { ++fl.t; set_vi(i10, 0u + i11); }
L_07E8: { ++fl.t; set_vi(i11, 0u + 0u); }
L_07F0: { ++fl.t; set_vi(i15, 256u); pend = true; }
L_07F8: { ++fl.t; }
    if (pend) { pend = false; goto L_0970; }
L_0800: { ++fl.t; set_vi(i10, i10 - 1u); }
L_0808: { ++fl.t; }
L_0810: { ++fl.t; pend = 0u != i10; }
L_0818: { ++fl.t; }
    if (pend) { pend = false; goto L_07F0; }
L_0820: { ++fl.t; set_vi(i8, i3 + 0u); }
L_0828: { ++fl.t; set_vi(i15, 263u); pend = true; }
L_0830: { ++fl.t; }
    if (pend) { pend = false; goto L_0930; }
L_0838: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_0840: { ++fl.t; }
L_0848: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_0850: { ++fl.t; }
    if (pend) { pend = false; goto L_0920; }
L_0858: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i5, 0u + 256u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0860: { ++fl.t; set_vi(i6, 0u + 4u); }
L_0868: { ++fl.t; set_vi(i7, 0u + 1u); }
L_0870: { ++fl.t; set_vi(i8, i3 + 0u); }
L_0878: { ++fl.t; set_vi(i9, i2 + 0u); }
L_0880: { ++fl.t; set_vi(i10, 0u + i11); }
L_0888: { ++fl.t; set_vi(i11, 0u + 0u); }
L_0890: { ++fl.t; set_vi(i15, 276u); pend = true; }
L_0898: { ++fl.t; }
    if (pend) { pend = false; goto L_0970; }
L_08A0: { ++fl.t; set_vi(i10, i10 - 1u); }
L_08A8: { ++fl.t; }
L_08B0: { ++fl.t; pend = 0u != i10; }
L_08B8: { ++fl.t; }
    if (pend) { pend = false; goto L_0890; }
L_08C0: { ++fl.t; set_vi(i8, i2 + 0u); }
L_08C8: { ++fl.t; set_vi(i15, 283u); pend = true; }
L_08D0: { ++fl.t; }
    if (pend) { pend = false; goto L_0930; }
L_08D8: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_08E0: { ++fl.t; }
L_08E8: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_08F0: { ++fl.t; }
    if (pend) { pend = false; goto L_0920; }
L_08F8: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0900: { ++fl.t; set_vi(i9, i4 + 0u); }
L_0908: { ++fl.t; set_vi(i10, 0u + i11); }
L_0910: { ++fl.t; set_vi(i15, 292u); pend = true; }
L_0918: { ++fl.t; }
    if (pend) { pend = false; goto L_0C78; }
L_0920: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_0928: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0930: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 0u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_0938: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 1u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0940: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 2u); std::memcpy(&r.vf[23], q, 16); } n23 = vfix(vload(r.vf[23])); }
L_0948: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[21], 16); set_vi(i9, i9 + 1u); } }
L_0950: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[22], 16); set_vi(i9, i9 + 1u); } }
L_0958: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[23], 16); set_vi(i9, i9 + 1u); } }
L_0960: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0968: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0970: { ++fl.t; { const std::uint8_t *q = qword(mem, i8); std::memcpy(&r.vf[17], q, 16); set_vi(i8, i8 + 1u); } n17 = vfix(vload(r.vf[17])); }
L_0978: { ++fl.t; { const std::uint8_t *q = qword(mem, i8); std::memcpy(&r.vf[18], q, 16); set_vi(i8, i8 + 1u); } n18 = vfix(vload(r.vf[18])); }
L_0980: { ++fl.t; { const std::uint8_t *q = qword(mem, i8); std::memcpy(&r.vf[19], q, 16); set_vi(i8, i8 + 1u); } n19 = vfix(vload(r.vf[19])); }
L_0988: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 0u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_0990: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 1u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0998: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 2u); std::memcpy(&r.vf[23], q, 16); } n23 = vfix(vload(r.vf[23])); }
L_09A0: { ++fl.t; }
L_09A8: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[17], r.vf[17].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_09B0: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[21], r.vf[21].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_09B8: { ++fl.t; }
L_09C0: { ++fl.t; }
L_09C8: { ++fl.t; }
L_09D0: { ++fl.t; set_vi(i1, fl.clip() & 0xFFFu); }
L_09D8: { ++fl.t; set_vi(i12, i1 & i5); }
L_09E0: { ++fl.t; }
L_09E8: { ++fl.t; pend = 0u == i12; }
L_09F0: { ++fl.t; }
    if (pend) { pend = false; goto L_0A68; }
L_09F8: { ++fl.t; set_vi(i12, i1 & i6); }
L_0A00: { ++fl.t; }
L_0A08: { ++fl.t; pend = 0u == i12; }
L_0A10: { ++fl.t; }
    if (pend) { pend = false; goto L_0A28; }
L_0A18: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0A20: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0A28: { ++fl.t; set_vi(i12, 327u); pend = true; }
L_0A30: { ++fl.t; }
    if (pend) { pend = false; goto L_0B10; }
L_0A38: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[25], 16); set_vi(i9, i9 + 1u); } }
L_0A40: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[26], 16); set_vi(i9, i9 + 1u); } }
L_0A48: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[27], 16); set_vi(i9, i9 + 1u); } }
L_0A50: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0A58: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0A60: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0A68: { ++fl.t; set_vi(i12, i1 & i6); }
L_0A70: { ++fl.t; }
L_0A78: { ++fl.t; pend = 0u == i12; }
L_0A80: { ++fl.t; }
    if (pend) { pend = false; goto L_0AE0; }
L_0A88: { ++fl.t; set_vi(i12, 339u); pend = true; }
L_0A90: { ++fl.t; }
    if (pend) { pend = false; goto L_0B10; }
L_0A98: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[17], 16); set_vi(i9, i9 + 1u); } }
L_0AA0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[18], 16); set_vi(i9, i9 + 1u); } }
L_0AA8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[19], 16); set_vi(i9, i9 + 1u); } }
L_0AB0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[25], 16); set_vi(i9, i9 + 1u); } }
L_0AB8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[26], 16); set_vi(i9, i9 + 1u); } }
L_0AC0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[27], 16); set_vi(i9, i9 + 1u); } }
L_0AC8: { ++fl.t; set_vi(i11, i11 + 2u); }
L_0AD0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0AD8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0AE0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[17], 16); set_vi(i9, i9 + 1u); } }
L_0AE8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[18], 16); set_vi(i9, i9 + 1u); } }
L_0AF0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[19], 16); set_vi(i9, i9 + 1u); } }
L_0AF8: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0B00: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B08: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0B10: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n30[0])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n25 = vsel(n25, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0B18: { ++fl.t; const v4u uv = vmuln(n21, vsplat(n30[0])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n26 = vsel(n26, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0B20: { ++fl.t; }
L_0B28: { ++fl.t; }
L_0B30: { ++fl.t; const v4u uv = vsubn(n17, vsplat(n25[3])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0B38: { ++fl.t; const v4u uv = vsubn(n21, vsplat(n26[3])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0B40: { ++fl.t; set_vi(i1, 0u + i7); }
L_0B48: { ++fl.t; }
L_0B50: { ++fl.t; pend = 0u == i1; }
L_0B58: { ++fl.t; }
    if (pend) { pend = false; goto L_0B90; }
L_0B60: { ++fl.t; { const Reg128 m = r.vf[25]; r.vf[25].w[0] = m.w[1]; r.vf[25].w[1] = m.w[2]; r.vf[25].w[2] = m.w[3]; r.vf[25].w[3] = m.w[0]; } n25 = vfix(vload(r.vf[25])); }
L_0B68: { ++fl.t; { const Reg128 m = r.vf[26]; r.vf[26].w[0] = m.w[1]; r.vf[26].w[1] = m.w[2]; r.vf[26].w[2] = m.w[3]; r.vf[26].w[3] = m.w[0]; } n26 = vfix(vload(r.vf[26])); }
L_0B70: { ++fl.t; set_vi(i1, i1 - 1u); }
L_0B78: { ++fl.t; }
L_0B80: { ++fl.t; pend = true; }
L_0B88: { ++fl.t; }
    if (pend) { pend = false; goto L_0B50; }
L_0B90: { ++fl.t; const v4u uv = vsubn(n26, n25); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0B98: { ++fl.t; }
L_0BA0: { ++fl.t; }
L_0BA8: { ++fl.t; }
L_0BB0: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[25].w[0], r.vf[27].w[0]); fl.end_q(r, qb, 7u); } }
L_0BB8: { ++fl.t; }
L_0BC0: { ++fl.t; }
L_0BC8: { ++fl.t; }
L_0BD0: { ++fl.t; const v4u uv = vsubn(n21, n17); vstore(r.vf[25], uv); n25 = uv; }
L_0BD8: { ++fl.t; const v4u uv = vsubn(n22, n18); vstore(r.vf[26], uv); n26 = uv; }
L_0BE0: { ++fl.t; const v4u uv = vsubn(n23, n19); vstore(r.vf[27], uv); n27 = uv; }
L_0BE8: { ++fl.t; fl.flush_q(r); const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vfix(vsplat(r.q))); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0BF0: { ++fl.t; }
L_0BF8: { ++fl.t; }
L_0C00: { ++fl.t; }
L_0C08: { ++fl.t; const v4u uv = vabs(vload(r.vf[29])); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n29 = vfix(vload(r.vf[29])); }
L_0C10: { ++fl.t; }
L_0C18: { ++fl.t; }
L_0C20: { ++fl.t; }
L_0C28: { ++fl.t; const v4u uv = vmuln(n25, vsplat(n29[0])); vstore(r.vf[25], uv); n25 = uv; }
L_0C30: { ++fl.t; const v4u uv = vmuln(n26, vsplat(n29[0])); vstore(r.vf[26], uv); n26 = uv; }
L_0C38: { ++fl.t; const v4u uv = vmuln(n27, vsplat(n29[0])); vstore(r.vf[27], uv); n27 = uv; }
L_0C40: { ++fl.t; }
L_0C48: { ++fl.t; const v4u uv = vaddn(n25, n17); vstore(r.vf[25], uv); n25 = uv; }
L_0C50: { ++fl.t; const v4u uv = vaddn(n26, n18); vstore(r.vf[26], uv); n26 = uv; }
L_0C58: { ++fl.t; const v4u uv = vaddn(n27, n19); vstore(r.vf[27], uv); n27 = uv; }
L_0C60: { ++fl.t; }
L_0C68: { ++fl.t; jpc = (static_cast<std::uint32_t>(i12) * 8u) & 16383u; pendj = true; }
L_0C70: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0C78: { ++fl.t; set_vi(i1, i14 + 0u); }
L_0C80: { ++fl.t; set_vi(i2, i8 + 0u); }
L_0C88: { ++fl.t; set_vi(i3, i9 + 1u); }
L_0C90: { ++fl.t; set_vi(i11, 0u + 32767u); }
L_0C98: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0CA0: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); const std::uint32_t v = i11; std::memcpy(q + 0, &v, 4); } }
L_0CA8: { ++fl.t; }
L_0CB0: { ++fl.t; }
L_0CB8: { ++fl.t; }
L_0CC0: { ++fl.t; vu::kick(1, i9); }
L_0CC8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 1006u) + 0, 2); set_vi(i6, v); } }
L_0CD0: { ++fl.t; set_vi(i11, i10 + 32767u); }
L_0CD8: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0CE0: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); const std::uint32_t v = i11; std::memcpy(q + 0, &v, 4); } }
L_0CE8: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 0u); std::memcpy(&r.vf[20], q, 16); } n20 = vfix(vload(r.vf[20])); }
L_0CF0: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 1u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_0CF8: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 2u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0D00: { ++fl.t; }
L_0D08: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n20[0])); vstore(r.acc, uv); nacc = uv; }
L_0D10: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n20[1])); vstore(r.acc, uv); nacc = uv; }
L_0D18: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n20[2])); vstore(r.acc, uv); nacc = uv; }
L_0D20: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n20[3])); vstore(r.vf[27], uv); n27 = uv; }
L_0D28: { ++fl.t; }
L_0D30: { ++fl.t; }
L_0D38: { ++fl.t; }
L_0D40: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[27].w[3]); fl.end_q(r, qb, 7u); } }
L_0D48: { ++fl.t; }
L_0D50: { ++fl.t; }
L_0D58: { ++fl.t; }
L_0D60: { ++fl.t; }
L_0D68: { ++fl.t; }
L_0D70: { ++fl.t; }
L_0D78: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n27, vfix(vsplat(r.q))); vstore(r.vf[27], uv); n27 = uv; }
L_0D80: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n22, vfix(vsplat(r.q))); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0D88: { ++fl.t; const v4u uv = vftoi(vload(r.vf[21]), 0); vstore(r.vf[28], uv); }
L_0D90: { ++fl.t; set_vi(i14, 436u); pend = true; }
L_0D98: { ++fl.t; const v4u uv = vftoi(vload(r.vf[27]), 4); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
    if (pend) { pend = false; goto L_04F8; }
L_0DA0: { ++fl.t; set_vi(i10, i10 + 4294967295u); }
L_0DA8: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 0u); std::memcpy(q, &r.vf[29], 16); } }
L_0DB0: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 1u); std::memcpy(q, &r.vf[28], 16); } }
L_0DB8: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 2u); std::memcpy(q + 0, &r.vf[27].w[0], 4); std::memcpy(q + 4, &r.vf[27].w[1], 4); std::memcpy(q + 8, &r.vf[27].w[2], 4); } }
L_0DC0: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 2u); const std::uint32_t v = i12; std::memcpy(q + 12, &v, 4); } }
L_0DC8: { ++fl.t; set_vi(i3, i3 + 3u); }
L_0DD0: { ++fl.t; set_vi(i2, i2 + 3u); }
L_0DD8: { ++fl.t; pend = 0u != i10; }
L_0DE0: { ++fl.t; }
    if (pend) { pend = false; goto L_0CE8; }
L_0DE8: { ++fl.t; vu::kick(1, i9); }
L_0DF0: { ++fl.t; }
L_0DF8: { ++fl.t; set_vi(i14, i1 + 0u); }
L_0E00: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E08: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, 3600u);
    return;
dispatch:
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_A2D63ABF17C8EE03(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    goto L_0010;
L_0010: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 2u); std::memcpy(&r.vf[3], q, 16); } }
L_0018: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 3u); std::memcpy(&r.vf[4], q, 16); } }
L_0020: { ++fl.t; ending = true; }
L_0028: { ++fl.t; }
    if (ending) { r.tpc = 48u; return; }
    vu::interpret(1, 48u);
    return;
dispatch:
    vu::interpret(1, jpc);
    return;
}

void vu1_A4109A59AD6C6D88(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n7 = vfix(vload(r.vf[7]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n12 = vfix(vload(r.vf[12]));
    v4u n17 = vfix(vload(r.vf[17]));
    v4u n18 = vfix(vload(r.vf[18]));
    v4u n19 = vfix(vload(r.vf[19]));
    v4u n20 = vfix(vload(r.vf[20]));
    v4u n21 = vfix(vload(r.vf[21]));
    v4u n22 = vfix(vload(r.vf[22]));
    v4u n23 = vfix(vload(r.vf[23]));
    v4u n25 = vfix(vload(r.vf[25]));
    v4u n26 = vfix(vload(r.vf[26]));
    v4u n27 = vfix(vload(r.vf[27]));
    v4u n29 = vfix(vload(r.vf[29]));
    v4u n30 = vfix(vload(r.vf[30]));
    v4u nacc = vfix(vload(r.acc));
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
    goto L_0860;
L_0640: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 29u); std::memcpy(&r.vf[12], q, 16); } n12 = vfix(vload(r.vf[12])); }
L_0648: { ++fl.t; set_vi(i12, 0u + 1u); }
L_0650: { ++fl.t; }
L_0658: { ++fl.t; pend = i6 == i12; }
L_0660: { ++fl.t; }
    if (pend) { pend = false; goto L_0738; }
L_0668: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n12, vfix(vsplat(r.q))); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0670: { ++fl.t; }
L_0678: { ++fl.t; }
L_0680: { ++fl.t; }
L_0688: { ++fl.t; const v4u uv = vaddn(n12, vsplat(n12[1])); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0690: { ++fl.t; }
L_0698: { ++fl.t; }
L_06A0: { ++fl.t; }
L_06A8: { ++fl.t; const v4u uv = vmin(vload(r.vf[12]), vsplat(r.vf[12].w[3])); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vfix(vload(r.vf[12])); }
L_06B0: { ++fl.t; }
L_06B8: { ++fl.t; }
L_06C0: { ++fl.t; }
L_06C8: { ++fl.t; const v4u uv = vmax(vload(r.vf[12]), vsplat(r.vf[12].w[2])); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vfix(vload(r.vf[12])); }
L_06D0: { ++fl.t; }
L_06D8: { ++fl.t; }
L_06E0: { ++fl.t; }
L_06E8: { ++fl.t; const v4u uv = vftoi(vload(r.vf[12]), 4); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vfix(vload(r.vf[12])); }
L_06F0: { ++fl.t; }
L_06F8: { ++fl.t; }
L_0700: { ++fl.t; }
L_0708: { ++fl.t; set_vi(i12, r.vf[12].w[0]); }
L_0710: { ++fl.t; }
L_0718: { ++fl.t; }
L_0720: { ++fl.t; }
L_0728: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_0730: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0738: { ++fl.t; set_vi(i12, 0u + 4080u); }
L_0740: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_0748: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, 1872u);
    return;
L_0850: { ++fl.t; set_vi(i15, 268u); pend = true; }
L_0858: { ++fl.t; }
    if (pend) { pend = false; goto L_0BB0; }
L_0860: { ++fl.t; set_vi(i10, i10 - 1u); }
L_0868: { ++fl.t; }
L_0870: { ++fl.t; pend = 0u != i10; }
L_0878: { ++fl.t; }
    if (pend) { pend = false; goto L_0850; }
L_0880: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0888: { ++fl.t; set_vi(i15, 275u); pend = true; }
L_0890: { ++fl.t; }
    if (pend) { pend = false; goto L_0B70; }
L_0898: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_08A0: { ++fl.t; }
L_08A8: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_08B0: { ++fl.t; }
    if (pend) { pend = false; goto L_0B60; }
L_08B8: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i5, 0u + 128u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_08C0: { ++fl.t; set_vi(i6, 0u + 2u); }
L_08C8: { ++fl.t; set_vi(i7, 0u + 0u); }
L_08D0: { ++fl.t; set_vi(i8, i2 + 0u); }
L_08D8: { ++fl.t; set_vi(i9, i3 + 0u); }
L_08E0: { ++fl.t; set_vi(i10, 0u + i11); }
L_08E8: { ++fl.t; set_vi(i11, 0u + 0u); }
L_08F0: { ++fl.t; set_vi(i15, 288u); pend = true; }
L_08F8: { ++fl.t; }
    if (pend) { pend = false; goto L_0BB0; }
L_0900: { ++fl.t; set_vi(i10, i10 - 1u); }
L_0908: { ++fl.t; }
L_0910: { ++fl.t; pend = 0u != i10; }
L_0918: { ++fl.t; }
    if (pend) { pend = false; goto L_08F0; }
L_0920: { ++fl.t; set_vi(i8, i3 + 0u); }
L_0928: { ++fl.t; set_vi(i15, 295u); pend = true; }
L_0930: { ++fl.t; }
    if (pend) { pend = false; goto L_0B70; }
L_0938: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_0940: { ++fl.t; }
L_0948: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_0950: { ++fl.t; }
    if (pend) { pend = false; goto L_0B60; }
L_0958: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i5, 0u + 64u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0960: { ++fl.t; set_vi(i6, 0u + 1u); }
L_0968: { ++fl.t; set_vi(i7, 0u + 0u); }
L_0970: { ++fl.t; set_vi(i8, i3 + 0u); }
L_0978: { ++fl.t; set_vi(i9, i2 + 0u); }
L_0980: { ++fl.t; set_vi(i10, 0u + i11); }
L_0988: { ++fl.t; set_vi(i11, 0u + 0u); }
L_0990: { ++fl.t; set_vi(i15, 308u); pend = true; }
L_0998: { ++fl.t; }
    if (pend) { pend = false; goto L_0BB0; }
L_09A0: { ++fl.t; set_vi(i10, i10 - 1u); }
L_09A8: { ++fl.t; }
L_09B0: { ++fl.t; pend = 0u != i10; }
L_09B8: { ++fl.t; }
    if (pend) { pend = false; goto L_0990; }
L_09C0: { ++fl.t; set_vi(i8, i2 + 0u); }
L_09C8: { ++fl.t; set_vi(i15, 315u); pend = true; }
L_09D0: { ++fl.t; }
    if (pend) { pend = false; goto L_0B70; }
L_09D8: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_09E0: { ++fl.t; }
L_09E8: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_09F0: { ++fl.t; }
    if (pend) { pend = false; goto L_0B60; }
L_09F8: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i5, 0u + 512u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0A00: { ++fl.t; set_vi(i6, 0u + 8u); }
L_0A08: { ++fl.t; set_vi(i7, 0u + 1u); }
L_0A10: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0A18: { ++fl.t; set_vi(i9, i3 + 0u); }
L_0A20: { ++fl.t; set_vi(i10, 0u + i11); }
L_0A28: { ++fl.t; set_vi(i11, 0u + 0u); }
L_0A30: { ++fl.t; set_vi(i15, 328u); pend = true; }
L_0A38: { ++fl.t; }
    if (pend) { pend = false; goto L_0BB0; }
L_0A40: { ++fl.t; set_vi(i10, i10 - 1u); }
L_0A48: { ++fl.t; }
L_0A50: { ++fl.t; pend = 0u != i10; }
L_0A58: { ++fl.t; }
    if (pend) { pend = false; goto L_0A30; }
L_0A60: { ++fl.t; set_vi(i8, i3 + 0u); }
L_0A68: { ++fl.t; set_vi(i15, 335u); pend = true; }
L_0A70: { ++fl.t; }
    if (pend) { pend = false; goto L_0B70; }
L_0A78: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_0A80: { ++fl.t; }
L_0A88: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_0A90: { ++fl.t; }
    if (pend) { pend = false; goto L_0B60; }
L_0A98: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i5, 0u + 256u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0AA0: { ++fl.t; set_vi(i6, 0u + 4u); }
L_0AA8: { ++fl.t; set_vi(i7, 0u + 1u); }
L_0AB0: { ++fl.t; set_vi(i8, i3 + 0u); }
L_0AB8: { ++fl.t; set_vi(i9, i2 + 0u); }
L_0AC0: { ++fl.t; set_vi(i10, 0u + i11); }
L_0AC8: { ++fl.t; set_vi(i11, 0u + 0u); }
L_0AD0: { ++fl.t; set_vi(i15, 348u); pend = true; }
L_0AD8: { ++fl.t; }
    if (pend) { pend = false; goto L_0BB0; }
L_0AE0: { ++fl.t; set_vi(i10, i10 - 1u); }
L_0AE8: { ++fl.t; }
L_0AF0: { ++fl.t; pend = 0u != i10; }
L_0AF8: { ++fl.t; }
    if (pend) { pend = false; goto L_0AD0; }
L_0B00: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0B08: { ++fl.t; set_vi(i15, 355u); pend = true; }
L_0B10: { ++fl.t; }
    if (pend) { pend = false; goto L_0B70; }
L_0B18: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_0B20: { ++fl.t; }
L_0B28: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_0B30: { ++fl.t; }
    if (pend) { pend = false; goto L_0B60; }
L_0B38: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0B40: { ++fl.t; set_vi(i9, i4 + 0u); }
L_0B48: { ++fl.t; set_vi(i10, 0u + i11); }
L_0B50: { ++fl.t; set_vi(i15, 364u); pend = true; }
L_0B58: { ++fl.t; }
    if (pend) { pend = false; goto L_0EB8; }
L_0B60: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_0B68: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0B70: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 0u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_0B78: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 1u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0B80: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 2u); std::memcpy(&r.vf[23], q, 16); } n23 = vfix(vload(r.vf[23])); }
L_0B88: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[21], 16); set_vi(i9, i9 + 1u); } }
L_0B90: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[22], 16); set_vi(i9, i9 + 1u); } }
L_0B98: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[23], 16); set_vi(i9, i9 + 1u); } }
L_0BA0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0BA8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0BB0: { ++fl.t; { const std::uint8_t *q = qword(mem, i8); std::memcpy(&r.vf[17], q, 16); set_vi(i8, i8 + 1u); } n17 = vfix(vload(r.vf[17])); }
L_0BB8: { ++fl.t; { const std::uint8_t *q = qword(mem, i8); std::memcpy(&r.vf[18], q, 16); set_vi(i8, i8 + 1u); } n18 = vfix(vload(r.vf[18])); }
L_0BC0: { ++fl.t; { const std::uint8_t *q = qword(mem, i8); std::memcpy(&r.vf[19], q, 16); set_vi(i8, i8 + 1u); } n19 = vfix(vload(r.vf[19])); }
L_0BC8: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 0u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_0BD0: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 1u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0BD8: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 2u); std::memcpy(&r.vf[23], q, 16); } n23 = vfix(vload(r.vf[23])); }
L_0BE0: { ++fl.t; }
L_0BE8: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[17], r.vf[17].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0BF0: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[21], r.vf[21].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0BF8: { ++fl.t; }
L_0C00: { ++fl.t; }
L_0C08: { ++fl.t; }
L_0C10: { ++fl.t; set_vi(i1, fl.clip() & 0xFFFu); }
L_0C18: { ++fl.t; set_vi(i12, i1 & i5); }
L_0C20: { ++fl.t; }
L_0C28: { ++fl.t; pend = 0u == i12; }
L_0C30: { ++fl.t; }
    if (pend) { pend = false; goto L_0CA8; }
L_0C38: { ++fl.t; set_vi(i12, i1 & i6); }
L_0C40: { ++fl.t; }
L_0C48: { ++fl.t; pend = 0u == i12; }
L_0C50: { ++fl.t; }
    if (pend) { pend = false; goto L_0C68; }
L_0C58: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0C60: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0C68: { ++fl.t; set_vi(i12, 399u); pend = true; }
L_0C70: { ++fl.t; }
    if (pend) { pend = false; goto L_0D50; }
L_0C78: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[25], 16); set_vi(i9, i9 + 1u); } }
L_0C80: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[26], 16); set_vi(i9, i9 + 1u); } }
L_0C88: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[27], 16); set_vi(i9, i9 + 1u); } }
L_0C90: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0C98: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0CA0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0CA8: { ++fl.t; set_vi(i12, i1 & i6); }
L_0CB0: { ++fl.t; }
L_0CB8: { ++fl.t; pend = 0u == i12; }
L_0CC0: { ++fl.t; }
    if (pend) { pend = false; goto L_0D20; }
L_0CC8: { ++fl.t; set_vi(i12, 411u); pend = true; }
L_0CD0: { ++fl.t; }
    if (pend) { pend = false; goto L_0D50; }
L_0CD8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[17], 16); set_vi(i9, i9 + 1u); } }
L_0CE0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[18], 16); set_vi(i9, i9 + 1u); } }
L_0CE8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[19], 16); set_vi(i9, i9 + 1u); } }
L_0CF0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[25], 16); set_vi(i9, i9 + 1u); } }
L_0CF8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[26], 16); set_vi(i9, i9 + 1u); } }
L_0D00: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[27], 16); set_vi(i9, i9 + 1u); } }
L_0D08: { ++fl.t; set_vi(i11, i11 + 2u); }
L_0D10: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0D18: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0D20: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[17], 16); set_vi(i9, i9 + 1u); } }
L_0D28: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[18], 16); set_vi(i9, i9 + 1u); } }
L_0D30: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[19], 16); set_vi(i9, i9 + 1u); } }
L_0D38: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0D40: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0D48: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0D50: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n30[0])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n25 = vsel(n25, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0D58: { ++fl.t; const v4u uv = vmuln(n21, vsplat(n30[0])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n26 = vsel(n26, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0D60: { ++fl.t; }
L_0D68: { ++fl.t; }
L_0D70: { ++fl.t; const v4u uv = vsubn(n17, vsplat(n25[3])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0D78: { ++fl.t; const v4u uv = vsubn(n21, vsplat(n26[3])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0D80: { ++fl.t; set_vi(i1, 0u + i7); }
L_0D88: { ++fl.t; }
L_0D90: { ++fl.t; pend = 0u == i1; }
L_0D98: { ++fl.t; }
    if (pend) { pend = false; goto L_0DD0; }
L_0DA0: { ++fl.t; { const Reg128 m = r.vf[25]; r.vf[25].w[0] = m.w[1]; r.vf[25].w[1] = m.w[2]; r.vf[25].w[2] = m.w[3]; r.vf[25].w[3] = m.w[0]; } n25 = vfix(vload(r.vf[25])); }
L_0DA8: { ++fl.t; { const Reg128 m = r.vf[26]; r.vf[26].w[0] = m.w[1]; r.vf[26].w[1] = m.w[2]; r.vf[26].w[2] = m.w[3]; r.vf[26].w[3] = m.w[0]; } n26 = vfix(vload(r.vf[26])); }
L_0DB0: { ++fl.t; set_vi(i1, i1 - 1u); }
L_0DB8: { ++fl.t; }
L_0DC0: { ++fl.t; pend = true; }
L_0DC8: { ++fl.t; }
    if (pend) { pend = false; goto L_0D90; }
L_0DD0: { ++fl.t; const v4u uv = vsubn(n26, n25); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0DD8: { ++fl.t; }
L_0DE0: { ++fl.t; }
L_0DE8: { ++fl.t; }
L_0DF0: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[25].w[0], r.vf[27].w[0]); fl.end_q(r, qb, 7u); } }
L_0DF8: { ++fl.t; }
L_0E00: { ++fl.t; }
L_0E08: { ++fl.t; }
L_0E10: { ++fl.t; const v4u uv = vsubn(n21, n17); vstore(r.vf[25], uv); n25 = uv; }
L_0E18: { ++fl.t; const v4u uv = vsubn(n22, n18); vstore(r.vf[26], uv); n26 = uv; }
L_0E20: { ++fl.t; const v4u uv = vsubn(n23, n19); vstore(r.vf[27], uv); n27 = uv; }
L_0E28: { ++fl.t; fl.flush_q(r); const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vfix(vsplat(r.q))); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0E30: { ++fl.t; }
L_0E38: { ++fl.t; }
L_0E40: { ++fl.t; }
L_0E48: { ++fl.t; const v4u uv = vabs(vload(r.vf[29])); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n29 = vfix(vload(r.vf[29])); }
L_0E50: { ++fl.t; }
L_0E58: { ++fl.t; }
L_0E60: { ++fl.t; }
L_0E68: { ++fl.t; const v4u uv = vmuln(n25, vsplat(n29[0])); vstore(r.vf[25], uv); n25 = uv; }
L_0E70: { ++fl.t; const v4u uv = vmuln(n26, vsplat(n29[0])); vstore(r.vf[26], uv); n26 = uv; }
L_0E78: { ++fl.t; const v4u uv = vmuln(n27, vsplat(n29[0])); vstore(r.vf[27], uv); n27 = uv; }
L_0E80: { ++fl.t; }
L_0E88: { ++fl.t; const v4u uv = vaddn(n25, n17); vstore(r.vf[25], uv); n25 = uv; }
L_0E90: { ++fl.t; const v4u uv = vaddn(n26, n18); vstore(r.vf[26], uv); n26 = uv; }
L_0E98: { ++fl.t; const v4u uv = vaddn(n27, n19); vstore(r.vf[27], uv); n27 = uv; }
L_0EA0: { ++fl.t; }
L_0EA8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i12) * 8u) & 16383u; pendj = true; }
L_0EB0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0EB8: { ++fl.t; set_vi(i1, i14 + 0u); }
L_0EC0: { ++fl.t; set_vi(i2, i8 + 0u); }
L_0EC8: { ++fl.t; set_vi(i3, i9 + 1u); }
L_0ED0: { ++fl.t; set_vi(i11, 0u + 32767u); }
L_0ED8: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0EE0: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); const std::uint32_t v = i11; std::memcpy(q + 0, &v, 4); } }
L_0EE8: { ++fl.t; }
L_0EF0: { ++fl.t; }
L_0EF8: { ++fl.t; }
L_0F00: { ++fl.t; vu::kick(1, i9); }
L_0F08: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 1006u) + 0, 2); set_vi(i6, v); } }
L_0F10: { ++fl.t; set_vi(i11, i10 + 32767u); }
L_0F18: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0F20: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); const std::uint32_t v = i11; std::memcpy(q + 0, &v, 4); } }
L_0F28: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 0u); std::memcpy(&r.vf[20], q, 16); } n20 = vfix(vload(r.vf[20])); }
L_0F30: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 1u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_0F38: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 2u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0F40: { ++fl.t; }
L_0F48: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n20[0])); vstore(r.acc, uv); nacc = uv; }
L_0F50: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n20[1])); vstore(r.acc, uv); nacc = uv; }
L_0F58: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n20[2])); vstore(r.acc, uv); nacc = uv; }
L_0F60: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n20[3])); vstore(r.vf[27], uv); n27 = uv; }
L_0F68: { ++fl.t; }
L_0F70: { ++fl.t; }
L_0F78: { ++fl.t; }
L_0F80: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[27].w[3]); fl.end_q(r, qb, 7u); } }
L_0F88: { ++fl.t; }
L_0F90: { ++fl.t; }
L_0F98: { ++fl.t; }
L_0FA0: { ++fl.t; }
L_0FA8: { ++fl.t; }
L_0FB0: { ++fl.t; }
L_0FB8: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n27, vfix(vsplat(r.q))); vstore(r.vf[27], uv); n27 = uv; }
L_0FC0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n22, vfix(vsplat(r.q))); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FC8: { ++fl.t; const v4u uv = vftoi(vload(r.vf[21]), 0); vstore(r.vf[28], uv); }
L_0FD0: { ++fl.t; set_vi(i14, 508u); pend = true; }
L_0FD8: { ++fl.t; const v4u uv = vftoi(vload(r.vf[27]), 4); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
    if (pend) { pend = false; goto L_0640; }
L_0FE0: { ++fl.t; set_vi(i10, i10 + 4294967295u); }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 0u); std::memcpy(q, &r.vf[29], 16); } }
L_0FF0: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 1u); std::memcpy(q, &r.vf[28], 16); } }
L_0FF8: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 2u); std::memcpy(q + 0, &r.vf[27].w[0], 4); std::memcpy(q + 4, &r.vf[27].w[1], 4); std::memcpy(q + 8, &r.vf[27].w[2], 4); } }
L_1000: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 2u); const std::uint32_t v = i12; std::memcpy(q + 12, &v, 4); } }
L_1008: { ++fl.t; set_vi(i3, i3 + 3u); }
L_1010: { ++fl.t; set_vi(i2, i2 + 3u); }
L_1018: { ++fl.t; pend = 0u != i10; }
L_1020: { ++fl.t; }
    if (pend) { pend = false; goto L_0F28; }
L_1028: { ++fl.t; vu::kick(1, i9); }
L_1030: { ++fl.t; }
L_1038: { ++fl.t; set_vi(i14, i1 + 0u); }
L_1040: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1048: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, 4176u);
    return;
dispatch:
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_A45ABFC3DFE5B141(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n7 = vfix(vload(r.vf[7]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n17 = vfix(vload(r.vf[17]));
    v4u n18 = vfix(vload(r.vf[18]));
    v4u n19 = vfix(vload(r.vf[19]));
    v4u n20 = vfix(vload(r.vf[20]));
    v4u n21 = vfix(vload(r.vf[21]));
    v4u n22 = vfix(vload(r.vf[22]));
    v4u n23 = vfix(vload(r.vf[23]));
    v4u n25 = vfix(vload(r.vf[25]));
    v4u n26 = vfix(vload(r.vf[26]));
    v4u n27 = vfix(vload(r.vf[27]));
    v4u n29 = vfix(vload(r.vf[29]));
    v4u n30 = vfix(vload(r.vf[30]));
    v4u nacc = vfix(vload(r.acc));
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
    goto L_0798;
L_04F8: { ++fl.t; set_vi(i12, 0u + 4080u); }
L_0500: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_0508: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, 1296u);
    return;
L_0798: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_07A0: { ++fl.t; }
L_07A8: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_07B0: { ++fl.t; }
    if (pend) { pend = false; goto L_0920; }
L_07B8: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i5, 0u + 512u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_07C0: { ++fl.t; set_vi(i6, 0u + 8u); }
L_07C8: { ++fl.t; set_vi(i7, 0u + 1u); }
L_07D0: { ++fl.t; set_vi(i8, i2 + 0u); }
L_07D8: { ++fl.t; set_vi(i9, i3 + 0u); }
L_07E0: { ++fl.t; set_vi(i10, 0u + i11); }
L_07E8: { ++fl.t; set_vi(i11, 0u + 0u); }
L_07F0: { ++fl.t; set_vi(i15, 256u); pend = true; }
L_07F8: { ++fl.t; }
    if (pend) { pend = false; goto L_0970; }
L_0800: { ++fl.t; set_vi(i10, i10 - 1u); }
L_0808: { ++fl.t; }
L_0810: { ++fl.t; pend = 0u != i10; }
L_0818: { ++fl.t; }
    if (pend) { pend = false; goto L_07F0; }
L_0820: { ++fl.t; set_vi(i8, i3 + 0u); }
L_0828: { ++fl.t; set_vi(i15, 263u); pend = true; }
L_0830: { ++fl.t; }
    if (pend) { pend = false; goto L_0930; }
L_0838: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_0840: { ++fl.t; }
L_0848: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_0850: { ++fl.t; }
    if (pend) { pend = false; goto L_0920; }
L_0858: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i5, 0u + 256u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0860: { ++fl.t; set_vi(i6, 0u + 4u); }
L_0868: { ++fl.t; set_vi(i7, 0u + 1u); }
L_0870: { ++fl.t; set_vi(i8, i3 + 0u); }
L_0878: { ++fl.t; set_vi(i9, i2 + 0u); }
L_0880: { ++fl.t; set_vi(i10, 0u + i11); }
L_0888: { ++fl.t; set_vi(i11, 0u + 0u); }
L_0890: { ++fl.t; set_vi(i15, 276u); pend = true; }
L_0898: { ++fl.t; }
    if (pend) { pend = false; goto L_0970; }
L_08A0: { ++fl.t; set_vi(i10, i10 - 1u); }
L_08A8: { ++fl.t; }
L_08B0: { ++fl.t; pend = 0u != i10; }
L_08B8: { ++fl.t; }
    if (pend) { pend = false; goto L_0890; }
L_08C0: { ++fl.t; set_vi(i8, i2 + 0u); }
L_08C8: { ++fl.t; set_vi(i15, 283u); pend = true; }
L_08D0: { ++fl.t; }
    if (pend) { pend = false; goto L_0930; }
L_08D8: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_08E0: { ++fl.t; }
L_08E8: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_08F0: { ++fl.t; }
    if (pend) { pend = false; goto L_0920; }
L_08F8: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0900: { ++fl.t; set_vi(i9, i4 + 0u); }
L_0908: { ++fl.t; set_vi(i10, 0u + i11); }
L_0910: { ++fl.t; set_vi(i15, 292u); pend = true; }
L_0918: { ++fl.t; }
    if (pend) { pend = false; goto L_0C78; }
L_0920: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_0928: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0930: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 0u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_0938: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 1u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0940: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 2u); std::memcpy(&r.vf[23], q, 16); } n23 = vfix(vload(r.vf[23])); }
L_0948: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[21], 16); set_vi(i9, i9 + 1u); } }
L_0950: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[22], 16); set_vi(i9, i9 + 1u); } }
L_0958: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[23], 16); set_vi(i9, i9 + 1u); } }
L_0960: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0968: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0970: { ++fl.t; { const std::uint8_t *q = qword(mem, i8); std::memcpy(&r.vf[17], q, 16); set_vi(i8, i8 + 1u); } n17 = vfix(vload(r.vf[17])); }
L_0978: { ++fl.t; { const std::uint8_t *q = qword(mem, i8); std::memcpy(&r.vf[18], q, 16); set_vi(i8, i8 + 1u); } n18 = vfix(vload(r.vf[18])); }
L_0980: { ++fl.t; { const std::uint8_t *q = qword(mem, i8); std::memcpy(&r.vf[19], q, 16); set_vi(i8, i8 + 1u); } n19 = vfix(vload(r.vf[19])); }
L_0988: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 0u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_0990: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 1u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0998: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 2u); std::memcpy(&r.vf[23], q, 16); } n23 = vfix(vload(r.vf[23])); }
L_09A0: { ++fl.t; }
L_09A8: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[17], r.vf[17].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_09B0: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[21], r.vf[21].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_09B8: { ++fl.t; }
L_09C0: { ++fl.t; }
L_09C8: { ++fl.t; }
L_09D0: { ++fl.t; set_vi(i1, fl.clip() & 0xFFFu); }
L_09D8: { ++fl.t; set_vi(i12, i1 & i5); }
L_09E0: { ++fl.t; }
L_09E8: { ++fl.t; pend = 0u == i12; }
L_09F0: { ++fl.t; }
    if (pend) { pend = false; goto L_0A68; }
L_09F8: { ++fl.t; set_vi(i12, i1 & i6); }
L_0A00: { ++fl.t; }
L_0A08: { ++fl.t; pend = 0u == i12; }
L_0A10: { ++fl.t; }
    if (pend) { pend = false; goto L_0A28; }
L_0A18: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0A20: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0A28: { ++fl.t; set_vi(i12, 327u); pend = true; }
L_0A30: { ++fl.t; }
    if (pend) { pend = false; goto L_0B10; }
L_0A38: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[25], 16); set_vi(i9, i9 + 1u); } }
L_0A40: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[26], 16); set_vi(i9, i9 + 1u); } }
L_0A48: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[27], 16); set_vi(i9, i9 + 1u); } }
L_0A50: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0A58: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0A60: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0A68: { ++fl.t; set_vi(i12, i1 & i6); }
L_0A70: { ++fl.t; }
L_0A78: { ++fl.t; pend = 0u == i12; }
L_0A80: { ++fl.t; }
    if (pend) { pend = false; goto L_0AE0; }
L_0A88: { ++fl.t; set_vi(i12, 339u); pend = true; }
L_0A90: { ++fl.t; }
    if (pend) { pend = false; goto L_0B10; }
L_0A98: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[17], 16); set_vi(i9, i9 + 1u); } }
L_0AA0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[18], 16); set_vi(i9, i9 + 1u); } }
L_0AA8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[19], 16); set_vi(i9, i9 + 1u); } }
L_0AB0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[25], 16); set_vi(i9, i9 + 1u); } }
L_0AB8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[26], 16); set_vi(i9, i9 + 1u); } }
L_0AC0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[27], 16); set_vi(i9, i9 + 1u); } }
L_0AC8: { ++fl.t; set_vi(i11, i11 + 2u); }
L_0AD0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0AD8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0AE0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[17], 16); set_vi(i9, i9 + 1u); } }
L_0AE8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[18], 16); set_vi(i9, i9 + 1u); } }
L_0AF0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[19], 16); set_vi(i9, i9 + 1u); } }
L_0AF8: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0B00: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B08: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0B10: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n30[0])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n25 = vsel(n25, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0B18: { ++fl.t; const v4u uv = vmuln(n21, vsplat(n30[0])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n26 = vsel(n26, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0B20: { ++fl.t; }
L_0B28: { ++fl.t; }
L_0B30: { ++fl.t; const v4u uv = vsubn(n17, vsplat(n25[3])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0B38: { ++fl.t; const v4u uv = vsubn(n21, vsplat(n26[3])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0B40: { ++fl.t; set_vi(i1, 0u + i7); }
L_0B48: { ++fl.t; }
L_0B50: { ++fl.t; pend = 0u == i1; }
L_0B58: { ++fl.t; }
    if (pend) { pend = false; goto L_0B90; }
L_0B60: { ++fl.t; { const Reg128 m = r.vf[25]; r.vf[25].w[0] = m.w[1]; r.vf[25].w[1] = m.w[2]; r.vf[25].w[2] = m.w[3]; r.vf[25].w[3] = m.w[0]; } n25 = vfix(vload(r.vf[25])); }
L_0B68: { ++fl.t; { const Reg128 m = r.vf[26]; r.vf[26].w[0] = m.w[1]; r.vf[26].w[1] = m.w[2]; r.vf[26].w[2] = m.w[3]; r.vf[26].w[3] = m.w[0]; } n26 = vfix(vload(r.vf[26])); }
L_0B70: { ++fl.t; set_vi(i1, i1 - 1u); }
L_0B78: { ++fl.t; }
L_0B80: { ++fl.t; pend = true; }
L_0B88: { ++fl.t; }
    if (pend) { pend = false; goto L_0B50; }
L_0B90: { ++fl.t; const v4u uv = vsubn(n26, n25); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0B98: { ++fl.t; }
L_0BA0: { ++fl.t; }
L_0BA8: { ++fl.t; }
L_0BB0: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[25].w[0], r.vf[27].w[0]); fl.end_q(r, qb, 7u); } }
L_0BB8: { ++fl.t; }
L_0BC0: { ++fl.t; }
L_0BC8: { ++fl.t; }
L_0BD0: { ++fl.t; const v4u uv = vsubn(n21, n17); vstore(r.vf[25], uv); n25 = uv; }
L_0BD8: { ++fl.t; const v4u uv = vsubn(n22, n18); vstore(r.vf[26], uv); n26 = uv; }
L_0BE0: { ++fl.t; const v4u uv = vsubn(n23, n19); vstore(r.vf[27], uv); n27 = uv; }
L_0BE8: { ++fl.t; fl.flush_q(r); const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vfix(vsplat(r.q))); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0BF0: { ++fl.t; }
L_0BF8: { ++fl.t; }
L_0C00: { ++fl.t; }
L_0C08: { ++fl.t; const v4u uv = vabs(vload(r.vf[29])); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n29 = vfix(vload(r.vf[29])); }
L_0C10: { ++fl.t; }
L_0C18: { ++fl.t; }
L_0C20: { ++fl.t; }
L_0C28: { ++fl.t; const v4u uv = vmuln(n25, vsplat(n29[0])); vstore(r.vf[25], uv); n25 = uv; }
L_0C30: { ++fl.t; const v4u uv = vmuln(n26, vsplat(n29[0])); vstore(r.vf[26], uv); n26 = uv; }
L_0C38: { ++fl.t; const v4u uv = vmuln(n27, vsplat(n29[0])); vstore(r.vf[27], uv); n27 = uv; }
L_0C40: { ++fl.t; }
L_0C48: { ++fl.t; const v4u uv = vaddn(n25, n17); vstore(r.vf[25], uv); n25 = uv; }
L_0C50: { ++fl.t; const v4u uv = vaddn(n26, n18); vstore(r.vf[26], uv); n26 = uv; }
L_0C58: { ++fl.t; const v4u uv = vaddn(n27, n19); vstore(r.vf[27], uv); n27 = uv; }
L_0C60: { ++fl.t; }
L_0C68: { ++fl.t; jpc = (static_cast<std::uint32_t>(i12) * 8u) & 16383u; pendj = true; }
L_0C70: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0C78: { ++fl.t; set_vi(i1, i14 + 0u); }
L_0C80: { ++fl.t; set_vi(i2, i8 + 0u); }
L_0C88: { ++fl.t; set_vi(i3, i9 + 1u); }
L_0C90: { ++fl.t; set_vi(i11, 0u + 32767u); }
L_0C98: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0CA0: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); const std::uint32_t v = i11; std::memcpy(q + 0, &v, 4); } }
L_0CA8: { ++fl.t; }
L_0CB0: { ++fl.t; }
L_0CB8: { ++fl.t; }
L_0CC0: { ++fl.t; vu::kick(1, i9); }
L_0CC8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 1006u) + 0, 2); set_vi(i6, v); } }
L_0CD0: { ++fl.t; set_vi(i11, i10 + 32767u); }
L_0CD8: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0CE0: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); const std::uint32_t v = i11; std::memcpy(q + 0, &v, 4); } }
L_0CE8: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 0u); std::memcpy(&r.vf[20], q, 16); } n20 = vfix(vload(r.vf[20])); }
L_0CF0: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 1u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_0CF8: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 2u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0D00: { ++fl.t; }
L_0D08: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n20[0])); vstore(r.acc, uv); nacc = uv; }
L_0D10: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n20[1])); vstore(r.acc, uv); nacc = uv; }
L_0D18: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n20[2])); vstore(r.acc, uv); nacc = uv; }
L_0D20: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n20[3])); vstore(r.vf[27], uv); n27 = uv; }
L_0D28: { ++fl.t; }
L_0D30: { ++fl.t; }
L_0D38: { ++fl.t; }
L_0D40: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[27].w[3]); fl.end_q(r, qb, 7u); } }
L_0D48: { ++fl.t; }
L_0D50: { ++fl.t; }
L_0D58: { ++fl.t; }
L_0D60: { ++fl.t; }
L_0D68: { ++fl.t; }
L_0D70: { ++fl.t; }
L_0D78: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n27, vfix(vsplat(r.q))); vstore(r.vf[27], uv); n27 = uv; }
L_0D80: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n22, vfix(vsplat(r.q))); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0D88: { ++fl.t; const v4u uv = vftoi(vload(r.vf[21]), 0); vstore(r.vf[28], uv); }
L_0D90: { ++fl.t; set_vi(i14, 436u); pend = true; }
L_0D98: { ++fl.t; const v4u uv = vftoi(vload(r.vf[27]), 4); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
    if (pend) { pend = false; goto L_04F8; }
L_0DA0: { ++fl.t; set_vi(i10, i10 + 4294967295u); }
L_0DA8: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 0u); std::memcpy(q, &r.vf[29], 16); } }
L_0DB0: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 1u); std::memcpy(q, &r.vf[28], 16); } }
L_0DB8: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 2u); std::memcpy(q + 0, &r.vf[27].w[0], 4); std::memcpy(q + 4, &r.vf[27].w[1], 4); std::memcpy(q + 8, &r.vf[27].w[2], 4); } }
L_0DC0: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 2u); const std::uint32_t v = i12; std::memcpy(q + 12, &v, 4); } }
L_0DC8: { ++fl.t; set_vi(i3, i3 + 3u); }
L_0DD0: { ++fl.t; set_vi(i2, i2 + 3u); }
L_0DD8: { ++fl.t; pend = 0u != i10; }
L_0DE0: { ++fl.t; }
    if (pend) { pend = false; goto L_0CE8; }
L_0DE8: { ++fl.t; vu::kick(1, i9); }
L_0DF0: { ++fl.t; }
L_0DF8: { ++fl.t; set_vi(i14, i1 + 0u); }
L_0E00: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E08: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, 3600u);
    return;
dispatch:
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_A47855E712FC4A52(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    std::uint16_t i13 = r.vi[13];
    goto L_1D88;
L_0000: { ++fl.t; set_vi(i13, 0u + 1024u); }
L_0008: { ++fl.t; }
L_0010: { ++fl.t; ending = true; }
L_0018: { ++fl.t; }
    if (ending) { r.vi[13] = i13; r.tpc = 32u; return; }
    r.vi[13] = i13; vu::interpret(1, 32u);
    return;
L_1D88: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1D90: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1D98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1DA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1DA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1DB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1DB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1DC0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1DC8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1DD0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1DD8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1DE0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1DE8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1DF0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1DF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1E00: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1E08: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1E10: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1E18: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1E20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1E28: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1E30: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1E38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1E40: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1E48: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1E50: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1E58: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1E60: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1E68: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1E70: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1E78: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1E80: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1E88: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1E90: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1E98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1EA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1EA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1EB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1EB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1EC0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1EC8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1ED0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1ED8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1EE0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1EE8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1EF0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1EF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1F00: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1F08: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1F10: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1F18: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1F20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1F28: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1F30: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1F38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1F40: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1F48: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1F50: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1F58: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1F60: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1F68: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1F70: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1F78: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1F80: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1F88: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1F90: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1F98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1FB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1FB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1FC0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1FC8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1FD0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1FD8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1FE0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1FE8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1FF0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_1FF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2000: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2008: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2010: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2018: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2020: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2028: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2030: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2038: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2040: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2048: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2050: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2058: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2060: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2068: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2070: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2078: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2080: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2088: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2090: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2098: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_20A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_20A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_20B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_20B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_20C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_20C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_20D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_20D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_20E0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_20E8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_20F0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_20F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2100: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2108: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2110: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2118: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2120: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2128: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2130: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2138: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2140: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2148: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2150: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2158: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2160: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2168: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2170: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2178: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2188: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2190: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2198: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_21A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_21A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_21B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_21B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_21C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_21C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_21D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_21D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_21E0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_21E8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_21F0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_21F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2200: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2208: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2210: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2218: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2220: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2228: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2230: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2238: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2240: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2248: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2250: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2258: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2260: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2268: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2270: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2278: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2280: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2288: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2290: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2298: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_22A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_22A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_22B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_22B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_22C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_22C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_22D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_22D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_22E0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_22E8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_22F0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_22F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2300: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2308: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2310: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2318: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2320: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2328: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2330: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2338: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2340: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2348: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2350: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2358: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2360: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2368: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2370: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2378: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2380: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2388: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2390: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2398: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_23A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_23A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_23B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_23B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_23C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_23C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_23D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_23D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_23E0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_23E8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_23F0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_23F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2400: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2408: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2410: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2418: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2420: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2428: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2430: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2438: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2440: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2448: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2450: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2458: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2460: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2468: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2470: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2478: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2480: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2488: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2490: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2498: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_24A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_24A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_24B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_24B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_24C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_24C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_24D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_24D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_24E0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_24E8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_24F0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_24F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2500: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2508: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2510: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2518: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2520: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2528: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2530: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2538: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2540: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2548: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2550: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2558: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2560: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2568: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2570: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2578: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2580: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2588: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2590: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2598: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_25A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_25A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_25B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_25B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_25C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_25C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_25D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_25D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_25E0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_25E8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_25F0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_25F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2600: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2608: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2610: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2618: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2620: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2628: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2630: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2638: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2640: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2648: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2650: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2658: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2660: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2668: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2670: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2678: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2680: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2688: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2690: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2698: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_26A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_26A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_26B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_26B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_26C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_26C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_26D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_26D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_26E0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_26E8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_26F0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_26F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2700: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2708: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2710: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2718: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2720: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2728: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2730: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2738: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2740: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2748: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2750: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2758: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2760: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2768: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2770: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2778: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2780: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2788: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2790: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2798: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_27A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_27A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_27B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_27B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_27C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_27C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_27D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_27D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_27E0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_27E8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_27F0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_27F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2800: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2808: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2810: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2818: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2820: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2828: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2830: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2838: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2840: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2848: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2850: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2858: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2860: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2868: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2870: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2878: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2880: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2888: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2890: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2898: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_28A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_28A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_28B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_28B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_28C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_28C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_28D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_28D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_28E0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_28E8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_28F0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_28F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2900: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2908: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2910: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2918: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2920: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2928: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2930: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2938: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2940: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2948: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2950: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2958: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2960: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2968: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2970: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2978: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2980: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2988: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2990: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2998: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_29A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_29A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_29B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_29B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_29C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_29C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_29D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_29D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_29E0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_29E8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_29F0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_29F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2A00: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2A08: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2A10: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2A18: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2A20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2A28: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2A30: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2A38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2A40: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2A48: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2A50: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2A58: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2A60: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2A68: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2A70: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2A78: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2A80: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2A88: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2A90: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2A98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2AA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2AB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2AB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2AC0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2AC8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2AD0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2AD8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2AE0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2AE8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2AF0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2AF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2B00: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2B08: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2B10: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2B18: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2B20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2B28: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2B30: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2B38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2B40: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2B48: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2B50: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2B58: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2B60: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2B68: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2B70: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2B78: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2B80: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2B88: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2B90: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2B98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2BA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2BA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2BB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2BB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2BC0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2BC8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2BD0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2BD8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2BE0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2BE8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2BF0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2BF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2C00: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2C08: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2C10: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2C18: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2C20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2C28: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2C30: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2C38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2C40: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2C48: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2C50: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2C58: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2C60: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2C68: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2C70: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2C78: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2C80: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2C88: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2C90: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2C98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2CA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2CA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2CB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2CB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2CC0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2CC8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2CD0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2CD8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2CE0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2CE8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2CF0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2CF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2D00: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2D08: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2D10: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2D18: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2D20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2D28: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2D30: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2D38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2D40: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2D48: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2D50: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2D58: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2D60: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2D68: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2D70: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2D78: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2D80: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2D88: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2D90: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2D98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2DA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2DA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2DB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2DB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2DC0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2DC8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2DD0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2DD8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2DE0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2DE8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2DF0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2DF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2E00: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2E08: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2E10: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2E18: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2E20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2E28: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2E30: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2E38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2E40: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2E48: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2E50: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2E58: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2E60: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2E68: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2E70: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2E78: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2E80: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2E88: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2E90: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2E98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2EA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2EA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2EB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2EB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2EC0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2EC8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2ED0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2ED8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2EE0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2EE8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2EF0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2EF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2F00: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2F08: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2F10: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2F18: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2F20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2F28: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2F30: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2F38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2F40: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2F48: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2F50: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2F58: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2F60: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2F68: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2F70: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2F78: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2F80: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2F88: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2F90: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2F98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2FA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2FA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2FB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2FB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2FC0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2FC8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2FD0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2FD8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2FE0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2FE8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2FF0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_2FF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3000: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3008: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3010: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3018: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3020: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3028: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3030: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3038: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3040: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3048: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3050: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3058: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3060: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3068: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3070: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3078: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3080: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3088: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3090: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3098: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_30A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_30A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_30B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_30B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_30C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_30C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_30D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_30D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_30E0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_30E8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_30F0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_30F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3100: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3108: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3110: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3118: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3120: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3128: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3130: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3138: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3140: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3148: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3150: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3158: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3160: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3168: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3170: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3178: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3180: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3188: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3190: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3198: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_31A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_31A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_31B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_31B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_31C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_31C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_31D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_31D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_31E0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_31E8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_31F0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_31F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3200: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3208: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3210: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3218: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3220: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3228: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3230: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3238: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3240: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3248: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3250: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3258: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3260: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3268: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3270: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3278: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3280: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3288: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3290: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3298: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_32A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_32A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_32B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_32B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_32C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_32C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_32D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_32D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_32E0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_32E8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_32F0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_32F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3300: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3308: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3310: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3318: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3320: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3328: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3330: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3338: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3340: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3348: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3350: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3358: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3360: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3368: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3370: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3378: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3380: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3388: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3390: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3398: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_33A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_33A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_33B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_33B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_33C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_33C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_33D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_33D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_33E0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_33E8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_33F0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_33F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3400: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3408: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3410: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3418: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3420: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3428: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3430: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3438: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3440: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3448: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3450: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3458: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3460: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3468: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3470: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3478: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3480: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3488: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3490: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3498: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_34A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_34A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_34B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_34B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_34C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_34C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_34D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_34D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_34E0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_34E8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_34F0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_34F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3500: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3508: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3510: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3518: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3520: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3528: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3530: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3538: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3540: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3548: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3550: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3558: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3560: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3568: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3570: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3578: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3580: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3588: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3590: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3598: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_35A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_35A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_35B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_35B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_35C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_35C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_35D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_35D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_35E0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_35E8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_35F0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_35F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3600: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3608: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3610: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3618: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3620: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3628: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3630: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3638: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3640: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3648: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3650: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3658: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3660: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3668: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3670: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3678: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3680: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3688: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3690: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3698: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_36A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_36A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_36B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_36B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_36C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_36C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_36D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_36D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_36E0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_36E8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_36F0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_36F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3700: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3708: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3710: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3718: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3720: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3728: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3730: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3738: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3740: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3748: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3750: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3758: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3760: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3768: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3770: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3778: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3780: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3788: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3790: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3798: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_37A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_37A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_37B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_37B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_37C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_37C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_37D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_37D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_37E0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_37E8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_37F0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_37F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3800: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3808: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3810: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3818: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3820: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3828: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3830: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3838: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3840: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3848: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3850: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3858: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3860: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3868: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3870: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3878: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3880: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3888: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3890: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3898: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_38A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_38A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_38B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_38B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_38C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_38C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_38D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_38D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_38E0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_38E8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_38F0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_38F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3900: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3908: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3910: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3918: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3920: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3928: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3930: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3938: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3940: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3948: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3950: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3958: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3960: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3968: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3970: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3978: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3980: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3988: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3990: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3998: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_39A0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_39A8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_39B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_39B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_39C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_39C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_39D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_39D8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_39E0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_39E8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_39F0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_39F8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3A00: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3A08: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3A10: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3A18: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3A20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3A28: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3A30: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3A38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3A40: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3A48: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3A50: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3A58: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3A60: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3A68: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3A70: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3A78: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3A80: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3A88: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3A90: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3A98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3AA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3AA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3AB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3AB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3AC0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3AC8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3AD0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3AD8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3AE0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3AE8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3AF0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3AF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3B00: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3B08: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3B10: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3B18: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3B20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3B28: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3B30: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3B38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3B40: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3B48: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3B50: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3B58: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3B60: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3B68: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3B70: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3B78: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3B80: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3B88: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3B90: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3B98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3BA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3BA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3BB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3BB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3BC0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3BC8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3BD0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3BD8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3BE0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3BE8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3BF0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3BF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3C00: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3C08: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3C10: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3C18: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3C20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3C28: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3C30: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3C38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3C40: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3C48: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3C50: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3C58: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3C60: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3C68: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3C70: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3C78: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3C80: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3C88: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3C90: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3C98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3CA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3CA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3CB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3CB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3CC0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3CC8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3CD0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3CD8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3CE0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3CE8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3CF0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3CF8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3D00: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3D08: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3D10: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3D18: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3D20: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3D28: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3D30: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3D38: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3D40: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3D48: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3D50: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3D58: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3D60: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3D68: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3D70: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3D78: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3D80: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3D88: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3D90: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3D98: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3DA0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3DA8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3DB0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3DB8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3DC0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3DC8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3DD0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3DD8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3DE0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3DE8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
L_3DF0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); } }
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
    r.vi[13] = i13; vu::interpret(1, jpc);
    return;
}

void vu1_A493FEBA55230841(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    goto L_3F80;
L_0000: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); std::memcpy(&r.vf[1], q, 16); } }
L_0008: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 1u); std::memcpy(&r.vf[2], q, 16); } }
L_0010: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 2u); std::memcpy(&r.vf[3], q, 16); } }
L_0018: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 3u); std::memcpy(&r.vf[4], q, 16); } }
L_0020: { ++fl.t; ending = true; }
L_0028: { ++fl.t; }
    if (ending) { r.tpc = 48u; return; }
    vu::interpret(1, 48u);
    return;
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
    vu::interpret(1, jpc);
    return;
}

void vu1_A60AC40381E62238(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n1 = vfix(vload(r.vf[1]));
    v4u n2 = vfix(vload(r.vf[2]));
    v4u n3 = vfix(vload(r.vf[3]));
    v4u n4 = vfix(vload(r.vf[4]));
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n7 = vfix(vload(r.vf[7]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n12 = vfix(vload(r.vf[12]));
    v4u n13 = vfix(vload(r.vf[13]));
    v4u n14 = vfix(vload(r.vf[14]));
    v4u n22 = vfix(vload(r.vf[22]));
    v4u n24 = vfix(vload(r.vf[24]));
    v4u n25 = vfix(vload(r.vf[25]));
    v4u n26 = vfix(vload(r.vf[26]));
    v4u n27 = vfix(vload(r.vf[27]));
    v4u n28 = vfix(vload(r.vf[28]));
    v4u n29 = vfix(vload(r.vf[29]));
    v4u nacc = vfix(vload(r.acc));
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i14 = r.vi[14];
    goto L_0400;
L_0020: { ++fl.t; set_vi(i2, vu::top()); }
L_0028: { ++fl.t; set_vi(i5, i2 + 0u); }
L_0030: { ++fl.t; set_vi(i3, i2 + 254u); }
L_0038: { ++fl.t; set_vi(i4, i3 + 0u); }
L_0040: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5) + 4, 2); set_vi(i6, v); } }
L_0048: { ++fl.t; set_vi(i5, i5 + 1u); }
L_0050: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(&r.vf[12], q, 16); } n12 = vfix(vload(r.vf[12])); }
L_0058: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5) + 0, 2); set_vi(i7, v); } }
L_0060: { ++fl.t; set_vi(i11, 0u + 32767u); }
L_0068: { ++fl.t; set_vi(i7, i11 & i7); }
L_0070: { ++fl.t; set_vi(i5, i5 + 1u); }
L_0078: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &r.vf[12], 16); set_vi(i4, i4 + 1u); } }
L_0080: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 31u) + 4, 2); set_vi(i14, v); } }
L_0088: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 30u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0090: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_0098: { ++fl.t; }
    if (pend) { pend = false; goto L_0410; }
L_00A0: { ++fl.t; pend = i6 == 0u; }
L_00A8: { ++fl.t; }
    if (pend) { pend = false; goto L_0388; }
L_00B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); std::memcpy(&r.vf[1], q, 16); } n1 = vfix(vload(r.vf[1])); }
L_00B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vfix(vload(r.vf[2])); }
L_00C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 2u); std::memcpy(&r.vf[3], q, 16); } n3 = vfix(vload(r.vf[3])); }
L_00C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 3u); std::memcpy(&r.vf[4], q, 16); } n4 = vfix(vload(r.vf[4])); }
L_00D0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 12, 2); set_vi(i8, v); } }
L_00D8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[27], q, 16); set_vi(i5, i5 + 1u); } n27 = vfix(vload(r.vf[27])); }
L_00E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[28], q, 16); set_vi(i5, i5 + 1u); } n28 = vfix(vload(r.vf[28])); }
L_00E8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[30], q, 16); set_vi(i5, i5 + 1u); } }
L_00F0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[29], q, 16); set_vi(i5, i5 + 1u); } n29 = vfix(vload(r.vf[29])); }
L_00F8: { ++fl.t; pend = 0u == i14; }
L_0100: { ++fl.t; }
    if (pend) { pend = false; goto L_0110; }
L_0108: { ++fl.t; const v4u uv = vaddn(n29, n22); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0110: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n27[0])); { const std::uint8_t *q = qword(mem, 0u + 4u); std::memcpy(&r.vf[5], q, 16); } vstore(r.acc, uv); n5 = vfix(vload(r.vf[5])); nacc = uv; }
L_0118: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n27[1])); { const std::uint8_t *q = qword(mem, 0u + 5u); std::memcpy(&r.vf[6], q, 16); } vstore(r.acc, uv); n6 = vfix(vload(r.vf[6])); nacc = uv; }
L_0120: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n27[2])); { const std::uint8_t *q = qword(mem, 0u + 6u); std::memcpy(&r.vf[7], q, 16); } vstore(r.acc, uv); n7 = vfix(vload(r.vf[7])); nacc = uv; }
L_0128: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, 0u + 7u); std::memcpy(&r.vf[8], q, 16); } vstore(r.vf[13], uv); n8 = vfix(vload(r.vf[8])); n13 = uv; }
L_0130: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n27[0])); { const std::uint8_t *q = qword(mem, 0u + 29u); std::memcpy(&r.vf[12], q, 16); } vstore(r.acc, uv); n12 = vfix(vload(r.vf[12])); nacc = uv; }
L_0138: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n27[1])); set_vi(i12, 0u + 1u); vstore(r.acc, uv); nacc = uv; }
L_0140: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n27[2])); vstore(r.acc, uv); nacc = uv; }
L_0148: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(0x3F800000u)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[13].w[3]); fl.end_q(r, qb, 7u); } vstore(r.vf[23], uv); }
L_0150: { ++fl.t; const v4u uv = vftoi(vload(r.vf[30]), 0); vstore(r.vf[30], uv); }
L_0158: { ++fl.t; }
L_0160: { ++fl.t; }
L_0168: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[23], r.vf[23].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0170: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &r.vf[30], 16); } }
L_0178: { ++fl.t; }
L_0180: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n13, vfix(vsplat(r.q))); vstore(r.vf[13], uv); n13 = uv; }
L_0188: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n29, vfix(vsplat(r.q))); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0190: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n12, vfix(vsplat(r.q))); r.vf[24].w[0] = r.vf[25].w[0]; r.vf[24].w[1] = r.vf[25].w[1]; r.vf[24].w[2] = r.vf[25].w[2]; vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); n24 = vfix(vload(r.vf[24])); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0198: { ++fl.t; r.vf[25].w[0] = r.vf[26].w[0]; r.vf[25].w[1] = r.vf[26].w[1]; r.vf[25].w[2] = r.vf[26].w[2]; n25 = vfix(vload(r.vf[25])); }
L_01A0: { ++fl.t; r.vf[26].w[0] = r.vf[13].w[0]; r.vf[26].w[1] = r.vf[13].w[1]; r.vf[26].w[2] = r.vf[13].w[2]; n26 = vfix(vload(r.vf[26])); }
L_01A8: { ++fl.t; const v4u uv = vftoi(vload(r.vf[13]), 4); vstore(r.vf[10], uv); }
L_01B0: { ++fl.t; pend = i6 == i12; }
L_01B8: { ++fl.t; }
    if (pend) { pend = false; goto L_0258; }
L_01C0: { ++fl.t; const v4u uv = vaddn(n12, vsplat(n12[1])); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_01C8: { ++fl.t; }
L_01D0: { ++fl.t; }
L_01D8: { ++fl.t; }
L_01E0: { ++fl.t; const v4u uv = vmin(vload(r.vf[12]), vsplat(r.vf[12].w[3])); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vfix(vload(r.vf[12])); }
L_01E8: { ++fl.t; }
L_01F0: { ++fl.t; }
L_01F8: { ++fl.t; }
L_0200: { ++fl.t; const v4u uv = vmax(vload(r.vf[12]), vsplat(r.vf[12].w[2])); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vfix(vload(r.vf[12])); }
L_0208: { ++fl.t; const v4u uv = vsubn(n25, n24); vstore(r.vf[15], vsel(vload(r.vf[15]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0210: { ++fl.t; const v4u uv = vsubn(n26, n24); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); flags(r, r.vf[16], 14u); fl.set_mac(r.mac, r.status); }
L_0218: { ++fl.t; }
L_0220: { ++fl.t; const v4u uv = vftoi(vload(r.vf[12]), 4); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vfix(vload(r.vf[12])); }
L_0228: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q + 0, &r.vf[10].w[0], 4); std::memcpy(q + 4, &r.vf[10].w[1], 4); std::memcpy(q + 8, &r.vf[10].w[2], 4); } }
L_0230: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &r.vf[11], 16); } }
L_0238: { ++fl.t; }
L_0240: { ++fl.t; set_vi(i12, r.vf[12].w[0]); }
L_0248: { ++fl.t; pend = true; }
L_0250: { ++fl.t; }
    if (pend) { pend = false; goto L_0280; }
L_0258: { ++fl.t; set_vi(i12, 0u + 4080u); }
L_0260: { ++fl.t; const v4u uv = vsubn(n25, n24); vstore(r.vf[15], vsel(vload(r.vf[15]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); flags(r, r.vf[15], 14u); fl.set_mac(r.mac, r.status); }
L_0268: { ++fl.t; const v4u uv = vsubn(n26, n24); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); flags(r, r.vf[16], 14u); fl.set_mac(r.mac, r.status); }
L_0270: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q + 0, &r.vf[10].w[0], 4); std::memcpy(q + 4, &r.vf[10].w[1], 4); std::memcpy(q + 8, &r.vf[10].w[2], 4); } }
L_0278: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &r.vf[11], 16); } }
L_0280: { ++fl.t; pend = 0u != i8; }
L_0288: { ++fl.t; }
    if (pend) { pend = false; goto L_0328; }
L_0290: { ++fl.t; set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); }
L_0298: { ++fl.t; pend = 0u == i1; }
L_02A0: { ++fl.t; }
    if (pend) { pend = false; goto L_02B8; }
L_02A8: { ++fl.t; pend = true; }
L_02B0: { ++fl.t; }
    if (pend) { pend = false; goto L_0318; }
L_02B8: { ++fl.t; const std::uint32_t ux = mul(r.vf[16].w[1], r.vf[15].w[2]); const std::uint32_t uy = mul(r.vf[16].w[2], r.vf[15].w[0]); const std::uint32_t uz = mul(r.vf[16].w[0], r.vf[15].w[1]); r.acc.w[0] = ux; r.acc.w[1] = uy; r.acc.w[2] = uz; nacc = vfix(vload(r.acc)); }
L_02C0: { ++fl.t; const std::uint32_t ux = msub(r.acc.w[0], r.vf[15].w[1], r.vf[16].w[2]); const std::uint32_t uy = msub(r.acc.w[1], r.vf[15].w[2], r.vf[16].w[0]); const std::uint32_t uz = msub(r.acc.w[2], r.vf[15].w[0], r.vf[16].w[1]); r.vf[14].w[0] = ux; r.vf[14].w[1] = uy; r.vf[14].w[2] = uz; n14 = vfix(vload(r.vf[14])); }
L_02C8: { ++fl.t; }
L_02D0: { ++fl.t; }
L_02D8: { ++fl.t; }
L_02E0: { ++fl.t; const v4u uv = vmuln(n14, vsplat(n28[3])); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); flags(r, r.vf[16], 2u); fl.set_mac(r.mac, r.status); }
L_02E8: { ++fl.t; }
L_02F0: { ++fl.t; }
L_02F8: { ++fl.t; set_vi(i1, 0u + 32u); }
L_0300: { ++fl.t; set_vi(i1, fl.mac() & i1); }
L_0308: { ++fl.t; pend = 0u == i1; }
L_0310: { ++fl.t; }
    if (pend) { pend = false; goto L_0328; }
L_0318: { ++fl.t; set_vi(i8, 0u + 32767u); }
L_0320: { ++fl.t; set_vi(i8, i8 + 1u); }
L_0328: { ++fl.t; set_vi(i8, i8 | i12); }
L_0330: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 2u); const std::uint32_t v = i8; std::memcpy(q + 12, &v, 4); } }
L_0338: { ++fl.t; set_vi(i7, i7 + 4294967295u); }
L_0340: { ++fl.t; set_vi(i4, i4 + 3u); }
L_0348: { ++fl.t; pend = 0u != i7; }
L_0350: { ++fl.t; }
    if (pend) { pend = false; goto L_00D0; }
L_0358: { ++fl.t; vu::kick(1, i3); }
L_0360: { ++fl.t; }
L_0368: { ++fl.t; ending = true; }
L_0370: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.tpc = 888u; return; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; vu::interpret(1, 888u);
    return;
L_0388: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[1], q, 16); } n1 = vfix(vload(r.vf[1])); }
L_0390: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } n2 = vfix(vload(r.vf[2])); }
L_0398: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[3], q, 16); } n3 = vfix(vload(r.vf[3])); }
L_03A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 4u); std::memcpy(&r.vf[4], q, 16); } n4 = vfix(vload(r.vf[4])); }
L_03A8: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_03B0: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &r.vf[2], 16); } }
L_03B8: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q, &r.vf[3], 16); } }
L_03C0: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(q, &r.vf[4], 16); } }
L_03C8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 12, 2); set_vi(i9, v); } }
L_03D0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(&r.vf[31], q, 16); } }
L_03D8: { ++fl.t; }
L_03E0: { ++fl.t; vu::kick(1, i3); }
L_03E8: { ++fl.t; }
L_03F0: { ++fl.t; ending = true; }
L_03F8: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.tpc = 1024u; return; }
L_0400: { ++fl.t; pend = true; }
L_0408: { ++fl.t; }
    if (pend) { pend = false; goto L_0020; }
L_0410: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[1], q, 16); } n1 = vfix(vload(r.vf[1])); }
L_0418: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } n2 = vfix(vload(r.vf[2])); }
L_0420: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[3], q, 16); } n3 = vfix(vload(r.vf[3])); }
L_0428: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 4u); std::memcpy(&r.vf[4], q, 16); } n4 = vfix(vload(r.vf[4])); }
L_0430: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 5u); std::memcpy(&r.vf[5], q, 16); } n5 = vfix(vload(r.vf[5])); }
L_0438: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 6u); std::memcpy(&r.vf[6], q, 16); } n6 = vfix(vload(r.vf[6])); }
L_0440: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_0448: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &r.vf[2], 16); } }
L_0450: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q, &r.vf[3], 16); } }
L_0458: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(q, &r.vf[4], 16); } }
L_0460: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 4u); std::memcpy(q, &r.vf[5], 16); } }
L_0468: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 5u); std::memcpy(q, &r.vf[6], 16); } }
L_0470: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 12, 2); set_vi(i9, v); } }
L_0478: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(&r.vf[31], q, 16); } }
L_0480: { ++fl.t; }
L_0488: { ++fl.t; vu::kick(1, i3); }
L_0490: { ++fl.t; }
L_0498: { ++fl.t; ending = true; }
L_04A0: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.tpc = 1192u; return; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; vu::interpret(1, 1192u);
    return;
dispatch:
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; vu::interpret(1, jpc);
    return;
}

void vu1_A6F0C1F950EDB983(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n7 = vfix(vload(r.vf[7]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n12 = vfix(vload(r.vf[12]));
    v4u n17 = vfix(vload(r.vf[17]));
    v4u n18 = vfix(vload(r.vf[18]));
    v4u n19 = vfix(vload(r.vf[19]));
    v4u n20 = vfix(vload(r.vf[20]));
    v4u n21 = vfix(vload(r.vf[21]));
    v4u n22 = vfix(vload(r.vf[22]));
    v4u n23 = vfix(vload(r.vf[23]));
    v4u n25 = vfix(vload(r.vf[25]));
    v4u n26 = vfix(vload(r.vf[26]));
    v4u n27 = vfix(vload(r.vf[27]));
    v4u n29 = vfix(vload(r.vf[29]));
    v4u n30 = vfix(vload(r.vf[30]));
    v4u nacc = vfix(vload(r.acc));
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
    goto L_0CC0;
L_0960: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 29u); std::memcpy(&r.vf[12], q, 16); } n12 = vfix(vload(r.vf[12])); }
L_0968: { ++fl.t; set_vi(i12, 0u + 1u); }
L_0970: { ++fl.t; }
L_0978: { ++fl.t; pend = i6 == i12; }
L_0980: { ++fl.t; }
    if (pend) { pend = false; goto L_0A58; }
L_0988: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n12, vfix(vsplat(r.q))); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0990: { ++fl.t; }
L_0998: { ++fl.t; }
L_09A0: { ++fl.t; }
L_09A8: { ++fl.t; const v4u uv = vaddn(n12, vsplat(n12[1])); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_09B0: { ++fl.t; }
L_09B8: { ++fl.t; }
L_09C0: { ++fl.t; }
L_09C8: { ++fl.t; const v4u uv = vmin(vload(r.vf[12]), vsplat(r.vf[12].w[3])); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vfix(vload(r.vf[12])); }
L_09D0: { ++fl.t; }
L_09D8: { ++fl.t; }
L_09E0: { ++fl.t; }
L_09E8: { ++fl.t; const v4u uv = vmax(vload(r.vf[12]), vsplat(r.vf[12].w[2])); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vfix(vload(r.vf[12])); }
L_09F0: { ++fl.t; }
L_09F8: { ++fl.t; }
L_0A00: { ++fl.t; }
L_0A08: { ++fl.t; const v4u uv = vftoi(vload(r.vf[12]), 4); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vfix(vload(r.vf[12])); }
L_0A10: { ++fl.t; }
L_0A18: { ++fl.t; }
L_0A20: { ++fl.t; }
L_0A28: { ++fl.t; set_vi(i12, r.vf[12].w[0]); }
L_0A30: { ++fl.t; }
L_0A38: { ++fl.t; }
L_0A40: { ++fl.t; }
L_0A48: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_0A50: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0A58: { ++fl.t; set_vi(i12, 0u + 4080u); }
L_0A60: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_0A68: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, 2672u);
    return;
L_0CB0: { ++fl.t; set_vi(i15, 408u); pend = true; }
L_0CB8: { ++fl.t; }
    if (pend) { pend = false; goto L_0ED0; }
L_0CC0: { ++fl.t; set_vi(i10, i10 - 1u); }
L_0CC8: { ++fl.t; }
L_0CD0: { ++fl.t; pend = 0u != i10; }
L_0CD8: { ++fl.t; }
    if (pend) { pend = false; goto L_0CB0; }
L_0CE0: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0CE8: { ++fl.t; set_vi(i15, 415u); pend = true; }
L_0CF0: { ++fl.t; }
    if (pend) { pend = false; goto L_0E90; }
L_0CF8: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_0D00: { ++fl.t; }
L_0D08: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_0D10: { ++fl.t; }
    if (pend) { pend = false; goto L_0E80; }
L_0D18: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i5, 0u + 512u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0D20: { ++fl.t; set_vi(i6, 0u + 8u); }
L_0D28: { ++fl.t; set_vi(i7, 0u + 1u); }
L_0D30: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0D38: { ++fl.t; set_vi(i9, i3 + 0u); }
L_0D40: { ++fl.t; set_vi(i10, 0u + i11); }
L_0D48: { ++fl.t; set_vi(i11, 0u + 0u); }
L_0D50: { ++fl.t; set_vi(i15, 428u); pend = true; }
L_0D58: { ++fl.t; }
    if (pend) { pend = false; goto L_0ED0; }
L_0D60: { ++fl.t; set_vi(i10, i10 - 1u); }
L_0D68: { ++fl.t; }
L_0D70: { ++fl.t; pend = 0u != i10; }
L_0D78: { ++fl.t; }
    if (pend) { pend = false; goto L_0D50; }
L_0D80: { ++fl.t; set_vi(i8, i3 + 0u); }
L_0D88: { ++fl.t; set_vi(i15, 435u); pend = true; }
L_0D90: { ++fl.t; }
    if (pend) { pend = false; goto L_0E90; }
L_0D98: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_0DA0: { ++fl.t; }
L_0DA8: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_0DB0: { ++fl.t; }
    if (pend) { pend = false; goto L_0E80; }
L_0DB8: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i5, 0u + 256u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0DC0: { ++fl.t; set_vi(i6, 0u + 4u); }
L_0DC8: { ++fl.t; set_vi(i7, 0u + 1u); }
L_0DD0: { ++fl.t; set_vi(i8, i3 + 0u); }
L_0DD8: { ++fl.t; set_vi(i9, i2 + 0u); }
L_0DE0: { ++fl.t; set_vi(i10, 0u + i11); }
L_0DE8: { ++fl.t; set_vi(i11, 0u + 0u); }
L_0DF0: { ++fl.t; set_vi(i15, 448u); pend = true; }
L_0DF8: { ++fl.t; }
    if (pend) { pend = false; goto L_0ED0; }
L_0E00: { ++fl.t; set_vi(i10, i10 - 1u); }
L_0E08: { ++fl.t; }
L_0E10: { ++fl.t; pend = 0u != i10; }
L_0E18: { ++fl.t; }
    if (pend) { pend = false; goto L_0DF0; }
L_0E20: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0E28: { ++fl.t; set_vi(i15, 455u); pend = true; }
L_0E30: { ++fl.t; }
    if (pend) { pend = false; goto L_0E90; }
L_0E38: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_0E40: { ++fl.t; }
L_0E48: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_0E50: { ++fl.t; }
    if (pend) { pend = false; goto L_0E80; }
L_0E58: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0E60: { ++fl.t; set_vi(i9, i4 + 0u); }
L_0E68: { ++fl.t; set_vi(i10, 0u + i11); }
L_0E70: { ++fl.t; set_vi(i15, 464u); pend = true; }
L_0E78: { ++fl.t; }
    if (pend) { pend = false; goto L_11D8; }
L_0E80: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_0E88: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0E90: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 0u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_0E98: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 1u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0EA0: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 2u); std::memcpy(&r.vf[23], q, 16); } n23 = vfix(vload(r.vf[23])); }
L_0EA8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[21], 16); set_vi(i9, i9 + 1u); } }
L_0EB0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[22], 16); set_vi(i9, i9 + 1u); } }
L_0EB8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[23], 16); set_vi(i9, i9 + 1u); } }
L_0EC0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0EC8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0ED0: { ++fl.t; { const std::uint8_t *q = qword(mem, i8); std::memcpy(&r.vf[17], q, 16); set_vi(i8, i8 + 1u); } n17 = vfix(vload(r.vf[17])); }
L_0ED8: { ++fl.t; { const std::uint8_t *q = qword(mem, i8); std::memcpy(&r.vf[18], q, 16); set_vi(i8, i8 + 1u); } n18 = vfix(vload(r.vf[18])); }
L_0EE0: { ++fl.t; { const std::uint8_t *q = qword(mem, i8); std::memcpy(&r.vf[19], q, 16); set_vi(i8, i8 + 1u); } n19 = vfix(vload(r.vf[19])); }
L_0EE8: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 0u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_0EF0: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 1u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0EF8: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 2u); std::memcpy(&r.vf[23], q, 16); } n23 = vfix(vload(r.vf[23])); }
L_0F00: { ++fl.t; }
L_0F08: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[17], r.vf[17].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0F10: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[21], r.vf[21].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0F18: { ++fl.t; }
L_0F20: { ++fl.t; }
L_0F28: { ++fl.t; }
L_0F30: { ++fl.t; set_vi(i1, fl.clip() & 0xFFFu); }
L_0F38: { ++fl.t; set_vi(i12, i1 & i5); }
L_0F40: { ++fl.t; }
L_0F48: { ++fl.t; pend = 0u == i12; }
L_0F50: { ++fl.t; }
    if (pend) { pend = false; goto L_0FC8; }
L_0F58: { ++fl.t; set_vi(i12, i1 & i6); }
L_0F60: { ++fl.t; }
L_0F68: { ++fl.t; pend = 0u == i12; }
L_0F70: { ++fl.t; }
    if (pend) { pend = false; goto L_0F88; }
L_0F78: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0F80: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0F88: { ++fl.t; set_vi(i12, 499u); pend = true; }
L_0F90: { ++fl.t; }
    if (pend) { pend = false; goto L_1070; }
L_0F98: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[25], 16); set_vi(i9, i9 + 1u); } }
L_0FA0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[26], 16); set_vi(i9, i9 + 1u); } }
L_0FA8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[27], 16); set_vi(i9, i9 + 1u); } }
L_0FB0: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0FB8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FC0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0FC8: { ++fl.t; set_vi(i12, i1 & i6); }
L_0FD0: { ++fl.t; }
L_0FD8: { ++fl.t; pend = 0u == i12; }
L_0FE0: { ++fl.t; }
    if (pend) { pend = false; goto L_1040; }
L_0FE8: { ++fl.t; set_vi(i12, 511u); pend = true; }
L_0FF0: { ++fl.t; }
    if (pend) { pend = false; goto L_1070; }
L_0FF8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[17], 16); set_vi(i9, i9 + 1u); } }
L_1000: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[18], 16); set_vi(i9, i9 + 1u); } }
L_1008: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[19], 16); set_vi(i9, i9 + 1u); } }
L_1010: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[25], 16); set_vi(i9, i9 + 1u); } }
L_1018: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[26], 16); set_vi(i9, i9 + 1u); } }
L_1020: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[27], 16); set_vi(i9, i9 + 1u); } }
L_1028: { ++fl.t; set_vi(i11, i11 + 2u); }
L_1030: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1038: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1040: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[17], 16); set_vi(i9, i9 + 1u); } }
L_1048: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[18], 16); set_vi(i9, i9 + 1u); } }
L_1050: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[19], 16); set_vi(i9, i9 + 1u); } }
L_1058: { ++fl.t; set_vi(i11, i11 + 1u); }
L_1060: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1068: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1070: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n30[0])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n25 = vsel(n25, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1078: { ++fl.t; const v4u uv = vmuln(n21, vsplat(n30[0])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n26 = vsel(n26, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1080: { ++fl.t; }
L_1088: { ++fl.t; }
L_1090: { ++fl.t; const v4u uv = vsubn(n17, vsplat(n25[3])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1098: { ++fl.t; const v4u uv = vsubn(n21, vsplat(n26[3])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_10A0: { ++fl.t; set_vi(i1, 0u + i7); }
L_10A8: { ++fl.t; }
L_10B0: { ++fl.t; pend = 0u == i1; }
L_10B8: { ++fl.t; }
    if (pend) { pend = false; goto L_10F0; }
L_10C0: { ++fl.t; { const Reg128 m = r.vf[25]; r.vf[25].w[0] = m.w[1]; r.vf[25].w[1] = m.w[2]; r.vf[25].w[2] = m.w[3]; r.vf[25].w[3] = m.w[0]; } n25 = vfix(vload(r.vf[25])); }
L_10C8: { ++fl.t; { const Reg128 m = r.vf[26]; r.vf[26].w[0] = m.w[1]; r.vf[26].w[1] = m.w[2]; r.vf[26].w[2] = m.w[3]; r.vf[26].w[3] = m.w[0]; } n26 = vfix(vload(r.vf[26])); }
L_10D0: { ++fl.t; set_vi(i1, i1 - 1u); }
L_10D8: { ++fl.t; }
L_10E0: { ++fl.t; pend = true; }
L_10E8: { ++fl.t; }
    if (pend) { pend = false; goto L_10B0; }
L_10F0: { ++fl.t; const v4u uv = vsubn(n26, n25); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_10F8: { ++fl.t; }
L_1100: { ++fl.t; }
L_1108: { ++fl.t; }
L_1110: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[25].w[0], r.vf[27].w[0]); fl.end_q(r, qb, 7u); } }
L_1118: { ++fl.t; }
L_1120: { ++fl.t; }
L_1128: { ++fl.t; }
L_1130: { ++fl.t; const v4u uv = vsubn(n21, n17); vstore(r.vf[25], uv); n25 = uv; }
L_1138: { ++fl.t; const v4u uv = vsubn(n22, n18); vstore(r.vf[26], uv); n26 = uv; }
L_1140: { ++fl.t; const v4u uv = vsubn(n23, n19); vstore(r.vf[27], uv); n27 = uv; }
L_1148: { ++fl.t; fl.flush_q(r); const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vfix(vsplat(r.q))); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1150: { ++fl.t; }
L_1158: { ++fl.t; }
L_1160: { ++fl.t; }
L_1168: { ++fl.t; const v4u uv = vabs(vload(r.vf[29])); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n29 = vfix(vload(r.vf[29])); }
L_1170: { ++fl.t; }
L_1178: { ++fl.t; }
L_1180: { ++fl.t; }
L_1188: { ++fl.t; const v4u uv = vmuln(n25, vsplat(n29[0])); vstore(r.vf[25], uv); n25 = uv; }
L_1190: { ++fl.t; const v4u uv = vmuln(n26, vsplat(n29[0])); vstore(r.vf[26], uv); n26 = uv; }
L_1198: { ++fl.t; const v4u uv = vmuln(n27, vsplat(n29[0])); vstore(r.vf[27], uv); n27 = uv; }
L_11A0: { ++fl.t; }
L_11A8: { ++fl.t; const v4u uv = vaddn(n25, n17); vstore(r.vf[25], uv); n25 = uv; }
L_11B0: { ++fl.t; const v4u uv = vaddn(n26, n18); vstore(r.vf[26], uv); n26 = uv; }
L_11B8: { ++fl.t; const v4u uv = vaddn(n27, n19); vstore(r.vf[27], uv); n27 = uv; }
L_11C0: { ++fl.t; }
L_11C8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i12) * 8u) & 16383u; pendj = true; }
L_11D0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_11D8: { ++fl.t; set_vi(i1, i14 + 0u); }
L_11E0: { ++fl.t; set_vi(i2, i8 + 0u); }
L_11E8: { ++fl.t; set_vi(i3, i9 + 1u); }
L_11F0: { ++fl.t; set_vi(i11, 0u + 32767u); }
L_11F8: { ++fl.t; set_vi(i11, i11 + 1u); }
L_1200: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); const std::uint32_t v = i11; std::memcpy(q + 0, &v, 4); } }
L_1208: { ++fl.t; }
L_1210: { ++fl.t; }
L_1218: { ++fl.t; }
L_1220: { ++fl.t; vu::kick(1, i9); }
L_1228: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 1006u) + 0, 2); set_vi(i6, v); } }
L_1230: { ++fl.t; set_vi(i11, i10 + 32767u); }
L_1238: { ++fl.t; set_vi(i11, i11 + 1u); }
L_1240: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); const std::uint32_t v = i11; std::memcpy(q + 0, &v, 4); } }
L_1248: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 0u); std::memcpy(&r.vf[20], q, 16); } n20 = vfix(vload(r.vf[20])); }
L_1250: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 1u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_1258: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 2u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_1260: { ++fl.t; }
L_1268: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n20[0])); vstore(r.acc, uv); nacc = uv; }
L_1270: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n20[1])); vstore(r.acc, uv); nacc = uv; }
L_1278: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n20[2])); vstore(r.acc, uv); nacc = uv; }
L_1280: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n20[3])); vstore(r.vf[27], uv); n27 = uv; }
L_1288: { ++fl.t; }
L_1290: { ++fl.t; }
L_1298: { ++fl.t; }
L_12A0: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[27].w[3]); fl.end_q(r, qb, 7u); } }
L_12A8: { ++fl.t; }
L_12B0: { ++fl.t; }
L_12B8: { ++fl.t; }
L_12C0: { ++fl.t; }
L_12C8: { ++fl.t; }
L_12D0: { ++fl.t; }
L_12D8: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n27, vfix(vsplat(r.q))); vstore(r.vf[27], uv); n27 = uv; }
L_12E0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n22, vfix(vsplat(r.q))); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_12E8: { ++fl.t; const v4u uv = vftoi(vload(r.vf[21]), 0); vstore(r.vf[28], uv); }
L_12F0: { ++fl.t; set_vi(i14, 608u); pend = true; }
L_12F8: { ++fl.t; const v4u uv = vftoi(vload(r.vf[27]), 4); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
    if (pend) { pend = false; goto L_0960; }
L_1300: { ++fl.t; set_vi(i10, i10 + 4294967295u); }
L_1308: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 0u); std::memcpy(q, &r.vf[29], 16); } }
L_1310: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 1u); std::memcpy(q, &r.vf[28], 16); } }
L_1318: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 2u); std::memcpy(q + 0, &r.vf[27].w[0], 4); std::memcpy(q + 4, &r.vf[27].w[1], 4); std::memcpy(q + 8, &r.vf[27].w[2], 4); } }
L_1320: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 2u); const std::uint32_t v = i12; std::memcpy(q + 12, &v, 4); } }
L_1328: { ++fl.t; set_vi(i3, i3 + 3u); }
L_1330: { ++fl.t; set_vi(i2, i2 + 3u); }
L_1338: { ++fl.t; pend = 0u != i10; }
L_1340: { ++fl.t; }
    if (pend) { pend = false; goto L_1248; }
L_1348: { ++fl.t; vu::kick(1, i9); }
L_1350: { ++fl.t; }
L_1358: { ++fl.t; set_vi(i14, i1 + 0u); }
L_1360: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1368: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, 4976u);
    return;
dispatch:
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_A6F5F7CB3E890DD3(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n1 = vfix(vload(r.vf[1]));
    v4u n2 = vfix(vload(r.vf[2]));
    v4u n3 = vfix(vload(r.vf[3]));
    v4u n4 = vfix(vload(r.vf[4]));
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n7 = vfix(vload(r.vf[7]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n12 = vfix(vload(r.vf[12]));
    v4u n13 = vfix(vload(r.vf[13]));
    v4u n14 = vfix(vload(r.vf[14]));
    v4u n22 = vfix(vload(r.vf[22]));
    v4u n24 = vfix(vload(r.vf[24]));
    v4u n25 = vfix(vload(r.vf[25]));
    v4u n26 = vfix(vload(r.vf[26]));
    v4u n27 = vfix(vload(r.vf[27]));
    v4u n28 = vfix(vload(r.vf[28]));
    v4u n29 = vfix(vload(r.vf[29]));
    v4u nacc = vfix(vload(r.acc));
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i14 = r.vi[14];
    goto L_0020;
L_0020: { ++fl.t; set_vi(i2, vu::top()); }
L_0028: { ++fl.t; set_vi(i5, i2 + 0u); }
L_0030: { ++fl.t; set_vi(i3, i2 + 254u); }
L_0038: { ++fl.t; set_vi(i4, i3 + 0u); }
L_0040: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5) + 4, 2); set_vi(i6, v); } }
L_0048: { ++fl.t; set_vi(i5, i5 + 1u); }
L_0050: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(&r.vf[12], q, 16); } n12 = vfix(vload(r.vf[12])); }
L_0058: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5) + 0, 2); set_vi(i7, v); } }
L_0060: { ++fl.t; set_vi(i11, 0u + 32767u); }
L_0068: { ++fl.t; set_vi(i7, i11 & i7); }
L_0070: { ++fl.t; set_vi(i5, i5 + 1u); }
L_0078: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &r.vf[12], 16); set_vi(i4, i4 + 1u); } }
L_0080: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 31u) + 4, 2); set_vi(i14, v); } }
L_0088: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 30u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0090: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_0098: { ++fl.t; }
    if (pend) { pend = false; goto L_0410; }
L_00A0: { ++fl.t; pend = i6 == 0u; }
L_00A8: { ++fl.t; }
    if (pend) { pend = false; goto L_0388; }
L_00B0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 0u); std::memcpy(&r.vf[1], q, 16); } n1 = vfix(vload(r.vf[1])); }
L_00B8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vfix(vload(r.vf[2])); }
L_00C0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 2u); std::memcpy(&r.vf[3], q, 16); } n3 = vfix(vload(r.vf[3])); }
L_00C8: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 3u); std::memcpy(&r.vf[4], q, 16); } n4 = vfix(vload(r.vf[4])); }
L_00D0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 12, 2); set_vi(i8, v); } }
L_00D8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[27], q, 16); set_vi(i5, i5 + 1u); } n27 = vfix(vload(r.vf[27])); }
L_00E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[28], q, 16); set_vi(i5, i5 + 1u); } n28 = vfix(vload(r.vf[28])); }
L_00E8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[30], q, 16); set_vi(i5, i5 + 1u); } }
L_00F0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[29], q, 16); set_vi(i5, i5 + 1u); } n29 = vfix(vload(r.vf[29])); }
L_00F8: { ++fl.t; pend = 0u == i14; }
L_0100: { ++fl.t; }
    if (pend) { pend = false; goto L_0110; }
L_0108: { ++fl.t; const v4u uv = vaddn(n29, n22); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_0110: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n27[0])); { const std::uint8_t *q = qword(mem, 0u + 4u); std::memcpy(&r.vf[5], q, 16); } vstore(r.acc, uv); n5 = vfix(vload(r.vf[5])); nacc = uv; }
L_0118: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n27[1])); { const std::uint8_t *q = qword(mem, 0u + 5u); std::memcpy(&r.vf[6], q, 16); } vstore(r.acc, uv); n6 = vfix(vload(r.vf[6])); nacc = uv; }
L_0120: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n27[2])); { const std::uint8_t *q = qword(mem, 0u + 6u); std::memcpy(&r.vf[7], q, 16); } vstore(r.acc, uv); n7 = vfix(vload(r.vf[7])); nacc = uv; }
L_0128: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, 0u + 7u); std::memcpy(&r.vf[8], q, 16); } vstore(r.vf[13], uv); n8 = vfix(vload(r.vf[8])); n13 = uv; }
L_0130: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n27[0])); { const std::uint8_t *q = qword(mem, 0u + 29u); std::memcpy(&r.vf[12], q, 16); } vstore(r.acc, uv); n12 = vfix(vload(r.vf[12])); nacc = uv; }
L_0138: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n27[1])); set_vi(i12, 0u + 1u); vstore(r.acc, uv); nacc = uv; }
L_0140: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n27[2])); vstore(r.acc, uv); nacc = uv; }
L_0148: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(0x3F800000u)); { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[13].w[3]); fl.end_q(r, qb, 7u); } vstore(r.vf[23], uv); }
L_0150: { ++fl.t; const v4u uv = vftoi(vload(r.vf[30]), 0); vstore(r.vf[30], uv); }
L_0158: { ++fl.t; }
L_0160: { ++fl.t; }
L_0168: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[23], r.vf[23].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0170: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &r.vf[30], 16); } }
L_0178: { ++fl.t; }
L_0180: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n13, vfix(vsplat(r.q))); vstore(r.vf[13], uv); n13 = uv; }
L_0188: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n29, vfix(vsplat(r.q))); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0190: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n12, vfix(vsplat(r.q))); r.vf[24].w[0] = r.vf[25].w[0]; r.vf[24].w[1] = r.vf[25].w[1]; r.vf[24].w[2] = r.vf[25].w[2]; vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); n24 = vfix(vload(r.vf[24])); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0198: { ++fl.t; r.vf[25].w[0] = r.vf[26].w[0]; r.vf[25].w[1] = r.vf[26].w[1]; r.vf[25].w[2] = r.vf[26].w[2]; n25 = vfix(vload(r.vf[25])); }
L_01A0: { ++fl.t; r.vf[26].w[0] = r.vf[13].w[0]; r.vf[26].w[1] = r.vf[13].w[1]; r.vf[26].w[2] = r.vf[13].w[2]; n26 = vfix(vload(r.vf[26])); }
L_01A8: { ++fl.t; const v4u uv = vftoi(vload(r.vf[13]), 4); vstore(r.vf[10], uv); }
L_01B0: { ++fl.t; pend = i6 == i12; }
L_01B8: { ++fl.t; }
    if (pend) { pend = false; goto L_0258; }
L_01C0: { ++fl.t; const v4u uv = vaddn(n12, vsplat(n12[1])); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_01C8: { ++fl.t; }
L_01D0: { ++fl.t; }
L_01D8: { ++fl.t; }
L_01E0: { ++fl.t; const v4u uv = vmin(vload(r.vf[12]), vsplat(r.vf[12].w[3])); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vfix(vload(r.vf[12])); }
L_01E8: { ++fl.t; }
L_01F0: { ++fl.t; }
L_01F8: { ++fl.t; }
L_0200: { ++fl.t; const v4u uv = vmax(vload(r.vf[12]), vsplat(r.vf[12].w[2])); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vfix(vload(r.vf[12])); }
L_0208: { ++fl.t; const v4u uv = vsubn(n25, n24); vstore(r.vf[15], vsel(vload(r.vf[15]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0210: { ++fl.t; const v4u uv = vsubn(n26, n24); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); flags(r, r.vf[16], 14u); fl.set_mac(r.mac, r.status); }
L_0218: { ++fl.t; }
L_0220: { ++fl.t; const v4u uv = vftoi(vload(r.vf[12]), 4); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vfix(vload(r.vf[12])); }
L_0228: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q + 0, &r.vf[10].w[0], 4); std::memcpy(q + 4, &r.vf[10].w[1], 4); std::memcpy(q + 8, &r.vf[10].w[2], 4); } }
L_0230: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &r.vf[11], 16); } }
L_0238: { ++fl.t; }
L_0240: { ++fl.t; set_vi(i12, r.vf[12].w[0]); }
L_0248: { ++fl.t; pend = true; }
L_0250: { ++fl.t; }
    if (pend) { pend = false; goto L_0280; }
L_0258: { ++fl.t; set_vi(i12, 0u + 4080u); }
L_0260: { ++fl.t; const v4u uv = vsubn(n25, n24); vstore(r.vf[15], vsel(vload(r.vf[15]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); flags(r, r.vf[15], 14u); fl.set_mac(r.mac, r.status); }
L_0268: { ++fl.t; const v4u uv = vsubn(n26, n24); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); flags(r, r.vf[16], 14u); fl.set_mac(r.mac, r.status); }
L_0270: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q + 0, &r.vf[10].w[0], 4); std::memcpy(q + 4, &r.vf[10].w[1], 4); std::memcpy(q + 8, &r.vf[10].w[2], 4); } }
L_0278: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &r.vf[11], 16); } }
L_0280: { ++fl.t; pend = 0u != i8; }
L_0288: { ++fl.t; }
    if (pend) { pend = false; goto L_0328; }
L_0290: { ++fl.t; set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); }
L_0298: { ++fl.t; pend = 0u == i1; }
L_02A0: { ++fl.t; }
    if (pend) { pend = false; goto L_02B8; }
L_02A8: { ++fl.t; pend = true; }
L_02B0: { ++fl.t; }
    if (pend) { pend = false; goto L_0318; }
L_02B8: { ++fl.t; const std::uint32_t ux = mul(r.vf[16].w[1], r.vf[15].w[2]); const std::uint32_t uy = mul(r.vf[16].w[2], r.vf[15].w[0]); const std::uint32_t uz = mul(r.vf[16].w[0], r.vf[15].w[1]); r.acc.w[0] = ux; r.acc.w[1] = uy; r.acc.w[2] = uz; nacc = vfix(vload(r.acc)); }
L_02C0: { ++fl.t; const std::uint32_t ux = msub(r.acc.w[0], r.vf[15].w[1], r.vf[16].w[2]); const std::uint32_t uy = msub(r.acc.w[1], r.vf[15].w[2], r.vf[16].w[0]); const std::uint32_t uz = msub(r.acc.w[2], r.vf[15].w[0], r.vf[16].w[1]); r.vf[14].w[0] = ux; r.vf[14].w[1] = uy; r.vf[14].w[2] = uz; n14 = vfix(vload(r.vf[14])); }
L_02C8: { ++fl.t; }
L_02D0: { ++fl.t; }
L_02D8: { ++fl.t; }
L_02E0: { ++fl.t; const v4u uv = vmuln(n14, vsplat(n28[3])); vstore(r.vf[16], vsel(vload(r.vf[16]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); flags(r, r.vf[16], 2u); fl.set_mac(r.mac, r.status); }
L_02E8: { ++fl.t; }
L_02F0: { ++fl.t; }
L_02F8: { ++fl.t; set_vi(i1, 0u + 32u); }
L_0300: { ++fl.t; set_vi(i1, fl.mac() & i1); }
L_0308: { ++fl.t; pend = 0u == i1; }
L_0310: { ++fl.t; }
    if (pend) { pend = false; goto L_0328; }
L_0318: { ++fl.t; set_vi(i8, 0u + 32767u); }
L_0320: { ++fl.t; set_vi(i8, i8 + 1u); }
L_0328: { ++fl.t; set_vi(i8, i8 | i12); }
L_0330: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 2u); const std::uint32_t v = i8; std::memcpy(q + 12, &v, 4); } }
L_0338: { ++fl.t; set_vi(i7, i7 + 4294967295u); }
L_0340: { ++fl.t; set_vi(i4, i4 + 3u); }
L_0348: { ++fl.t; pend = 0u != i7; }
L_0350: { ++fl.t; }
    if (pend) { pend = false; goto L_00D0; }
L_0358: { ++fl.t; vu::kick(1, i3); }
L_0360: { ++fl.t; }
L_0368: { ++fl.t; ending = true; }
L_0370: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.tpc = 888u; return; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; vu::interpret(1, 888u);
    return;
L_0388: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[1], q, 16); } n1 = vfix(vload(r.vf[1])); }
L_0390: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } n2 = vfix(vload(r.vf[2])); }
L_0398: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[3], q, 16); } n3 = vfix(vload(r.vf[3])); }
L_03A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 4u); std::memcpy(&r.vf[4], q, 16); } n4 = vfix(vload(r.vf[4])); }
L_03A8: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_03B0: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &r.vf[2], 16); } }
L_03B8: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q, &r.vf[3], 16); } }
L_03C0: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(q, &r.vf[4], 16); } }
L_03C8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 12, 2); set_vi(i9, v); } }
L_03D0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(&r.vf[31], q, 16); } }
L_03D8: { ++fl.t; }
L_03E0: { ++fl.t; vu::kick(1, i3); }
L_03E8: { ++fl.t; }
L_03F0: { ++fl.t; ending = true; }
L_03F8: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.tpc = 1024u; return; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; vu::interpret(1, 1024u);
    return;
L_0410: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[1], q, 16); } n1 = vfix(vload(r.vf[1])); }
L_0418: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } n2 = vfix(vload(r.vf[2])); }
L_0420: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[3], q, 16); } n3 = vfix(vload(r.vf[3])); }
L_0428: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 4u); std::memcpy(&r.vf[4], q, 16); } n4 = vfix(vload(r.vf[4])); }
L_0430: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 5u); std::memcpy(&r.vf[5], q, 16); } n5 = vfix(vload(r.vf[5])); }
L_0438: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 6u); std::memcpy(&r.vf[6], q, 16); } n6 = vfix(vload(r.vf[6])); }
L_0440: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_0448: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &r.vf[2], 16); } }
L_0450: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q, &r.vf[3], 16); } }
L_0458: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(q, &r.vf[4], 16); } }
L_0460: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 4u); std::memcpy(q, &r.vf[5], 16); } }
L_0468: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 5u); std::memcpy(q, &r.vf[6], 16); } }
L_0470: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 12, 2); set_vi(i9, v); } }
L_0478: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(&r.vf[31], q, 16); } }
L_0480: { ++fl.t; }
L_0488: { ++fl.t; vu::kick(1, i3); }
L_0490: { ++fl.t; }
L_0498: { ++fl.t; ending = true; }
L_04A0: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.tpc = 1192u; return; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; vu::interpret(1, 1192u);
    return;
dispatch:
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; vu::interpret(1, jpc);
    return;
}

void vu1_A70A9248EA949BF2(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n7 = vfix(vload(r.vf[7]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n12 = vfix(vload(r.vf[12]));
    v4u n17 = vfix(vload(r.vf[17]));
    v4u n18 = vfix(vload(r.vf[18]));
    v4u n19 = vfix(vload(r.vf[19]));
    v4u n20 = vfix(vload(r.vf[20]));
    v4u n21 = vfix(vload(r.vf[21]));
    v4u n22 = vfix(vload(r.vf[22]));
    v4u n23 = vfix(vload(r.vf[23]));
    v4u n25 = vfix(vload(r.vf[25]));
    v4u n26 = vfix(vload(r.vf[26]));
    v4u n27 = vfix(vload(r.vf[27]));
    v4u n29 = vfix(vload(r.vf[29]));
    v4u n30 = vfix(vload(r.vf[30]));
    v4u nacc = vfix(vload(r.acc));
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
    goto L_0E00;
L_0960: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 29u); std::memcpy(&r.vf[12], q, 16); } n12 = vfix(vload(r.vf[12])); }
L_0968: { ++fl.t; set_vi(i12, 0u + 1u); }
L_0970: { ++fl.t; }
L_0978: { ++fl.t; pend = i6 == i12; }
L_0980: { ++fl.t; }
    if (pend) { pend = false; goto L_0A58; }
L_0988: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n12, vfix(vsplat(r.q))); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0990: { ++fl.t; }
L_0998: { ++fl.t; }
L_09A0: { ++fl.t; }
L_09A8: { ++fl.t; const v4u uv = vaddn(n12, vsplat(n12[1])); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_09B0: { ++fl.t; }
L_09B8: { ++fl.t; }
L_09C0: { ++fl.t; }
L_09C8: { ++fl.t; const v4u uv = vmin(vload(r.vf[12]), vsplat(r.vf[12].w[3])); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vfix(vload(r.vf[12])); }
L_09D0: { ++fl.t; }
L_09D8: { ++fl.t; }
L_09E0: { ++fl.t; }
L_09E8: { ++fl.t; const v4u uv = vmax(vload(r.vf[12]), vsplat(r.vf[12].w[2])); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vfix(vload(r.vf[12])); }
L_09F0: { ++fl.t; }
L_09F8: { ++fl.t; }
L_0A00: { ++fl.t; }
L_0A08: { ++fl.t; const v4u uv = vftoi(vload(r.vf[12]), 4); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vfix(vload(r.vf[12])); }
L_0A10: { ++fl.t; }
L_0A18: { ++fl.t; }
L_0A20: { ++fl.t; }
L_0A28: { ++fl.t; set_vi(i12, r.vf[12].w[0]); }
L_0A30: { ++fl.t; }
L_0A38: { ++fl.t; }
L_0A40: { ++fl.t; }
L_0A48: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_0A50: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0A58: { ++fl.t; set_vi(i12, 0u + 4080u); }
L_0A60: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_0A68: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, 2672u);
    return;
L_0DF0: { ++fl.t; set_vi(i15, 448u); pend = true; }
L_0DF8: { ++fl.t; }
    if (pend) { pend = false; goto L_0ED0; }
L_0E00: { ++fl.t; set_vi(i10, i10 - 1u); }
L_0E08: { ++fl.t; }
L_0E10: { ++fl.t; pend = 0u != i10; }
L_0E18: { ++fl.t; }
    if (pend) { pend = false; goto L_0DF0; }
L_0E20: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0E28: { ++fl.t; set_vi(i15, 455u); pend = true; }
L_0E30: { ++fl.t; }
    if (pend) { pend = false; goto L_0E90; }
L_0E38: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_0E40: { ++fl.t; }
L_0E48: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_0E50: { ++fl.t; }
    if (pend) { pend = false; goto L_0E80; }
L_0E58: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0E60: { ++fl.t; set_vi(i9, i4 + 0u); }
L_0E68: { ++fl.t; set_vi(i10, 0u + i11); }
L_0E70: { ++fl.t; set_vi(i15, 464u); pend = true; }
L_0E78: { ++fl.t; }
    if (pend) { pend = false; goto L_11D8; }
L_0E80: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_0E88: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0E90: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 0u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_0E98: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 1u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0EA0: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 2u); std::memcpy(&r.vf[23], q, 16); } n23 = vfix(vload(r.vf[23])); }
L_0EA8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[21], 16); set_vi(i9, i9 + 1u); } }
L_0EB0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[22], 16); set_vi(i9, i9 + 1u); } }
L_0EB8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[23], 16); set_vi(i9, i9 + 1u); } }
L_0EC0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0EC8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0ED0: { ++fl.t; { const std::uint8_t *q = qword(mem, i8); std::memcpy(&r.vf[17], q, 16); set_vi(i8, i8 + 1u); } n17 = vfix(vload(r.vf[17])); }
L_0ED8: { ++fl.t; { const std::uint8_t *q = qword(mem, i8); std::memcpy(&r.vf[18], q, 16); set_vi(i8, i8 + 1u); } n18 = vfix(vload(r.vf[18])); }
L_0EE0: { ++fl.t; { const std::uint8_t *q = qword(mem, i8); std::memcpy(&r.vf[19], q, 16); set_vi(i8, i8 + 1u); } n19 = vfix(vload(r.vf[19])); }
L_0EE8: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 0u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_0EF0: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 1u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0EF8: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 2u); std::memcpy(&r.vf[23], q, 16); } n23 = vfix(vload(r.vf[23])); }
L_0F00: { ++fl.t; }
L_0F08: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[17], r.vf[17].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0F10: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[21], r.vf[21].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0F18: { ++fl.t; }
L_0F20: { ++fl.t; }
L_0F28: { ++fl.t; }
L_0F30: { ++fl.t; set_vi(i1, fl.clip() & 0xFFFu); }
L_0F38: { ++fl.t; set_vi(i12, i1 & i5); }
L_0F40: { ++fl.t; }
L_0F48: { ++fl.t; pend = 0u == i12; }
L_0F50: { ++fl.t; }
    if (pend) { pend = false; goto L_0FC8; }
L_0F58: { ++fl.t; set_vi(i12, i1 & i6); }
L_0F60: { ++fl.t; }
L_0F68: { ++fl.t; pend = 0u == i12; }
L_0F70: { ++fl.t; }
    if (pend) { pend = false; goto L_0F88; }
L_0F78: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0F80: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0F88: { ++fl.t; set_vi(i12, 499u); pend = true; }
L_0F90: { ++fl.t; }
    if (pend) { pend = false; goto L_1070; }
L_0F98: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[25], 16); set_vi(i9, i9 + 1u); } }
L_0FA0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[26], 16); set_vi(i9, i9 + 1u); } }
L_0FA8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[27], 16); set_vi(i9, i9 + 1u); } }
L_0FB0: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0FB8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0FC0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0FC8: { ++fl.t; set_vi(i12, i1 & i6); }
L_0FD0: { ++fl.t; }
L_0FD8: { ++fl.t; pend = 0u == i12; }
L_0FE0: { ++fl.t; }
    if (pend) { pend = false; goto L_1040; }
L_0FE8: { ++fl.t; set_vi(i12, 511u); pend = true; }
L_0FF0: { ++fl.t; }
    if (pend) { pend = false; goto L_1070; }
L_0FF8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[17], 16); set_vi(i9, i9 + 1u); } }
L_1000: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[18], 16); set_vi(i9, i9 + 1u); } }
L_1008: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[19], 16); set_vi(i9, i9 + 1u); } }
L_1010: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[25], 16); set_vi(i9, i9 + 1u); } }
L_1018: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[26], 16); set_vi(i9, i9 + 1u); } }
L_1020: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[27], 16); set_vi(i9, i9 + 1u); } }
L_1028: { ++fl.t; set_vi(i11, i11 + 2u); }
L_1030: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1038: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1040: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[17], 16); set_vi(i9, i9 + 1u); } }
L_1048: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[18], 16); set_vi(i9, i9 + 1u); } }
L_1050: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[19], 16); set_vi(i9, i9 + 1u); } }
L_1058: { ++fl.t; set_vi(i11, i11 + 1u); }
L_1060: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1068: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_1070: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n30[0])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n25 = vsel(n25, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1078: { ++fl.t; const v4u uv = vmuln(n21, vsplat(n30[0])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n26 = vsel(n26, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_1080: { ++fl.t; }
L_1088: { ++fl.t; }
L_1090: { ++fl.t; const v4u uv = vsubn(n17, vsplat(n25[3])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_1098: { ++fl.t; const v4u uv = vsubn(n21, vsplat(n26[3])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_10A0: { ++fl.t; set_vi(i1, 0u + i7); }
L_10A8: { ++fl.t; }
L_10B0: { ++fl.t; pend = 0u == i1; }
L_10B8: { ++fl.t; }
    if (pend) { pend = false; goto L_10F0; }
L_10C0: { ++fl.t; { const Reg128 m = r.vf[25]; r.vf[25].w[0] = m.w[1]; r.vf[25].w[1] = m.w[2]; r.vf[25].w[2] = m.w[3]; r.vf[25].w[3] = m.w[0]; } n25 = vfix(vload(r.vf[25])); }
L_10C8: { ++fl.t; { const Reg128 m = r.vf[26]; r.vf[26].w[0] = m.w[1]; r.vf[26].w[1] = m.w[2]; r.vf[26].w[2] = m.w[3]; r.vf[26].w[3] = m.w[0]; } n26 = vfix(vload(r.vf[26])); }
L_10D0: { ++fl.t; set_vi(i1, i1 - 1u); }
L_10D8: { ++fl.t; }
L_10E0: { ++fl.t; pend = true; }
L_10E8: { ++fl.t; }
    if (pend) { pend = false; goto L_10B0; }
L_10F0: { ++fl.t; const v4u uv = vsubn(n26, n25); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_10F8: { ++fl.t; }
L_1100: { ++fl.t; }
L_1108: { ++fl.t; }
L_1110: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[25].w[0], r.vf[27].w[0]); fl.end_q(r, qb, 7u); } }
L_1118: { ++fl.t; }
L_1120: { ++fl.t; }
L_1128: { ++fl.t; }
L_1130: { ++fl.t; const v4u uv = vsubn(n21, n17); vstore(r.vf[25], uv); n25 = uv; }
L_1138: { ++fl.t; const v4u uv = vsubn(n22, n18); vstore(r.vf[26], uv); n26 = uv; }
L_1140: { ++fl.t; const v4u uv = vsubn(n23, n19); vstore(r.vf[27], uv); n27 = uv; }
L_1148: { ++fl.t; fl.flush_q(r); const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vfix(vsplat(r.q))); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_1150: { ++fl.t; }
L_1158: { ++fl.t; }
L_1160: { ++fl.t; }
L_1168: { ++fl.t; const v4u uv = vabs(vload(r.vf[29])); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n29 = vfix(vload(r.vf[29])); }
L_1170: { ++fl.t; }
L_1178: { ++fl.t; }
L_1180: { ++fl.t; }
L_1188: { ++fl.t; const v4u uv = vmuln(n25, vsplat(n29[0])); vstore(r.vf[25], uv); n25 = uv; }
L_1190: { ++fl.t; const v4u uv = vmuln(n26, vsplat(n29[0])); vstore(r.vf[26], uv); n26 = uv; }
L_1198: { ++fl.t; const v4u uv = vmuln(n27, vsplat(n29[0])); vstore(r.vf[27], uv); n27 = uv; }
L_11A0: { ++fl.t; }
L_11A8: { ++fl.t; const v4u uv = vaddn(n25, n17); vstore(r.vf[25], uv); n25 = uv; }
L_11B0: { ++fl.t; const v4u uv = vaddn(n26, n18); vstore(r.vf[26], uv); n26 = uv; }
L_11B8: { ++fl.t; const v4u uv = vaddn(n27, n19); vstore(r.vf[27], uv); n27 = uv; }
L_11C0: { ++fl.t; }
L_11C8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i12) * 8u) & 16383u; pendj = true; }
L_11D0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_11D8: { ++fl.t; set_vi(i1, i14 + 0u); }
L_11E0: { ++fl.t; set_vi(i2, i8 + 0u); }
L_11E8: { ++fl.t; set_vi(i3, i9 + 1u); }
L_11F0: { ++fl.t; set_vi(i11, 0u + 32767u); }
L_11F8: { ++fl.t; set_vi(i11, i11 + 1u); }
L_1200: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); const std::uint32_t v = i11; std::memcpy(q + 0, &v, 4); } }
L_1208: { ++fl.t; }
L_1210: { ++fl.t; }
L_1218: { ++fl.t; }
L_1220: { ++fl.t; vu::kick(1, i9); }
L_1228: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 1006u) + 0, 2); set_vi(i6, v); } }
L_1230: { ++fl.t; set_vi(i11, i10 + 32767u); }
L_1238: { ++fl.t; set_vi(i11, i11 + 1u); }
L_1240: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); const std::uint32_t v = i11; std::memcpy(q + 0, &v, 4); } }
L_1248: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 0u); std::memcpy(&r.vf[20], q, 16); } n20 = vfix(vload(r.vf[20])); }
L_1250: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 1u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_1258: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 2u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_1260: { ++fl.t; }
L_1268: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n20[0])); vstore(r.acc, uv); nacc = uv; }
L_1270: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n20[1])); vstore(r.acc, uv); nacc = uv; }
L_1278: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n20[2])); vstore(r.acc, uv); nacc = uv; }
L_1280: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n20[3])); vstore(r.vf[27], uv); n27 = uv; }
L_1288: { ++fl.t; }
L_1290: { ++fl.t; }
L_1298: { ++fl.t; }
L_12A0: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[27].w[3]); fl.end_q(r, qb, 7u); } }
L_12A8: { ++fl.t; }
L_12B0: { ++fl.t; }
L_12B8: { ++fl.t; }
L_12C0: { ++fl.t; }
L_12C8: { ++fl.t; }
L_12D0: { ++fl.t; }
L_12D8: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n27, vfix(vsplat(r.q))); vstore(r.vf[27], uv); n27 = uv; }
L_12E0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n22, vfix(vsplat(r.q))); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_12E8: { ++fl.t; const v4u uv = vftoi(vload(r.vf[21]), 0); vstore(r.vf[28], uv); }
L_12F0: { ++fl.t; set_vi(i14, 608u); pend = true; }
L_12F8: { ++fl.t; const v4u uv = vftoi(vload(r.vf[27]), 4); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
    if (pend) { pend = false; goto L_0960; }
L_1300: { ++fl.t; set_vi(i10, i10 + 4294967295u); }
L_1308: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 0u); std::memcpy(q, &r.vf[29], 16); } }
L_1310: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 1u); std::memcpy(q, &r.vf[28], 16); } }
L_1318: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 2u); std::memcpy(q + 0, &r.vf[27].w[0], 4); std::memcpy(q + 4, &r.vf[27].w[1], 4); std::memcpy(q + 8, &r.vf[27].w[2], 4); } }
L_1320: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 2u); const std::uint32_t v = i12; std::memcpy(q + 12, &v, 4); } }
L_1328: { ++fl.t; set_vi(i3, i3 + 3u); }
L_1330: { ++fl.t; set_vi(i2, i2 + 3u); }
L_1338: { ++fl.t; pend = 0u != i10; }
L_1340: { ++fl.t; }
    if (pend) { pend = false; goto L_1248; }
L_1348: { ++fl.t; vu::kick(1, i9); }
L_1350: { ++fl.t; }
L_1358: { ++fl.t; set_vi(i14, i1 + 0u); }
L_1360: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1368: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, 4976u);
    return;
dispatch:
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_A7C37BFA9B2A1ED3(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n7 = vfix(vload(r.vf[7]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n20 = vfix(vload(r.vf[20]));
    v4u n22 = vfix(vload(r.vf[22]));
    v4u n27 = vfix(vload(r.vf[27]));
    v4u nacc = vfix(vload(r.acc));
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i10 = r.vi[10];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i14 = r.vi[14];
    std::uint16_t i15 = r.vi[15];
    goto L_08D8;
L_04F8: { ++fl.t; set_vi(i12, 0u + 4080u); }
L_0500: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_0508: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, 1296u);
    return;
L_08D8: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_08E0: { ++fl.t; }
L_08E8: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_08F0: { ++fl.t; }
    if (pend) { pend = false; goto L_0920; }
L_08F8: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0900: { ++fl.t; set_vi(i9, i4 + 0u); }
L_0908: { ++fl.t; set_vi(i10, 0u + i11); }
L_0910: { ++fl.t; set_vi(i15, 292u); pend = true; }
L_0918: { ++fl.t; }
    if (pend) { pend = false; goto L_0C78; }
L_0920: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_0928: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, 2352u);
    return;
L_0C78: { ++fl.t; set_vi(i1, i14 + 0u); }
L_0C80: { ++fl.t; set_vi(i2, i8 + 0u); }
L_0C88: { ++fl.t; set_vi(i3, i9 + 1u); }
L_0C90: { ++fl.t; set_vi(i11, 0u + 32767u); }
L_0C98: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0CA0: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); const std::uint32_t v = i11; std::memcpy(q + 0, &v, 4); } }
L_0CA8: { ++fl.t; }
L_0CB0: { ++fl.t; }
L_0CB8: { ++fl.t; }
L_0CC0: { ++fl.t; vu::kick(1, i9); }
L_0CC8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 1006u) + 0, 2); set_vi(i6, v); } }
L_0CD0: { ++fl.t; set_vi(i11, i10 + 32767u); }
L_0CD8: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0CE0: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); const std::uint32_t v = i11; std::memcpy(q + 0, &v, 4); } }
L_0CE8: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 0u); std::memcpy(&r.vf[20], q, 16); } n20 = vfix(vload(r.vf[20])); }
L_0CF0: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 1u); std::memcpy(&r.vf[21], q, 16); } }
L_0CF8: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 2u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0D00: { ++fl.t; }
L_0D08: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n20[0])); vstore(r.acc, uv); nacc = uv; }
L_0D10: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n20[1])); vstore(r.acc, uv); nacc = uv; }
L_0D18: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n20[2])); vstore(r.acc, uv); nacc = uv; }
L_0D20: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n20[3])); vstore(r.vf[27], uv); n27 = uv; }
L_0D28: { ++fl.t; }
L_0D30: { ++fl.t; }
L_0D38: { ++fl.t; }
L_0D40: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[27].w[3]); fl.end_q(r, qb, 7u); } }
L_0D48: { ++fl.t; }
L_0D50: { ++fl.t; }
L_0D58: { ++fl.t; }
L_0D60: { ++fl.t; }
L_0D68: { ++fl.t; }
L_0D70: { ++fl.t; }
L_0D78: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n27, vfix(vsplat(r.q))); vstore(r.vf[27], uv); n27 = uv; }
L_0D80: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n22, vfix(vsplat(r.q))); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0D88: { ++fl.t; const v4u uv = vftoi(vload(r.vf[21]), 0); vstore(r.vf[28], uv); }
L_0D90: { ++fl.t; set_vi(i14, 436u); pend = true; }
L_0D98: { ++fl.t; const v4u uv = vftoi(vload(r.vf[27]), 4); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
    if (pend) { pend = false; goto L_04F8; }
L_0DA0: { ++fl.t; set_vi(i10, i10 + 4294967295u); }
L_0DA8: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 0u); std::memcpy(q, &r.vf[29], 16); } }
L_0DB0: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 1u); std::memcpy(q, &r.vf[28], 16); } }
L_0DB8: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 2u); std::memcpy(q + 0, &r.vf[27].w[0], 4); std::memcpy(q + 4, &r.vf[27].w[1], 4); std::memcpy(q + 8, &r.vf[27].w[2], 4); } }
L_0DC0: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 2u); const std::uint32_t v = i12; std::memcpy(q + 12, &v, 4); } }
L_0DC8: { ++fl.t; set_vi(i3, i3 + 3u); }
L_0DD0: { ++fl.t; set_vi(i2, i2 + 3u); }
L_0DD8: { ++fl.t; pend = 0u != i10; }
L_0DE0: { ++fl.t; }
    if (pend) { pend = false; goto L_0CE8; }
L_0DE8: { ++fl.t; vu::kick(1, i9); }
L_0DF0: { ++fl.t; }
L_0DF8: { ++fl.t; set_vi(i14, i1 + 0u); }
L_0E00: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E08: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, 3600u);
    return;
dispatch:
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[6] = i6; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_A845DC88010DB0CF(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n7 = vfix(vload(r.vf[7]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n12 = vfix(vload(r.vf[12]));
    v4u n17 = vfix(vload(r.vf[17]));
    v4u n18 = vfix(vload(r.vf[18]));
    v4u n19 = vfix(vload(r.vf[19]));
    v4u n20 = vfix(vload(r.vf[20]));
    v4u n21 = vfix(vload(r.vf[21]));
    v4u n22 = vfix(vload(r.vf[22]));
    v4u n23 = vfix(vload(r.vf[23]));
    v4u n25 = vfix(vload(r.vf[25]));
    v4u n26 = vfix(vload(r.vf[26]));
    v4u n27 = vfix(vload(r.vf[27]));
    v4u n29 = vfix(vload(r.vf[29]));
    v4u n30 = vfix(vload(r.vf[30]));
    v4u nacc = vfix(vload(r.acc));
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
    goto L_0938;
L_0640: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 29u); std::memcpy(&r.vf[12], q, 16); } n12 = vfix(vload(r.vf[12])); }
L_0648: { ++fl.t; set_vi(i12, 0u + 1u); }
L_0650: { ++fl.t; }
L_0658: { ++fl.t; pend = i6 == i12; }
L_0660: { ++fl.t; }
    if (pend) { pend = false; goto L_0738; }
L_0668: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n12, vfix(vsplat(r.q))); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u})); n12 = vsel(n12, uv, v4u{0u, 0xFFFFFFFFu, 0u, 0u}); }
L_0670: { ++fl.t; }
L_0678: { ++fl.t; }
L_0680: { ++fl.t; }
L_0688: { ++fl.t; const v4u uv = vaddn(n12, vsplat(n12[1])); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vsel(n12, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0690: { ++fl.t; }
L_0698: { ++fl.t; }
L_06A0: { ++fl.t; }
L_06A8: { ++fl.t; const v4u uv = vmin(vload(r.vf[12]), vsplat(r.vf[12].w[3])); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vfix(vload(r.vf[12])); }
L_06B0: { ++fl.t; }
L_06B8: { ++fl.t; }
L_06C0: { ++fl.t; }
L_06C8: { ++fl.t; const v4u uv = vmax(vload(r.vf[12]), vsplat(r.vf[12].w[2])); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vfix(vload(r.vf[12])); }
L_06D0: { ++fl.t; }
L_06D8: { ++fl.t; }
L_06E0: { ++fl.t; }
L_06E8: { ++fl.t; const v4u uv = vftoi(vload(r.vf[12]), 4); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n12 = vfix(vload(r.vf[12])); }
L_06F0: { ++fl.t; }
L_06F8: { ++fl.t; }
L_0700: { ++fl.t; }
L_0708: { ++fl.t; set_vi(i12, r.vf[12].w[0]); }
L_0710: { ++fl.t; }
L_0718: { ++fl.t; }
L_0720: { ++fl.t; }
L_0728: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_0730: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0738: { ++fl.t; set_vi(i12, 0u + 4080u); }
L_0740: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_0748: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, 1872u);
    return;
L_0938: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_0940: { ++fl.t; }
L_0948: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_0950: { ++fl.t; }
    if (pend) { pend = false; goto L_0B60; }
L_0958: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i5, 0u + 64u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0960: { ++fl.t; set_vi(i6, 0u + 1u); }
L_0968: { ++fl.t; set_vi(i7, 0u + 0u); }
L_0970: { ++fl.t; set_vi(i8, i3 + 0u); }
L_0978: { ++fl.t; set_vi(i9, i2 + 0u); }
L_0980: { ++fl.t; set_vi(i10, 0u + i11); }
L_0988: { ++fl.t; set_vi(i11, 0u + 0u); }
L_0990: { ++fl.t; set_vi(i15, 308u); pend = true; }
L_0998: { ++fl.t; }
    if (pend) { pend = false; goto L_0BB0; }
L_09A0: { ++fl.t; set_vi(i10, i10 - 1u); }
L_09A8: { ++fl.t; }
L_09B0: { ++fl.t; pend = 0u != i10; }
L_09B8: { ++fl.t; }
    if (pend) { pend = false; goto L_0990; }
L_09C0: { ++fl.t; set_vi(i8, i2 + 0u); }
L_09C8: { ++fl.t; set_vi(i15, 315u); pend = true; }
L_09D0: { ++fl.t; }
    if (pend) { pend = false; goto L_0B70; }
L_09D8: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_09E0: { ++fl.t; }
L_09E8: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_09F0: { ++fl.t; }
    if (pend) { pend = false; goto L_0B60; }
L_09F8: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i5, 0u + 512u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0A00: { ++fl.t; set_vi(i6, 0u + 8u); }
L_0A08: { ++fl.t; set_vi(i7, 0u + 1u); }
L_0A10: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0A18: { ++fl.t; set_vi(i9, i3 + 0u); }
L_0A20: { ++fl.t; set_vi(i10, 0u + i11); }
L_0A28: { ++fl.t; set_vi(i11, 0u + 0u); }
L_0A30: { ++fl.t; set_vi(i15, 328u); pend = true; }
L_0A38: { ++fl.t; }
    if (pend) { pend = false; goto L_0BB0; }
L_0A40: { ++fl.t; set_vi(i10, i10 - 1u); }
L_0A48: { ++fl.t; }
L_0A50: { ++fl.t; pend = 0u != i10; }
L_0A58: { ++fl.t; }
    if (pend) { pend = false; goto L_0A30; }
L_0A60: { ++fl.t; set_vi(i8, i3 + 0u); }
L_0A68: { ++fl.t; set_vi(i15, 335u); pend = true; }
L_0A70: { ++fl.t; }
    if (pend) { pend = false; goto L_0B70; }
L_0A78: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_0A80: { ++fl.t; }
L_0A88: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_0A90: { ++fl.t; }
    if (pend) { pend = false; goto L_0B60; }
L_0A98: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i5, 0u + 256u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0AA0: { ++fl.t; set_vi(i6, 0u + 4u); }
L_0AA8: { ++fl.t; set_vi(i7, 0u + 1u); }
L_0AB0: { ++fl.t; set_vi(i8, i3 + 0u); }
L_0AB8: { ++fl.t; set_vi(i9, i2 + 0u); }
L_0AC0: { ++fl.t; set_vi(i10, 0u + i11); }
L_0AC8: { ++fl.t; set_vi(i11, 0u + 0u); }
L_0AD0: { ++fl.t; set_vi(i15, 348u); pend = true; }
L_0AD8: { ++fl.t; }
    if (pend) { pend = false; goto L_0BB0; }
L_0AE0: { ++fl.t; set_vi(i10, i10 - 1u); }
L_0AE8: { ++fl.t; }
L_0AF0: { ++fl.t; pend = 0u != i10; }
L_0AF8: { ++fl.t; }
    if (pend) { pend = false; goto L_0AD0; }
L_0B00: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0B08: { ++fl.t; set_vi(i15, 355u); pend = true; }
L_0B10: { ++fl.t; }
    if (pend) { pend = false; goto L_0B70; }
L_0B18: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_0B20: { ++fl.t; }
L_0B28: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_0B30: { ++fl.t; }
    if (pend) { pend = false; goto L_0B60; }
L_0B38: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0B40: { ++fl.t; set_vi(i9, i4 + 0u); }
L_0B48: { ++fl.t; set_vi(i10, 0u + i11); }
L_0B50: { ++fl.t; set_vi(i15, 364u); pend = true; }
L_0B58: { ++fl.t; }
    if (pend) { pend = false; goto L_0EB8; }
L_0B60: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_0B68: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0B70: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 0u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_0B78: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 1u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0B80: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 2u); std::memcpy(&r.vf[23], q, 16); } n23 = vfix(vload(r.vf[23])); }
L_0B88: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[21], 16); set_vi(i9, i9 + 1u); } }
L_0B90: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[22], 16); set_vi(i9, i9 + 1u); } }
L_0B98: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[23], 16); set_vi(i9, i9 + 1u); } }
L_0BA0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0BA8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0BB0: { ++fl.t; { const std::uint8_t *q = qword(mem, i8); std::memcpy(&r.vf[17], q, 16); set_vi(i8, i8 + 1u); } n17 = vfix(vload(r.vf[17])); }
L_0BB8: { ++fl.t; { const std::uint8_t *q = qword(mem, i8); std::memcpy(&r.vf[18], q, 16); set_vi(i8, i8 + 1u); } n18 = vfix(vload(r.vf[18])); }
L_0BC0: { ++fl.t; { const std::uint8_t *q = qword(mem, i8); std::memcpy(&r.vf[19], q, 16); set_vi(i8, i8 + 1u); } n19 = vfix(vload(r.vf[19])); }
L_0BC8: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 0u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_0BD0: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 1u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0BD8: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 2u); std::memcpy(&r.vf[23], q, 16); } n23 = vfix(vload(r.vf[23])); }
L_0BE0: { ++fl.t; }
L_0BE8: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[17], r.vf[17].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0BF0: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[21], r.vf[21].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0BF8: { ++fl.t; }
L_0C00: { ++fl.t; }
L_0C08: { ++fl.t; }
L_0C10: { ++fl.t; set_vi(i1, fl.clip() & 0xFFFu); }
L_0C18: { ++fl.t; set_vi(i12, i1 & i5); }
L_0C20: { ++fl.t; }
L_0C28: { ++fl.t; pend = 0u == i12; }
L_0C30: { ++fl.t; }
    if (pend) { pend = false; goto L_0CA8; }
L_0C38: { ++fl.t; set_vi(i12, i1 & i6); }
L_0C40: { ++fl.t; }
L_0C48: { ++fl.t; pend = 0u == i12; }
L_0C50: { ++fl.t; }
    if (pend) { pend = false; goto L_0C68; }
L_0C58: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0C60: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0C68: { ++fl.t; set_vi(i12, 399u); pend = true; }
L_0C70: { ++fl.t; }
    if (pend) { pend = false; goto L_0D50; }
L_0C78: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[25], 16); set_vi(i9, i9 + 1u); } }
L_0C80: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[26], 16); set_vi(i9, i9 + 1u); } }
L_0C88: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[27], 16); set_vi(i9, i9 + 1u); } }
L_0C90: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0C98: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0CA0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0CA8: { ++fl.t; set_vi(i12, i1 & i6); }
L_0CB0: { ++fl.t; }
L_0CB8: { ++fl.t; pend = 0u == i12; }
L_0CC0: { ++fl.t; }
    if (pend) { pend = false; goto L_0D20; }
L_0CC8: { ++fl.t; set_vi(i12, 411u); pend = true; }
L_0CD0: { ++fl.t; }
    if (pend) { pend = false; goto L_0D50; }
L_0CD8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[17], 16); set_vi(i9, i9 + 1u); } }
L_0CE0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[18], 16); set_vi(i9, i9 + 1u); } }
L_0CE8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[19], 16); set_vi(i9, i9 + 1u); } }
L_0CF0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[25], 16); set_vi(i9, i9 + 1u); } }
L_0CF8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[26], 16); set_vi(i9, i9 + 1u); } }
L_0D00: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[27], 16); set_vi(i9, i9 + 1u); } }
L_0D08: { ++fl.t; set_vi(i11, i11 + 2u); }
L_0D10: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0D18: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0D20: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[17], 16); set_vi(i9, i9 + 1u); } }
L_0D28: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[18], 16); set_vi(i9, i9 + 1u); } }
L_0D30: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[19], 16); set_vi(i9, i9 + 1u); } }
L_0D38: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0D40: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0D48: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0D50: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n30[0])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n25 = vsel(n25, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0D58: { ++fl.t; const v4u uv = vmuln(n21, vsplat(n30[0])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n26 = vsel(n26, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0D60: { ++fl.t; }
L_0D68: { ++fl.t; }
L_0D70: { ++fl.t; const v4u uv = vsubn(n17, vsplat(n25[3])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0D78: { ++fl.t; const v4u uv = vsubn(n21, vsplat(n26[3])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0D80: { ++fl.t; set_vi(i1, 0u + i7); }
L_0D88: { ++fl.t; }
L_0D90: { ++fl.t; pend = 0u == i1; }
L_0D98: { ++fl.t; }
    if (pend) { pend = false; goto L_0DD0; }
L_0DA0: { ++fl.t; { const Reg128 m = r.vf[25]; r.vf[25].w[0] = m.w[1]; r.vf[25].w[1] = m.w[2]; r.vf[25].w[2] = m.w[3]; r.vf[25].w[3] = m.w[0]; } n25 = vfix(vload(r.vf[25])); }
L_0DA8: { ++fl.t; { const Reg128 m = r.vf[26]; r.vf[26].w[0] = m.w[1]; r.vf[26].w[1] = m.w[2]; r.vf[26].w[2] = m.w[3]; r.vf[26].w[3] = m.w[0]; } n26 = vfix(vload(r.vf[26])); }
L_0DB0: { ++fl.t; set_vi(i1, i1 - 1u); }
L_0DB8: { ++fl.t; }
L_0DC0: { ++fl.t; pend = true; }
L_0DC8: { ++fl.t; }
    if (pend) { pend = false; goto L_0D90; }
L_0DD0: { ++fl.t; const v4u uv = vsubn(n26, n25); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0DD8: { ++fl.t; }
L_0DE0: { ++fl.t; }
L_0DE8: { ++fl.t; }
L_0DF0: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[25].w[0], r.vf[27].w[0]); fl.end_q(r, qb, 7u); } }
L_0DF8: { ++fl.t; }
L_0E00: { ++fl.t; }
L_0E08: { ++fl.t; }
L_0E10: { ++fl.t; const v4u uv = vsubn(n21, n17); vstore(r.vf[25], uv); n25 = uv; }
L_0E18: { ++fl.t; const v4u uv = vsubn(n22, n18); vstore(r.vf[26], uv); n26 = uv; }
L_0E20: { ++fl.t; const v4u uv = vsubn(n23, n19); vstore(r.vf[27], uv); n27 = uv; }
L_0E28: { ++fl.t; fl.flush_q(r); const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vfix(vsplat(r.q))); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0E30: { ++fl.t; }
L_0E38: { ++fl.t; }
L_0E40: { ++fl.t; }
L_0E48: { ++fl.t; const v4u uv = vabs(vload(r.vf[29])); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n29 = vfix(vload(r.vf[29])); }
L_0E50: { ++fl.t; }
L_0E58: { ++fl.t; }
L_0E60: { ++fl.t; }
L_0E68: { ++fl.t; const v4u uv = vmuln(n25, vsplat(n29[0])); vstore(r.vf[25], uv); n25 = uv; }
L_0E70: { ++fl.t; const v4u uv = vmuln(n26, vsplat(n29[0])); vstore(r.vf[26], uv); n26 = uv; }
L_0E78: { ++fl.t; const v4u uv = vmuln(n27, vsplat(n29[0])); vstore(r.vf[27], uv); n27 = uv; }
L_0E80: { ++fl.t; }
L_0E88: { ++fl.t; const v4u uv = vaddn(n25, n17); vstore(r.vf[25], uv); n25 = uv; }
L_0E90: { ++fl.t; const v4u uv = vaddn(n26, n18); vstore(r.vf[26], uv); n26 = uv; }
L_0E98: { ++fl.t; const v4u uv = vaddn(n27, n19); vstore(r.vf[27], uv); n27 = uv; }
L_0EA0: { ++fl.t; }
L_0EA8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i12) * 8u) & 16383u; pendj = true; }
L_0EB0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0EB8: { ++fl.t; set_vi(i1, i14 + 0u); }
L_0EC0: { ++fl.t; set_vi(i2, i8 + 0u); }
L_0EC8: { ++fl.t; set_vi(i3, i9 + 1u); }
L_0ED0: { ++fl.t; set_vi(i11, 0u + 32767u); }
L_0ED8: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0EE0: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); const std::uint32_t v = i11; std::memcpy(q + 0, &v, 4); } }
L_0EE8: { ++fl.t; }
L_0EF0: { ++fl.t; }
L_0EF8: { ++fl.t; }
L_0F00: { ++fl.t; vu::kick(1, i9); }
L_0F08: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 1006u) + 0, 2); set_vi(i6, v); } }
L_0F10: { ++fl.t; set_vi(i11, i10 + 32767u); }
L_0F18: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0F20: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); const std::uint32_t v = i11; std::memcpy(q + 0, &v, 4); } }
L_0F28: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 0u); std::memcpy(&r.vf[20], q, 16); } n20 = vfix(vload(r.vf[20])); }
L_0F30: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 1u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_0F38: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 2u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0F40: { ++fl.t; }
L_0F48: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n20[0])); vstore(r.acc, uv); nacc = uv; }
L_0F50: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n20[1])); vstore(r.acc, uv); nacc = uv; }
L_0F58: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n20[2])); vstore(r.acc, uv); nacc = uv; }
L_0F60: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n20[3])); vstore(r.vf[27], uv); n27 = uv; }
L_0F68: { ++fl.t; }
L_0F70: { ++fl.t; }
L_0F78: { ++fl.t; }
L_0F80: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[27].w[3]); fl.end_q(r, qb, 7u); } }
L_0F88: { ++fl.t; }
L_0F90: { ++fl.t; }
L_0F98: { ++fl.t; }
L_0FA0: { ++fl.t; }
L_0FA8: { ++fl.t; }
L_0FB0: { ++fl.t; }
L_0FB8: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n27, vfix(vsplat(r.q))); vstore(r.vf[27], uv); n27 = uv; }
L_0FC0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n22, vfix(vsplat(r.q))); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0FC8: { ++fl.t; const v4u uv = vftoi(vload(r.vf[21]), 0); vstore(r.vf[28], uv); }
L_0FD0: { ++fl.t; set_vi(i14, 508u); pend = true; }
L_0FD8: { ++fl.t; const v4u uv = vftoi(vload(r.vf[27]), 4); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
    if (pend) { pend = false; goto L_0640; }
L_0FE0: { ++fl.t; set_vi(i10, i10 + 4294967295u); }
L_0FE8: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 0u); std::memcpy(q, &r.vf[29], 16); } }
L_0FF0: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 1u); std::memcpy(q, &r.vf[28], 16); } }
L_0FF8: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 2u); std::memcpy(q + 0, &r.vf[27].w[0], 4); std::memcpy(q + 4, &r.vf[27].w[1], 4); std::memcpy(q + 8, &r.vf[27].w[2], 4); } }
L_1000: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 2u); const std::uint32_t v = i12; std::memcpy(q + 12, &v, 4); } }
L_1008: { ++fl.t; set_vi(i3, i3 + 3u); }
L_1010: { ++fl.t; set_vi(i2, i2 + 3u); }
L_1018: { ++fl.t; pend = 0u != i10; }
L_1020: { ++fl.t; }
    if (pend) { pend = false; goto L_0F28; }
L_1028: { ++fl.t; vu::kick(1, i9); }
L_1030: { ++fl.t; }
L_1038: { ++fl.t; set_vi(i14, i1 + 0u); }
L_1040: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_1048: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, 4176u);
    return;
dispatch:
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

void vu1_A902B7A514667888(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n1 = vfix(vload(r.vf[1]));
    v4u n2 = vfix(vload(r.vf[2]));
    v4u n3 = vfix(vload(r.vf[3]));
    v4u n4 = vfix(vload(r.vf[4]));
    v4u n13 = vfix(vload(r.vf[13]));
    v4u n20 = vfix(vload(r.vf[20]));
    v4u n21 = vfix(vload(r.vf[21]));
    v4u n22 = vfix(vload(r.vf[22]));
    v4u n23 = vfix(vload(r.vf[23]));
    v4u n27 = vfix(vload(r.vf[27]));
    v4u n29 = vfix(vload(r.vf[29]));
    v4u nacc = vfix(vload(r.acc));
    std::uint16_t i1 = r.vi[1];
    std::uint16_t i2 = r.vi[2];
    std::uint16_t i3 = r.vi[3];
    std::uint16_t i4 = r.vi[4];
    std::uint16_t i5 = r.vi[5];
    std::uint16_t i6 = r.vi[6];
    std::uint16_t i7 = r.vi[7];
    std::uint16_t i8 = r.vi[8];
    std::uint16_t i9 = r.vi[9];
    std::uint16_t i11 = r.vi[11];
    std::uint16_t i12 = r.vi[12];
    std::uint16_t i14 = r.vi[14];
    goto L_03C8;
L_0050: { ++fl.t; set_vi(i2, vu::top()); }
L_0058: { ++fl.t; set_vi(i5, i2 + 0u); }
L_0060: { ++fl.t; set_vi(i3, i2 + 254u); }
L_0068: { ++fl.t; set_vi(i4, i3 + 0u); }
L_0070: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5) + 4, 2); set_vi(i6, v); } }
L_0078: { ++fl.t; set_vi(i5, i5 + 1u); }
L_0080: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(&r.vf[23], q, 16); } n23 = vfix(vload(r.vf[23])); }
L_0088: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5) + 0, 2); set_vi(i7, v); } }
L_0090: { ++fl.t; set_vi(i11, 0u + 32767u); }
L_0098: { ++fl.t; set_vi(i7, i11 & i7); }
L_00A0: { ++fl.t; set_vi(i5, i5 + 1u); }
L_00A8: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &r.vf[23], 16); set_vi(i4, i4 + 1u); } }
L_00B0: { ++fl.t; pend = 0u == i6; }
L_00B8: { ++fl.t; }
    if (pend) { pend = false; goto L_0108; }
L_00C0: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_00C8: { ++fl.t; }
    if (pend) { pend = false; goto L_0190; }
L_00D0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 12, 2); set_vi(i8, v); } }
L_00D8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[27], q, 16); set_vi(i5, i5 + 1u); } n27 = vfix(vload(r.vf[27])); }
L_00E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[28], q, 16); set_vi(i5, i5 + 1u); } }
L_00E8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[30].w[0], q + 0, 4); std::memcpy(&r.vf[30].w[1], q + 4, 4); std::memcpy(&r.vf[30].w[2], q + 8, 4); set_vi(i5, i5 + 1u); } }
L_00F0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[29], q, 16); set_vi(i5, i5 + 1u); } n29 = vfix(vload(r.vf[29])); }
L_00F8: { ++fl.t; pend = true; }
L_0100: { ++fl.t; }
    if (pend) { pend = false; goto L_0238; }
L_0108: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[20], q, 16); } n20 = vfix(vload(r.vf[20])); }
L_0110: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_0118: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0120: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 4u); std::memcpy(&r.vf[23], q, 16); } n23 = vfix(vload(r.vf[23])); }
L_0128: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &r.vf[20], 16); } }
L_0130: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &r.vf[21], 16); } }
L_0138: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q, &r.vf[22], 16); } }
L_0140: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(q, &r.vf[23], 16); } }
L_0148: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 12, 2); set_vi(i9, v); } }
L_0150: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(&r.vf[31], q, 16); } }
L_0158: { ++fl.t; }
L_0160: { ++fl.t; vu::kick(1, i3); }
L_0168: { ++fl.t; }
L_0170: { ++fl.t; ending = true; }
L_0178: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.tpc = 384u; return; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; vu::interpret(1, 384u);
    return;
L_0190: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[20], q, 16); } n20 = vfix(vload(r.vf[20])); }
L_0198: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_01A0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_01A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 4u); std::memcpy(&r.vf[23], q, 16); } n23 = vfix(vload(r.vf[23])); }
L_01B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 5u); std::memcpy(&r.vf[24], q, 16); } }
L_01B8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 6u); std::memcpy(&r.vf[25], q, 16); } }
L_01C0: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &r.vf[20], 16); } }
L_01C8: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &r.vf[21], 16); } }
L_01D0: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q, &r.vf[22], 16); } }
L_01D8: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(q, &r.vf[23], 16); } }
L_01E0: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 4u); std::memcpy(q, &r.vf[24], 16); } }
L_01E8: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 5u); std::memcpy(q, &r.vf[25], 16); } }
L_01F0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 12, 2); set_vi(i9, v); } }
L_01F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(&r.vf[31], q, 16); } }
L_0200: { ++fl.t; }
L_0208: { ++fl.t; vu::kick(1, i3); }
L_0210: { ++fl.t; }
L_0218: { ++fl.t; ending = true; }
L_0220: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.tpc = 552u; return; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; vu::interpret(1, 552u);
    return;
L_0238: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n27[0])); { const std::uint8_t *q = qword(mem, 0u + 4u); std::memcpy(&r.vf[20], q, 16); } vstore(r.acc, uv); n20 = vfix(vload(r.vf[20])); nacc = uv; }
L_0240: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n27[1])); { const std::uint8_t *q = qword(mem, 0u + 5u); std::memcpy(&r.vf[21], q, 16); } vstore(r.acc, uv); n21 = vfix(vload(r.vf[21])); nacc = uv; }
L_0248: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n27[2])); { const std::uint8_t *q = qword(mem, 0u + 6u); std::memcpy(&r.vf[22], q, 16); } vstore(r.acc, uv); n22 = vfix(vload(r.vf[22])); nacc = uv; }
L_0250: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, 0u + 7u); std::memcpy(&r.vf[23], q, 16); } vstore(r.vf[13], uv); n23 = vfix(vload(r.vf[23])); n13 = uv; }
L_0258: { ++fl.t; }
L_0260: { ++fl.t; }
L_0268: { ++fl.t; }
L_0270: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[13].w[3]); fl.end_q(r, qb, 7u); } }
L_0278: { ++fl.t; const v4u uv = vmuln(n20, vsplat(n27[0])); vstore(r.acc, uv); nacc = uv; }
L_0280: { ++fl.t; const v4u uv = vmaddn(nacc, n21, vsplat(n27[1])); vstore(r.acc, uv); nacc = uv; }
L_0288: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vsplat(n27[2])); vstore(r.acc, uv); nacc = uv; }
L_0290: { ++fl.t; const v4u uv = vmaddn(nacc, n23, vsplat(0x3F800000u)); vstore(r.vf[23], uv); n23 = uv; }
L_0298: { ++fl.t; }
L_02A0: { ++fl.t; }
L_02A8: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n13, vfix(vsplat(r.q))); vstore(r.vf[13], uv); n13 = uv; }
L_02B0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n29, vfix(vsplat(r.q))); vstore(r.vf[22], vsel(vload(r.vf[22]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n22 = vsel(n22, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_02B8: { ++fl.t; }
L_02C0: { ++fl.t; }
L_02C8: { ++fl.t; const v4u uv = vftoi(vload(r.vf[13]), 4); vstore(r.vf[21], uv); n21 = vfix(vload(r.vf[21])); }
L_02D0: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[23], r.vf[23].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_02D8: { ++fl.t; set_vi(i14, 93u); pend = true; }
L_02E0: { ++fl.t; }
    if (pend) { pend = false; goto L_03D8; }
L_02E8: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &r.vf[22], 16); } }
L_02F0: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q + 0, &r.vf[21].w[0], 4); std::memcpy(q + 4, &r.vf[21].w[1], 4); std::memcpy(q + 8, &r.vf[21].w[2], 4); } }
L_02F8: { ++fl.t; set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); }
L_0300: { ++fl.t; pend = 0u == i1; }
L_0308: { ++fl.t; }
    if (pend) { pend = false; goto L_0320; }
L_0310: { ++fl.t; set_vi(i8, 0u + 32767u); }
L_0318: { ++fl.t; set_vi(i8, i8 + 1u); }
L_0320: { ++fl.t; set_vi(i8, i8 | i12); }
L_0328: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 2u); const std::uint32_t v = i8; std::memcpy(q + 12, &v, 4); } }
L_0330: { ++fl.t; r.vf[18].w[0] = r.vf[30].w[0]; r.vf[18].w[1] = r.vf[30].w[1]; r.vf[18].w[2] = r.vf[30].w[2]; r.vf[18].w[3] = r.vf[30].w[3]; }
L_0338: { ++fl.t; }
L_0340: { ++fl.t; }
L_0348: { ++fl.t; }
L_0350: { ++fl.t; const v4u uv = vftoi(vload(r.vf[18]), 0); vstore(r.vf[18], uv); }
L_0358: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 12, 2); set_vi(i8, v); } }
L_0360: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[27], q, 16); set_vi(i5, i5 + 1u); } n27 = vfix(vload(r.vf[27])); }
L_0368: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[28], q, 16); set_vi(i5, i5 + 1u); } }
L_0370: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[30].w[0], q + 0, 4); std::memcpy(&r.vf[30].w[1], q + 4, 4); std::memcpy(&r.vf[30].w[2], q + 8, 4); set_vi(i5, i5 + 1u); } }
L_0378: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[29], q, 16); set_vi(i5, i5 + 1u); } n29 = vfix(vload(r.vf[29])); }
L_0380: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &r.vf[18], 16); } }
L_0388: { ++fl.t; set_vi(i7, i7 + 4294967295u); }
L_0390: { ++fl.t; set_vi(i4, i4 + 3u); }
L_0398: { ++fl.t; pend = 0u != i7; }
L_03A0: { ++fl.t; }
    if (pend) { pend = false; goto L_0238; }
L_03A8: { ++fl.t; vu::kick(1, i3); }
L_03B0: { ++fl.t; }
L_03B8: { ++fl.t; ending = true; }
L_03C0: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; r.tpc = 968u; return; }
L_03C8: { ++fl.t; pend = true; }
L_03D0: { ++fl.t; }
    if (pend) { pend = false; goto L_0050; }
L_03D8: { ++fl.t; set_vi(i12, 0u + 4080u); }
L_03E0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_03E8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; vu::interpret(1, 1008u);
    return;
dispatch:
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[11] = i11; r.vi[12] = i12; r.vi[14] = i14; vu::interpret(1, jpc);
    return;
}

void vu1_AADE8C65E700F5E5(Vu0Regs &r, std::uint8_t *mem) {
    FlagPipe fl;
    fl.start(r);
    bool pend = false, pendj = false, ending = false;
    std::uint32_t jpc = 0;
    (void)pend;
    (void)pendj;
    (void)ending;
    (void)jpc;
    v4u n1 = vfix(vload(r.vf[1]));
    v4u n2 = vfix(vload(r.vf[2]));
    v4u n3 = vfix(vload(r.vf[3]));
    v4u n4 = vfix(vload(r.vf[4]));
    v4u n5 = vfix(vload(r.vf[5]));
    v4u n6 = vfix(vload(r.vf[6]));
    v4u n7 = vfix(vload(r.vf[7]));
    v4u n8 = vfix(vload(r.vf[8]));
    v4u n13 = vfix(vload(r.vf[13]));
    v4u n14 = vfix(vload(r.vf[14]));
    v4u n17 = vfix(vload(r.vf[17]));
    v4u n18 = vfix(vload(r.vf[18]));
    v4u n19 = vfix(vload(r.vf[19]));
    v4u n20 = vfix(vload(r.vf[20]));
    v4u n21 = vfix(vload(r.vf[21]));
    v4u n22 = vfix(vload(r.vf[22]));
    v4u n23 = vfix(vload(r.vf[23]));
    v4u n24 = vfix(vload(r.vf[24]));
    v4u n25 = vfix(vload(r.vf[25]));
    v4u n26 = vfix(vload(r.vf[26]));
    v4u n27 = vfix(vload(r.vf[27]));
    v4u n28 = vfix(vload(r.vf[28]));
    v4u n29 = vfix(vload(r.vf[29]));
    v4u n30 = vfix(vload(r.vf[30]));
    v4u n31 = vfix(vload(r.vf[31]));
    v4u nacc = vfix(vload(r.acc));
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
    goto L_0040;
L_0040: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5) + 4, 2); set_vi(i6, v); } }
L_0048: { ++fl.t; set_vi(i5, i5 + 1u); }
L_0050: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(&r.vf[12], q, 16); } }
L_0058: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5) + 0, 2); set_vi(i7, v); } }
L_0060: { ++fl.t; set_vi(i11, 0u + 32767u); }
L_0068: { ++fl.t; set_vi(i7, i11 & i7); }
L_0070: { ++fl.t; set_vi(i5, i5 + 1u); }
L_0078: { ++fl.t; { std::uint8_t *q = qword(mem, i4); std::memcpy(q, &r.vf[12], 16); set_vi(i4, i4 + 1u); } }
L_0080: { ++fl.t; pend = static_cast<std::int16_t>(i6) < 0; }
L_0088: { ++fl.t; }
    if (pend) { pend = false; goto L_01D8; }
L_0090: { ++fl.t; pend = i6 == 0u; }
L_0098: { ++fl.t; }
    if (pend) { pend = false; goto L_0150; }
L_00A0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 12, 2); set_vi(i8, v); } }
L_00A8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[27], q, 16); set_vi(i5, i5 + 1u); } n27 = vfix(vload(r.vf[27])); }
L_00B0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[28], q, 16); set_vi(i5, i5 + 1u); } n28 = vfix(vload(r.vf[28])); }
L_00B8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[30], q, 16); set_vi(i5, i5 + 1u); } n30 = vfix(vload(r.vf[30])); }
L_00C0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5); std::memcpy(&r.vf[29], q, 16); set_vi(i5, i5 + 1u); } n29 = vfix(vload(r.vf[29])); }
L_00C8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 31u) + 4, 2); set_vi(i12, v); } }
L_00D0: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 30u); std::memcpy(&r.vf[1], q, 16); } n1 = vfix(vload(r.vf[1])); }
L_00D8: { ++fl.t; pend = 0u == i12; }
L_00E0: { ++fl.t; }
    if (pend) { pend = false; goto L_00F0; }
L_00E8: { ++fl.t; const v4u uv = vaddn(n29, n1); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u})); flags(r, r.vf[29], 12u); fl.set_mac(r.mac, r.status); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0u, 0u}); }
L_00F0: { ++fl.t; r.vf[15].w[0] = r.vf[16].w[0]; r.vf[15].w[1] = r.vf[16].w[1]; r.vf[15].w[2] = r.vf[16].w[2]; r.vf[15].w[3] = r.vf[16].w[3]; }
L_00F8: { ++fl.t; r.vf[16].w[0] = r.vf[17].w[0]; r.vf[16].w[1] = r.vf[17].w[1]; r.vf[16].w[2] = r.vf[17].w[2]; r.vf[16].w[3] = r.vf[17].w[3]; }
L_0100: { ++fl.t; r.vf[17].w[0] = r.vf[30].w[0]; r.vf[17].w[1] = r.vf[30].w[1]; r.vf[17].w[2] = r.vf[30].w[2]; r.vf[17].w[3] = r.vf[30].w[3]; n17 = vfix(vload(r.vf[17])); }
L_0108: { ++fl.t; const v4u uv = vftoi(vload(r.vf[30]), 0); { const std::uint8_t *q = qword(mem, 0u + 0u); std::memcpy(&r.vf[1], q, 16); } vstore(r.vf[30], uv); n1 = vfix(vload(r.vf[1])); n30 = vfix(vload(r.vf[30])); }
L_0110: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 1u); std::memcpy(&r.vf[2], q, 16); } n2 = vfix(vload(r.vf[2])); }
L_0118: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 2u); std::memcpy(&r.vf[3], q, 16); } n3 = vfix(vload(r.vf[3])); }
L_0120: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 3u); std::memcpy(&r.vf[4], q, 16); } n4 = vfix(vload(r.vf[4])); }
L_0128: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &r.vf[30], 16); } }
L_0130: { ++fl.t; set_vi(i15, 40u); pend = true; }
L_0138: { ++fl.t; }
    if (pend) { pend = false; goto L_0280; }
L_0140: { ++fl.t; pend = true; }
L_0148: { ++fl.t; }
    if (pend) { pend = false; goto L_00A0; }
L_0150: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[1], q, 16); } n1 = vfix(vload(r.vf[1])); }
L_0158: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } n2 = vfix(vload(r.vf[2])); }
L_0160: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[3], q, 16); } n3 = vfix(vload(r.vf[3])); }
L_0168: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 4u); std::memcpy(&r.vf[4], q, 16); } n4 = vfix(vload(r.vf[4])); }
L_0170: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_0178: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &r.vf[2], 16); } }
L_0180: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q, &r.vf[3], 16); } }
L_0188: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(q, &r.vf[4], 16); } }
L_0190: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 12, 2); set_vi(i9, v); } }
L_0198: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(&r.vf[31], q, 16); } n31 = vfix(vload(r.vf[31])); }
L_01A0: { ++fl.t; }
L_01A8: { ++fl.t; vu::kick(1, i3); }
L_01B0: { ++fl.t; }
L_01B8: { ++fl.t; ending = true; }
L_01C0: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; r.tpc = 456u; return; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, 456u);
    return;
L_01D8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 1u); std::memcpy(&r.vf[1], q, 16); } n1 = vfix(vload(r.vf[1])); }
L_01E0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 2u); std::memcpy(&r.vf[2], q, 16); } n2 = vfix(vload(r.vf[2])); }
L_01E8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 3u); std::memcpy(&r.vf[3], q, 16); } n3 = vfix(vload(r.vf[3])); }
L_01F0: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 4u); std::memcpy(&r.vf[4], q, 16); } n4 = vfix(vload(r.vf[4])); }
L_01F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 5u); std::memcpy(&r.vf[5], q, 16); } n5 = vfix(vload(r.vf[5])); }
L_0200: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 6u); std::memcpy(&r.vf[6], q, 16); } n6 = vfix(vload(r.vf[6])); }
L_0208: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &r.vf[1], 16); } }
L_0210: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 1u); std::memcpy(q, &r.vf[2], 16); } }
L_0218: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q, &r.vf[3], 16); } }
L_0220: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 3u); std::memcpy(q, &r.vf[4], 16); } }
L_0228: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 4u); std::memcpy(q, &r.vf[5], 16); } }
L_0230: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 5u); std::memcpy(q, &r.vf[6], 16); } }
L_0238: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i5 + 0u) + 12, 2); set_vi(i9, v); } }
L_0240: { ++fl.t; { const std::uint8_t *q = qword(mem, i5 + 0u); std::memcpy(&r.vf[31], q, 16); } n31 = vfix(vload(r.vf[31])); }
L_0248: { ++fl.t; }
L_0250: { ++fl.t; vu::kick(1, i3); }
L_0258: { ++fl.t; }
L_0260: { ++fl.t; ending = true; }
L_0268: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; r.tpc = 624u; return; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, 624u);
    return;
L_0280: { ++fl.t; const v4u uv = vmuln(n1, vsplat(n27[0])); { const std::uint8_t *q = qword(mem, 0u + 4u); std::memcpy(&r.vf[5], q, 16); } vstore(r.acc, uv); n5 = vfix(vload(r.vf[5])); nacc = uv; }
L_0288: { ++fl.t; const v4u uv = vmaddn(nacc, n2, vsplat(n27[1])); { const std::uint8_t *q = qword(mem, 0u + 5u); std::memcpy(&r.vf[6], q, 16); } vstore(r.acc, uv); n6 = vfix(vload(r.vf[6])); nacc = uv; }
L_0290: { ++fl.t; const v4u uv = vmaddn(nacc, n3, vsplat(n27[2])); { const std::uint8_t *q = qword(mem, 0u + 6u); std::memcpy(&r.vf[7], q, 16); } vstore(r.acc, uv); n7 = vfix(vload(r.vf[7])); nacc = uv; }
L_0298: { ++fl.t; const v4u uv = vmaddn(nacc, n4, vsplat(0x3F800000u)); { const std::uint8_t *q = qword(mem, 0u + 7u); std::memcpy(&r.vf[8], q, 16); } vstore(r.vf[13], uv); n8 = vfix(vload(r.vf[8])); n13 = uv; }
L_02A0: { ++fl.t; }
L_02A8: { ++fl.t; }
L_02B0: { ++fl.t; }
L_02B8: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[13].w[3]); fl.end_q(r, qb, 7u); } }
L_02C0: { ++fl.t; r.vf[18].w[0] = r.vf[19].w[0]; r.vf[18].w[1] = r.vf[19].w[1]; r.vf[18].w[2] = r.vf[19].w[2]; r.vf[18].w[3] = r.vf[19].w[3]; n18 = vfix(vload(r.vf[18])); }
L_02C8: { ++fl.t; r.vf[19].w[0] = r.vf[20].w[0]; r.vf[19].w[1] = r.vf[20].w[1]; r.vf[19].w[2] = r.vf[20].w[2]; r.vf[19].w[3] = r.vf[20].w[3]; n19 = vfix(vload(r.vf[19])); }
L_02D0: { ++fl.t; r.vf[20].w[0] = r.vf[29].w[0]; r.vf[20].w[1] = r.vf[29].w[1]; r.vf[20].w[2] = r.vf[29].w[2]; r.vf[20].w[3] = r.vf[29].w[3]; n20 = vfix(vload(r.vf[20])); }
L_02D8: { ++fl.t; r.vf[21].w[0] = r.vf[22].w[0]; r.vf[21].w[1] = r.vf[22].w[1]; r.vf[21].w[2] = r.vf[22].w[2]; r.vf[21].w[3] = r.vf[22].w[3]; n21 = vfix(vload(r.vf[21])); }
L_02E0: { ++fl.t; r.vf[22].w[0] = r.vf[23].w[0]; r.vf[22].w[1] = r.vf[23].w[1]; r.vf[22].w[2] = r.vf[23].w[2]; r.vf[22].w[3] = r.vf[23].w[3]; n22 = vfix(vload(r.vf[22])); }
L_02E8: { ++fl.t; }
L_02F0: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n13, vfix(vsplat(r.q))); vstore(r.vf[13], uv); n13 = uv; }
L_02F8: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n27[0])); vstore(r.acc, uv); nacc = uv; }
L_0300: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n27[1])); r.vf[24].w[0] = r.vf[25].w[0]; r.vf[24].w[1] = r.vf[25].w[1]; r.vf[24].w[2] = r.vf[25].w[2]; vstore(r.acc, uv); n24 = vfix(vload(r.vf[24])); nacc = uv; }
L_0308: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n27[2])); r.vf[25].w[0] = r.vf[26].w[0]; r.vf[25].w[1] = r.vf[26].w[1]; r.vf[25].w[2] = r.vf[26].w[2]; vstore(r.acc, uv); n25 = vfix(vload(r.vf[25])); nacc = uv; }
L_0310: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(0x3F800000u)); r.vf[26].w[0] = r.vf[13].w[0]; r.vf[26].w[1] = r.vf[13].w[1]; r.vf[26].w[2] = r.vf[13].w[2]; vstore(r.vf[23], uv); n26 = vfix(vload(r.vf[26])); n23 = uv; }
L_0318: { ++fl.t; const v4u uv = vftoi(vload(r.vf[13]), 4); vstore(r.vf[10], uv); }
L_0320: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n29, vfix(vsplat(r.q))); vstore(r.vf[11], vsel(vload(r.vf[11]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0328: { ++fl.t; set_vi(i14, 103u); pend = true; }
L_0330: { ++fl.t; const v4u uv = vsubn(n25, n24); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); flags(r, r.vf[12], 14u); fl.set_mac(r.mac, r.status); }
    if (pend) { pend = false; goto L_0580; }
L_0338: { ++fl.t; const v4u uv = vsubn(n26, n24); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); flags(r, r.vf[13], 14u); fl.set_mac(r.mac, r.status); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0340: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 2u); std::memcpy(q + 0, &r.vf[10].w[0], 4); std::memcpy(q + 4, &r.vf[10].w[1], 4); std::memcpy(q + 8, &r.vf[10].w[2], 4); } }
L_0348: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 0u); std::memcpy(q, &r.vf[11], 16); } }
L_0350: { ++fl.t; pend = 0u != i8; }
L_0358: { ++fl.t; }
    if (pend) { pend = false; goto L_0510; }
L_0360: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[21], r.vf[21].w[3]); { const std::uint8_t *q = qword(mem, 0u + 8u); std::memcpy(&r.vf[5], q, 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); n5 = vfix(vload(r.vf[5])); }
L_0368: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[22], r.vf[22].w[3]); { const std::uint8_t *q = qword(mem, 0u + 9u); std::memcpy(&r.vf[6], q, 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); n6 = vfix(vload(r.vf[6])); }
L_0370: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[23], r.vf[23].w[3]); { const std::uint8_t *q = qword(mem, 0u + 10u); std::memcpy(&r.vf[7], q, 16); } r.clip = uclip; fl.set_clip(uclip, fl.t); n7 = vfix(vload(r.vf[7])); }
L_0378: { ++fl.t; { const std::uint8_t *q = qword(mem, 0u + 11u); std::memcpy(&r.vf[8], q, 16); } n8 = vfix(vload(r.vf[8])); }
L_0380: { ++fl.t; }
L_0388: { ++fl.t; }
L_0390: { ++fl.t; set_vi(i1, (fl.clip() & 262143u) ? 1u : 0u); }
L_0398: { ++fl.t; pend = 0u == i1; }
L_03A0: { ++fl.t; }
    if (pend) { pend = false; goto L_0478; }
L_03A8: { ++fl.t; set_vi(i1, ((fl.clip() | 128991u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
L_03B0: { ++fl.t; pend = 0u != i1; }
L_03B8: { ++fl.t; }
    if (pend) { pend = false; goto L_0500; }
L_03C0: { ++fl.t; set_vi(i1, ((fl.clip() | 228855u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
L_03C8: { ++fl.t; pend = 0u != i1; }
L_03D0: { ++fl.t; }
    if (pend) { pend = false; goto L_0500; }
L_03D8: { ++fl.t; set_vi(i1, ((fl.clip() | 245499u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
L_03E0: { ++fl.t; pend = 0u != i1; }
L_03E8: { ++fl.t; }
    if (pend) { pend = false; goto L_0500; }
L_03F0: { ++fl.t; set_vi(i1, ((fl.clip() | 253821u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
L_03F8: { ++fl.t; pend = 0u != i1; }
L_0400: { ++fl.t; }
    if (pend) { pend = false; goto L_0500; }
L_0408: { ++fl.t; set_vi(i1, ((fl.clip() | 257982u) & 0xFFFFFFu) == 0xFFFFFFu ? 1u : 0u); }
L_0410: { ++fl.t; pend = 0u != i1; }
L_0418: { ++fl.t; }
    if (pend) { pend = false; goto L_0500; }
L_0420: { ++fl.t; set_vi(i14, 134u); pend = true; }
L_0428: { ++fl.t; }
    if (pend) { pend = false; goto L_0E98; }
L_0430: { ++fl.t; set_vi(i2, 0u + 945u); }
L_0438: { ++fl.t; set_vi(i3, 0u + 972u); }
L_0440: { ++fl.t; set_vi(i4, 0u + 920u); }
L_0448: { ++fl.t; set_vi(i14, 139u); pend = true; }
L_0450: { ++fl.t; }
    if (pend) { pend = false; goto L_0598; }
L_0458: { ++fl.t; set_vi(i14, 141u); pend = true; }
L_0460: { ++fl.t; }
    if (pend) { pend = false; goto L_0FA8; }
L_0468: { ++fl.t; pend = true; }
L_0470: { ++fl.t; }
    if (pend) { pend = false; goto L_0500; }
L_0478: { ++fl.t; const v4u uv = vsubn(n25, n24); vstore(r.vf[12], vsel(vload(r.vf[12]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); }
L_0480: { ++fl.t; const v4u uv = vsubn(n26, n24); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n13 = vsel(n13, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0488: { ++fl.t; }
L_0490: { ++fl.t; }
L_0498: { ++fl.t; }
L_04A0: { ++fl.t; const std::uint32_t ux = mul(r.vf[13].w[1], r.vf[12].w[2]); const std::uint32_t uy = mul(r.vf[13].w[2], r.vf[12].w[0]); const std::uint32_t uz = mul(r.vf[13].w[0], r.vf[12].w[1]); r.acc.w[0] = ux; r.acc.w[1] = uy; r.acc.w[2] = uz; nacc = vfix(vload(r.acc)); }
L_04A8: { ++fl.t; const std::uint32_t ux = msub(r.acc.w[0], r.vf[12].w[1], r.vf[13].w[2]); const std::uint32_t uy = msub(r.acc.w[1], r.vf[12].w[2], r.vf[13].w[0]); const std::uint32_t uz = msub(r.acc.w[2], r.vf[12].w[0], r.vf[13].w[1]); r.vf[14].w[0] = ux; r.vf[14].w[1] = uy; r.vf[14].w[2] = uz; n14 = vfix(vload(r.vf[14])); }
L_04B0: { ++fl.t; }
L_04B8: { ++fl.t; }
L_04C0: { ++fl.t; }
L_04C8: { ++fl.t; const v4u uv = vmuln(n14, vsplat(n28[3])); vstore(r.vf[13], vsel(vload(r.vf[13]), uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u})); flags(r, r.vf[13], 2u); fl.set_mac(r.mac, r.status); n13 = vsel(n13, uv, v4u{0u, 0u, 0xFFFFFFFFu, 0u}); }
L_04D0: { ++fl.t; }
L_04D8: { ++fl.t; }
L_04E0: { ++fl.t; set_vi(i1, 0u + 32u); }
L_04E8: { ++fl.t; set_vi(i1, fl.mac() & i1); }
L_04F0: { ++fl.t; pend = 0u == i1; }
L_04F8: { ++fl.t; }
    if (pend) { pend = false; goto L_0510; }
L_0500: { ++fl.t; set_vi(i8, 0u + 32767u); }
L_0508: { ++fl.t; set_vi(i8, i8 + 1u); }
L_0510: { ++fl.t; set_vi(i8, i8 | i12); }
L_0518: { ++fl.t; { std::uint8_t *q = qword(mem, i4 + 2u); const std::uint32_t v = i8; std::memcpy(q + 12, &v, 4); } }
L_0520: { ++fl.t; set_vi(i7, i7 + 4294967295u); }
L_0528: { ++fl.t; set_vi(i4, i4 + 3u); }
L_0530: { ++fl.t; pend = 0u != i7; }
L_0538: { ++fl.t; }
    if (pend) { pend = false; goto L_0570; }
L_0540: { ++fl.t; vu::kick(1, i3); }
L_0548: { ++fl.t; }
L_0550: { ++fl.t; ending = true; }
L_0558: { ++fl.t; }
    if (ending) { fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; r.tpc = 1376u; return; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, 1376u);
    return;
L_0570: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0578: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0580: { ++fl.t; set_vi(i12, 0u + 4080u); }
L_0588: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_0590: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0598: { ++fl.t; set_vi(i8, i3 + 0u); }
L_05A0: { ++fl.t; const v4u uv = vaddn(n21, n22); r.i = 1065353216u; vstore(r.acc, uv); nacc = uv; }
L_05A8: { ++fl.t; const v4u uv = vmaddn(nacc, n23, vfix(vsplat(r.i))); r.i = 1051372202u; vstore(r.vf[31], uv); n31 = uv; }
L_05B0: { ++fl.t; }
L_05B8: { ++fl.t; }
L_05C0: { ++fl.t; }
L_05C8: { ++fl.t; const v4u uv = vmuln(n31, vfix(vsplat(r.i))); vstore(r.vf[31], uv); n31 = uv; }
L_05D0: { ++fl.t; }
L_05D8: { ++fl.t; }
L_05E0: { ++fl.t; }
L_05E8: { ++fl.t; const v4u uv = vsubn(n21, n31); vstore(r.vf[21], uv); n21 = uv; }
L_05F0: { ++fl.t; const v4u uv = vsubn(n22, n31); vstore(r.vf[22], uv); n22 = uv; }
L_05F8: { ++fl.t; const v4u uv = vsubn(n23, n31); r.i = 1065378382u; vstore(r.vf[23], uv); n23 = uv; }
L_0600: { ++fl.t; const v4u uv = vmuln(n31, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i8 + 2u); std::memcpy(q, &r.vf[18], 16); } vstore(r.acc, uv); nacc = uv; }
L_0608: { ++fl.t; const v4u uv = vmaddn(nacc, n21, vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, i8 + 5u); std::memcpy(q, &r.vf[19], 16); } vstore(r.vf[21], uv); n21 = uv; }
L_0610: { ++fl.t; const v4u uv = vmuln(n31, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i8 + 8u); std::memcpy(q, &r.vf[20], 16); } vstore(r.acc, uv); nacc = uv; }
L_0618: { ++fl.t; const v4u uv = vmaddn(nacc, n22, vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, i8 + 11u); std::memcpy(q, &r.vf[18], 16); } vstore(r.vf[22], uv); n22 = uv; }
L_0620: { ++fl.t; const v4u uv = vmuln(n31, vsplat(0x3F800000u)); { std::uint8_t *q = qword(mem, i8 + 1u); std::memcpy(q, &r.vf[15], 16); } vstore(r.acc, uv); nacc = uv; }
L_0628: { ++fl.t; const v4u uv = vmaddn(nacc, n23, vfix(vsplat(r.i))); { std::uint8_t *q = qword(mem, i8 + 4u); std::memcpy(q, &r.vf[16], 16); } vstore(r.vf[23], uv); n23 = uv; }
L_0630: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 7u); std::memcpy(q, &r.vf[17], 16); } }
L_0638: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 10u); std::memcpy(q, &r.vf[15], 16); } }
L_0640: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 0u); std::memcpy(q, &r.vf[21], 16); } }
L_0648: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 3u); std::memcpy(q, &r.vf[22], 16); } }
L_0650: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 6u); std::memcpy(q, &r.vf[23], 16); } }
L_0658: { ++fl.t; { std::uint8_t *q = qword(mem, i8 + 9u); std::memcpy(q, &r.vf[21], 16); } }
L_0660: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i5, 0u + 2048u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); flags(r, r.vf[30], 8u); fl.set_mac(r.mac, r.status); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0668: { ++fl.t; set_vi(i6, 0u + 32u); }
L_0670: { ++fl.t; set_vi(i7, 0u + 2u); }
L_0678: { ++fl.t; set_vi(i8, i3 + 0u); }
L_0680: { ++fl.t; set_vi(i9, i2 + 0u); }
L_0688: { ++fl.t; set_vi(i10, 0u + 3u); }
L_0690: { ++fl.t; set_vi(i11, 0u + 0u); }
L_0698: { ++fl.t; set_vi(i15, 213u); pend = true; }
L_06A0: { ++fl.t; }
    if (pend) { pend = false; goto L_09F8; }
L_06A8: { ++fl.t; set_vi(i10, i10 - 1u); }
L_06B0: { ++fl.t; }
L_06B8: { ++fl.t; pend = 0u != i10; }
L_06C0: { ++fl.t; }
    if (pend) { pend = false; goto L_0698; }
L_06C8: { ++fl.t; set_vi(i8, i2 + 0u); }
L_06D0: { ++fl.t; set_vi(i15, 220u); pend = true; }
L_06D8: { ++fl.t; }
    if (pend) { pend = false; goto L_09B8; }
L_06E0: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_06E8: { ++fl.t; }
L_06F0: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_06F8: { ++fl.t; }
    if (pend) { pend = false; goto L_09A8; }
L_0700: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i5, 0u + 128u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); flags(r, r.vf[30], 8u); fl.set_mac(r.mac, r.status); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0708: { ++fl.t; set_vi(i6, 0u + 2u); }
L_0710: { ++fl.t; set_vi(i7, 0u + 0u); }
L_0718: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0720: { ++fl.t; set_vi(i9, i3 + 0u); }
L_0728: { ++fl.t; set_vi(i10, 0u + i11); }
L_0730: { ++fl.t; set_vi(i11, 0u + 0u); }
L_0738: { ++fl.t; set_vi(i15, 233u); pend = true; }
L_0740: { ++fl.t; }
    if (pend) { pend = false; goto L_09F8; }
L_0748: { ++fl.t; set_vi(i10, i10 - 1u); }
L_0750: { ++fl.t; }
L_0758: { ++fl.t; pend = 0u != i10; }
L_0760: { ++fl.t; }
    if (pend) { pend = false; goto L_0738; }
L_0768: { ++fl.t; set_vi(i8, i3 + 0u); }
L_0770: { ++fl.t; set_vi(i15, 240u); pend = true; }
L_0778: { ++fl.t; }
    if (pend) { pend = false; goto L_09B8; }
L_0780: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_0788: { ++fl.t; }
L_0790: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_0798: { ++fl.t; }
    if (pend) { pend = false; goto L_09A8; }
L_07A0: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i5, 0u + 64u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); flags(r, r.vf[30], 8u); fl.set_mac(r.mac, r.status); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_07A8: { ++fl.t; set_vi(i6, 0u + 1u); }
L_07B0: { ++fl.t; set_vi(i7, 0u + 0u); }
L_07B8: { ++fl.t; set_vi(i8, i3 + 0u); }
L_07C0: { ++fl.t; set_vi(i9, i2 + 0u); }
L_07C8: { ++fl.t; set_vi(i10, 0u + i11); }
L_07D0: { ++fl.t; set_vi(i11, 0u + 0u); }
L_07D8: { ++fl.t; set_vi(i15, 253u); pend = true; }
L_07E0: { ++fl.t; }
    if (pend) { pend = false; goto L_09F8; }
L_07E8: { ++fl.t; set_vi(i10, i10 - 1u); }
L_07F0: { ++fl.t; }
L_07F8: { ++fl.t; pend = 0u != i10; }
L_0800: { ++fl.t; }
    if (pend) { pend = false; goto L_07D8; }
L_0808: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0810: { ++fl.t; set_vi(i15, 260u); pend = true; }
L_0818: { ++fl.t; }
    if (pend) { pend = false; goto L_09B8; }
L_0820: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_0828: { ++fl.t; }
L_0830: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_0838: { ++fl.t; }
    if (pend) { pend = false; goto L_09A8; }
L_0840: { ++fl.t; const v4u uv = vsubn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i5, 0u + 512u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); flags(r, r.vf[30], 8u); fl.set_mac(r.mac, r.status); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0848: { ++fl.t; set_vi(i6, 0u + 8u); }
L_0850: { ++fl.t; set_vi(i7, 0u + 1u); }
L_0858: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0860: { ++fl.t; set_vi(i9, i3 + 0u); }
L_0868: { ++fl.t; set_vi(i10, 0u + i11); }
L_0870: { ++fl.t; set_vi(i11, 0u + 0u); }
L_0878: { ++fl.t; set_vi(i15, 273u); pend = true; }
L_0880: { ++fl.t; }
    if (pend) { pend = false; goto L_09F8; }
L_0888: { ++fl.t; set_vi(i10, i10 - 1u); }
L_0890: { ++fl.t; }
L_0898: { ++fl.t; pend = 0u != i10; }
L_08A0: { ++fl.t; }
    if (pend) { pend = false; goto L_0878; }
L_08A8: { ++fl.t; set_vi(i8, i3 + 0u); }
L_08B0: { ++fl.t; set_vi(i15, 280u); pend = true; }
L_08B8: { ++fl.t; }
    if (pend) { pend = false; goto L_09B8; }
L_08C0: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_08C8: { ++fl.t; }
L_08D0: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_08D8: { ++fl.t; }
    if (pend) { pend = false; goto L_09A8; }
L_08E0: { ++fl.t; const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vsplat(0x3F800000u)); set_vi(i5, 0u + 256u); vstore(r.vf[30], vsel(vload(r.vf[30]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); flags(r, r.vf[30], 8u); fl.set_mac(r.mac, r.status); n30 = vsel(n30, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_08E8: { ++fl.t; set_vi(i6, 0u + 4u); }
L_08F0: { ++fl.t; set_vi(i7, 0u + 1u); }
L_08F8: { ++fl.t; set_vi(i8, i3 + 0u); }
L_0900: { ++fl.t; set_vi(i9, i2 + 0u); }
L_0908: { ++fl.t; set_vi(i10, 0u + i11); }
L_0910: { ++fl.t; set_vi(i11, 0u + 0u); }
L_0918: { ++fl.t; set_vi(i15, 293u); pend = true; }
L_0920: { ++fl.t; }
    if (pend) { pend = false; goto L_09F8; }
L_0928: { ++fl.t; set_vi(i10, i10 - 1u); }
L_0930: { ++fl.t; }
L_0938: { ++fl.t; pend = 0u != i10; }
L_0940: { ++fl.t; }
    if (pend) { pend = false; goto L_0918; }
L_0948: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0950: { ++fl.t; set_vi(i15, 300u); pend = true; }
L_0958: { ++fl.t; }
    if (pend) { pend = false; goto L_09B8; }
L_0960: { ++fl.t; set_vi(i1, i11 + 4294967294u); }
L_0968: { ++fl.t; }
L_0970: { ++fl.t; pend = static_cast<std::int16_t>(i1) <= 0; }
L_0978: { ++fl.t; }
    if (pend) { pend = false; goto L_09A8; }
L_0980: { ++fl.t; set_vi(i8, i2 + 0u); }
L_0988: { ++fl.t; set_vi(i9, i4 + 0u); }
L_0990: { ++fl.t; set_vi(i10, 0u + i11); }
L_0998: { ++fl.t; set_vi(i15, 309u); pend = true; }
L_09A0: { ++fl.t; }
    if (pend) { pend = false; goto L_0D00; }
L_09A8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_09B0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_09B8: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 0u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_09C0: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 1u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_09C8: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 2u); std::memcpy(&r.vf[23], q, 16); } n23 = vfix(vload(r.vf[23])); }
L_09D0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[21], 16); set_vi(i9, i9 + 1u); } }
L_09D8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[22], 16); set_vi(i9, i9 + 1u); } }
L_09E0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[23], 16); set_vi(i9, i9 + 1u); } }
L_09E8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_09F0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_09F8: { ++fl.t; { const std::uint8_t *q = qword(mem, i8); std::memcpy(&r.vf[17], q, 16); set_vi(i8, i8 + 1u); } n17 = vfix(vload(r.vf[17])); }
L_0A00: { ++fl.t; { const std::uint8_t *q = qword(mem, i8); std::memcpy(&r.vf[18], q, 16); set_vi(i8, i8 + 1u); } n18 = vfix(vload(r.vf[18])); }
L_0A08: { ++fl.t; { const std::uint8_t *q = qword(mem, i8); std::memcpy(&r.vf[19], q, 16); set_vi(i8, i8 + 1u); } n19 = vfix(vload(r.vf[19])); }
L_0A10: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 0u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_0A18: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 1u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0A20: { ++fl.t; { const std::uint8_t *q = qword(mem, i8 + 2u); std::memcpy(&r.vf[23], q, 16); } n23 = vfix(vload(r.vf[23])); }
L_0A28: { ++fl.t; }
L_0A30: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[17], r.vf[17].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0A38: { ++fl.t; const std::uint32_t uclip = clip_value(r, r.vf[21], r.vf[21].w[3]); r.clip = uclip; fl.set_clip(uclip, fl.t); }
L_0A40: { ++fl.t; }
L_0A48: { ++fl.t; }
L_0A50: { ++fl.t; }
L_0A58: { ++fl.t; set_vi(i1, fl.clip() & 0xFFFu); }
L_0A60: { ++fl.t; set_vi(i12, i1 & i5); }
L_0A68: { ++fl.t; }
L_0A70: { ++fl.t; pend = 0u == i12; }
L_0A78: { ++fl.t; }
    if (pend) { pend = false; goto L_0AF0; }
L_0A80: { ++fl.t; set_vi(i12, i1 & i6); }
L_0A88: { ++fl.t; }
L_0A90: { ++fl.t; pend = 0u == i12; }
L_0A98: { ++fl.t; }
    if (pend) { pend = false; goto L_0AB0; }
L_0AA0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0AA8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0AB0: { ++fl.t; set_vi(i12, 344u); pend = true; }
L_0AB8: { ++fl.t; }
    if (pend) { pend = false; goto L_0B98; }
L_0AC0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[25], 16); set_vi(i9, i9 + 1u); } }
L_0AC8: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[26], 16); set_vi(i9, i9 + 1u); } }
L_0AD0: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[27], 16); set_vi(i9, i9 + 1u); } }
L_0AD8: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0AE0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0AE8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0AF0: { ++fl.t; set_vi(i12, i1 & i6); }
L_0AF8: { ++fl.t; }
L_0B00: { ++fl.t; pend = 0u == i12; }
L_0B08: { ++fl.t; }
    if (pend) { pend = false; goto L_0B68; }
L_0B10: { ++fl.t; set_vi(i12, 356u); pend = true; }
L_0B18: { ++fl.t; }
    if (pend) { pend = false; goto L_0B98; }
L_0B20: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[17], 16); set_vi(i9, i9 + 1u); } }
L_0B28: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[18], 16); set_vi(i9, i9 + 1u); } }
L_0B30: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[19], 16); set_vi(i9, i9 + 1u); } }
L_0B38: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[25], 16); set_vi(i9, i9 + 1u); } }
L_0B40: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[26], 16); set_vi(i9, i9 + 1u); } }
L_0B48: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[27], 16); set_vi(i9, i9 + 1u); } }
L_0B50: { ++fl.t; set_vi(i11, i11 + 2u); }
L_0B58: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B60: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0B68: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[17], 16); set_vi(i9, i9 + 1u); } }
L_0B70: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[18], 16); set_vi(i9, i9 + 1u); } }
L_0B78: { ++fl.t; { std::uint8_t *q = qword(mem, i9); std::memcpy(q, &r.vf[19], 16); set_vi(i9, i9 + 1u); } }
L_0B80: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0B88: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0B90: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0B98: { ++fl.t; const v4u uv = vmuln(n17, vsplat(n30[0])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n25 = vsel(n25, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0BA0: { ++fl.t; const v4u uv = vmuln(n21, vsplat(n30[0])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu})); n26 = vsel(n26, uv, v4u{0u, 0u, 0u, 0xFFFFFFFFu}); }
L_0BA8: { ++fl.t; }
L_0BB0: { ++fl.t; }
L_0BB8: { ++fl.t; const v4u uv = vsubn(n17, vsplat(n25[3])); vstore(r.vf[25], vsel(vload(r.vf[25]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n25 = vsel(n25, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BC0: { ++fl.t; const v4u uv = vsubn(n21, vsplat(n26[3])); vstore(r.vf[26], vsel(vload(r.vf[26]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n26 = vsel(n26, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0BC8: { ++fl.t; set_vi(i1, 0u + i7); }
L_0BD0: { ++fl.t; }
L_0BD8: { ++fl.t; pend = 0u == i1; }
L_0BE0: { ++fl.t; }
    if (pend) { pend = false; goto L_0C18; }
L_0BE8: { ++fl.t; { const Reg128 m = r.vf[25]; r.vf[25].w[0] = m.w[1]; r.vf[25].w[1] = m.w[2]; r.vf[25].w[2] = m.w[3]; r.vf[25].w[3] = m.w[0]; } n25 = vfix(vload(r.vf[25])); }
L_0BF0: { ++fl.t; { const Reg128 m = r.vf[26]; r.vf[26].w[0] = m.w[1]; r.vf[26].w[1] = m.w[2]; r.vf[26].w[2] = m.w[3]; r.vf[26].w[3] = m.w[0]; } n26 = vfix(vload(r.vf[26])); }
L_0BF8: { ++fl.t; set_vi(i1, i1 - 1u); }
L_0C00: { ++fl.t; }
L_0C08: { ++fl.t; pend = true; }
L_0C10: { ++fl.t; }
    if (pend) { pend = false; goto L_0BD8; }
L_0C18: { ++fl.t; const v4u uv = vsubn(n26, n25); vstore(r.vf[27], vsel(vload(r.vf[27]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); n27 = vsel(n27, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0C20: { ++fl.t; }
L_0C28: { ++fl.t; }
L_0C30: { ++fl.t; }
L_0C38: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[25].w[0], r.vf[27].w[0]); fl.end_q(r, qb, 7u); } }
L_0C40: { ++fl.t; }
L_0C48: { ++fl.t; }
L_0C50: { ++fl.t; }
L_0C58: { ++fl.t; const v4u uv = vsubn(n21, n17); vstore(r.vf[25], uv); n25 = uv; }
L_0C60: { ++fl.t; const v4u uv = vsubn(n22, n18); vstore(r.vf[26], uv); n26 = uv; }
L_0C68: { ++fl.t; const v4u uv = vsubn(n23, n19); vstore(r.vf[27], uv); n27 = uv; }
L_0C70: { ++fl.t; fl.flush_q(r); const v4u uv = vaddn(v4u{0u, 0u, 0u, 0x3F800000u}, vfix(vsplat(r.q))); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u}); }
L_0C78: { ++fl.t; }
L_0C80: { ++fl.t; }
L_0C88: { ++fl.t; }
L_0C90: { ++fl.t; const v4u uv = vabs(vload(r.vf[29])); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0u, 0u, 0u})); n29 = vfix(vload(r.vf[29])); }
L_0C98: { ++fl.t; }
L_0CA0: { ++fl.t; }
L_0CA8: { ++fl.t; }
L_0CB0: { ++fl.t; const v4u uv = vmuln(n25, vsplat(n29[0])); vstore(r.vf[25], uv); n25 = uv; }
L_0CB8: { ++fl.t; const v4u uv = vmuln(n26, vsplat(n29[0])); vstore(r.vf[26], uv); n26 = uv; }
L_0CC0: { ++fl.t; const v4u uv = vmuln(n27, vsplat(n29[0])); vstore(r.vf[27], uv); n27 = uv; }
L_0CC8: { ++fl.t; }
L_0CD0: { ++fl.t; const v4u uv = vaddn(n25, n17); vstore(r.vf[25], uv); flags(r, r.vf[25], 15u); fl.set_mac(r.mac, r.status); n25 = uv; }
L_0CD8: { ++fl.t; const v4u uv = vaddn(n26, n18); vstore(r.vf[26], uv); flags(r, r.vf[26], 15u); fl.set_mac(r.mac, r.status); n26 = uv; }
L_0CE0: { ++fl.t; const v4u uv = vaddn(n27, n19); vstore(r.vf[27], uv); flags(r, r.vf[27], 15u); fl.set_mac(r.mac, r.status); n27 = uv; }
L_0CE8: { ++fl.t; }
L_0CF0: { ++fl.t; jpc = (static_cast<std::uint32_t>(i12) * 8u) & 16383u; pendj = true; }
L_0CF8: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0D00: { ++fl.t; set_vi(i1, i14 + 0u); }
L_0D08: { ++fl.t; set_vi(i2, i8 + 0u); }
L_0D10: { ++fl.t; set_vi(i3, i9 + 1u); }
L_0D18: { ++fl.t; set_vi(i11, 0u + 32767u); }
L_0D20: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0D28: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); const std::uint32_t v = i11; std::memcpy(q + 0, &v, 4); } }
L_0D30: { ++fl.t; }
L_0D38: { ++fl.t; }
L_0D40: { ++fl.t; }
L_0D48: { ++fl.t; vu::kick(1, i9); }
L_0D50: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, 0u + 1006u) + 0, 2); set_vi(i6, v); } }
L_0D58: { ++fl.t; set_vi(i11, i10 + 32767u); }
L_0D60: { ++fl.t; set_vi(i11, i11 + 1u); }
L_0D68: { ++fl.t; { std::uint8_t *q = qword(mem, i9 + 0u); const std::uint32_t v = i11; std::memcpy(q + 0, &v, 4); } }
L_0D70: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 0u); std::memcpy(&r.vf[20], q, 16); } n20 = vfix(vload(r.vf[20])); }
L_0D78: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 1u); std::memcpy(&r.vf[21], q, 16); } n21 = vfix(vload(r.vf[21])); }
L_0D80: { ++fl.t; { const std::uint8_t *q = qword(mem, i2 + 2u); std::memcpy(&r.vf[22], q, 16); } n22 = vfix(vload(r.vf[22])); }
L_0D88: { ++fl.t; }
L_0D90: { ++fl.t; const v4u uv = vmuln(n5, vsplat(n20[0])); vstore(r.acc, uv); nacc = uv; }
L_0D98: { ++fl.t; const v4u uv = vmaddn(nacc, n6, vsplat(n20[1])); vstore(r.acc, uv); nacc = uv; }
L_0DA0: { ++fl.t; const v4u uv = vmaddn(nacc, n7, vsplat(n20[2])); vstore(r.acc, uv); nacc = uv; }
L_0DA8: { ++fl.t; const v4u uv = vmaddn(nacc, n8, vsplat(n20[3])); vstore(r.vf[27], uv); flags(r, r.vf[27], 15u); fl.set_mac(r.mac, r.status); n27 = uv; }
L_0DB0: { ++fl.t; }
L_0DB8: { ++fl.t; }
L_0DC0: { ++fl.t; }
L_0DC8: { ++fl.t; { const std::uint32_t qb = fl.begin_q(r); vu::div(r, r.vf[0].w[3], r.vf[27].w[3]); fl.end_q(r, qb, 7u); } }
L_0DD0: { ++fl.t; }
L_0DD8: { ++fl.t; }
L_0DE0: { ++fl.t; }
L_0DE8: { ++fl.t; }
L_0DF0: { ++fl.t; }
L_0DF8: { ++fl.t; }
L_0E00: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n27, vfix(vsplat(r.q))); vstore(r.vf[27], uv); flags(r, r.vf[27], 15u); fl.set_mac(r.mac, r.status); n27 = uv; }
L_0E08: { ++fl.t; fl.flush_q(r); const v4u uv = vmuln(n22, vfix(vsplat(r.q))); vstore(r.vf[29], vsel(vload(r.vf[29]), uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u})); flags(r, r.vf[29], 14u); fl.set_mac(r.mac, r.status); n29 = vsel(n29, uv, v4u{0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0u}); }
L_0E10: { ++fl.t; const v4u uv = vftoi(vload(r.vf[21]), 0); vstore(r.vf[28], uv); n28 = vfix(vload(r.vf[28])); }
L_0E18: { ++fl.t; set_vi(i14, 453u); pend = true; }
L_0E20: { ++fl.t; const v4u uv = vftoi(vload(r.vf[27]), 4); vstore(r.vf[27], uv); n27 = vfix(vload(r.vf[27])); }
    if (pend) { pend = false; goto L_0580; }
L_0E28: { ++fl.t; set_vi(i10, i10 + 4294967295u); }
L_0E30: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 0u); std::memcpy(q, &r.vf[29], 16); } }
L_0E38: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 1u); std::memcpy(q, &r.vf[28], 16); } }
L_0E40: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 2u); std::memcpy(q + 0, &r.vf[27].w[0], 4); std::memcpy(q + 4, &r.vf[27].w[1], 4); std::memcpy(q + 8, &r.vf[27].w[2], 4); } }
L_0E48: { ++fl.t; { std::uint8_t *q = qword(mem, i3 + 2u); const std::uint32_t v = i12; std::memcpy(q + 12, &v, 4); } }
L_0E50: { ++fl.t; set_vi(i3, i3 + 3u); }
L_0E58: { ++fl.t; set_vi(i2, i2 + 3u); }
L_0E60: { ++fl.t; pend = 0u != i10; }
L_0E68: { ++fl.t; }
    if (pend) { pend = false; goto L_0D70; }
L_0E70: { ++fl.t; vu::kick(1, i9); }
L_0E78: { ++fl.t; }
L_0E80: { ++fl.t; set_vi(i14, i1 + 0u); }
L_0E88: { ++fl.t; jpc = (static_cast<std::uint32_t>(i15) * 8u) & 16383u; pendj = true; }
L_0E90: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0E98: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[16], 16); } }
L_0EA0: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[17], 16); } }
L_0EA8: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[18], 16); } }
L_0EB0: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[19], 16); } }
L_0EB8: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[20], 16); } }
L_0EC0: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[21], 16); } }
L_0EC8: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[22], 16); } }
L_0ED0: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[23], 16); } }
L_0ED8: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[24], 16); } }
L_0EE0: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[25], 16); } }
L_0EE8: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[26], 16); } }
L_0EF0: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[27], 16); } }
L_0EF8: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[28], 16); } }
L_0F00: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[29], 16); } }
L_0F08: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[30], 16); } }
L_0F10: { ++fl.t; { set_vi(i13, i13 - 1u); std::uint8_t *q = qword(mem, i13); std::memcpy(q, &r.vf[31], 16); } }
L_0F18: { ++fl.t; set_vi(i13, i13 - 1u); }
L_0F20: { ++fl.t; { std::uint8_t *q = qword(mem, i13); const std::uint32_t v = i2; std::memcpy(q + 0, &v, 4); } }
L_0F28: { ++fl.t; { std::uint8_t *q = qword(mem, i13); const std::uint32_t v = i3; std::memcpy(q + 4, &v, 4); } }
L_0F30: { ++fl.t; { std::uint8_t *q = qword(mem, i13); const std::uint32_t v = i4; std::memcpy(q + 8, &v, 4); } }
L_0F38: { ++fl.t; { std::uint8_t *q = qword(mem, i13); const std::uint32_t v = i5; std::memcpy(q + 12, &v, 4); } }
L_0F40: { ++fl.t; set_vi(i13, i13 - 1u); }
L_0F48: { ++fl.t; { std::uint8_t *q = qword(mem, i13); const std::uint32_t v = i6; std::memcpy(q + 0, &v, 4); } }
L_0F50: { ++fl.t; { std::uint8_t *q = qword(mem, i13); const std::uint32_t v = i7; std::memcpy(q + 4, &v, 4); } }
L_0F58: { ++fl.t; { std::uint8_t *q = qword(mem, i13); const std::uint32_t v = i8; std::memcpy(q + 8, &v, 4); } }
L_0F60: { ++fl.t; { std::uint8_t *q = qword(mem, i13); const std::uint32_t v = i9; std::memcpy(q + 12, &v, 4); } }
L_0F68: { ++fl.t; set_vi(i13, i13 - 1u); }
L_0F70: { ++fl.t; { std::uint8_t *q = qword(mem, i13); const std::uint32_t v = i10; std::memcpy(q + 0, &v, 4); } }
L_0F78: { ++fl.t; { std::uint8_t *q = qword(mem, i13); const std::uint32_t v = i11; std::memcpy(q + 4, &v, 4); } }
L_0F80: { ++fl.t; { std::uint8_t *q = qword(mem, i13); const std::uint32_t v = i12; std::memcpy(q + 8, &v, 4); } }
L_0F88: { ++fl.t; { std::uint8_t *q = qword(mem, i13); const std::uint32_t v = i15; std::memcpy(q + 12, &v, 4); } }
L_0F90: { ++fl.t; }
L_0F98: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_0FA0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
L_0FA8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i13) + 0, 2); set_vi(i10, v); } }
L_0FB0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i13) + 4, 2); set_vi(i11, v); } }
L_0FB8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i13) + 8, 2); set_vi(i12, v); } }
L_0FC0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i13) + 12, 2); set_vi(i15, v); } }
L_0FC8: { ++fl.t; set_vi(i13, i13 + 1u); }
L_0FD0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i13) + 0, 2); set_vi(i6, v); } }
L_0FD8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i13) + 4, 2); set_vi(i7, v); } }
L_0FE0: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i13) + 8, 2); set_vi(i8, v); } }
L_0FE8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i13) + 12, 2); set_vi(i9, v); } }
L_0FF0: { ++fl.t; set_vi(i13, i13 + 1u); }
L_0FF8: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i13) + 0, 2); set_vi(i2, v); } }
L_1000: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i13) + 4, 2); set_vi(i3, v); } }
L_1008: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i13) + 8, 2); set_vi(i4, v); } }
L_1010: { ++fl.t; { std::uint16_t v; std::memcpy(&v, qword(mem, i13) + 12, 2); set_vi(i5, v); } }
L_1018: { ++fl.t; set_vi(i13, i13 + 1u); }
L_1020: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[31], q, 16); set_vi(i13, i13 + 1u); } n31 = vfix(vload(r.vf[31])); }
L_1028: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[30], q, 16); set_vi(i13, i13 + 1u); } n30 = vfix(vload(r.vf[30])); }
L_1030: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[29], q, 16); set_vi(i13, i13 + 1u); } n29 = vfix(vload(r.vf[29])); }
L_1038: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[28], q, 16); set_vi(i13, i13 + 1u); } n28 = vfix(vload(r.vf[28])); }
L_1040: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[27], q, 16); set_vi(i13, i13 + 1u); } n27 = vfix(vload(r.vf[27])); }
L_1048: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[26], q, 16); set_vi(i13, i13 + 1u); } n26 = vfix(vload(r.vf[26])); }
L_1050: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[25], q, 16); set_vi(i13, i13 + 1u); } n25 = vfix(vload(r.vf[25])); }
L_1058: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[24], q, 16); set_vi(i13, i13 + 1u); } n24 = vfix(vload(r.vf[24])); }
L_1060: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[23], q, 16); set_vi(i13, i13 + 1u); } n23 = vfix(vload(r.vf[23])); }
L_1068: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[22], q, 16); set_vi(i13, i13 + 1u); } n22 = vfix(vload(r.vf[22])); }
L_1070: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[21], q, 16); set_vi(i13, i13 + 1u); } n21 = vfix(vload(r.vf[21])); }
L_1078: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[20], q, 16); set_vi(i13, i13 + 1u); } n20 = vfix(vload(r.vf[20])); }
L_1080: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[19], q, 16); set_vi(i13, i13 + 1u); } n19 = vfix(vload(r.vf[19])); }
L_1088: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[18], q, 16); set_vi(i13, i13 + 1u); } n18 = vfix(vload(r.vf[18])); }
L_1090: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[17], q, 16); set_vi(i13, i13 + 1u); } n17 = vfix(vload(r.vf[17])); }
L_1098: { ++fl.t; { const std::uint8_t *q = qword(mem, i13); std::memcpy(&r.vf[16], q, 16); set_vi(i13, i13 + 1u); } }
L_10A0: { ++fl.t; }
L_10A8: { ++fl.t; jpc = (static_cast<std::uint32_t>(i14) * 8u) & 16383u; pendj = true; }
L_10B0: { ++fl.t; }
    if (pendj) { pendj = false; goto dispatch; }
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, 4280u);
    return;
dispatch:
    fl.flush_q(r); r.vi[1] = i1; r.vi[2] = i2; r.vi[3] = i3; r.vi[4] = i4; r.vi[5] = i5; r.vi[6] = i6; r.vi[7] = i7; r.vi[8] = i8; r.vi[9] = i9; r.vi[10] = i10; r.vi[11] = i11; r.vi[12] = i12; r.vi[13] = i13; r.vi[14] = i14; r.vi[15] = i15; vu::interpret(1, jpc);
    return;
}

}
