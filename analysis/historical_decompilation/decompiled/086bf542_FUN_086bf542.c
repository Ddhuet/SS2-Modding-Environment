
/* WARNING: Control flow encountered bad instruction data */

void FUN_086bf542(uint param_1,uint *param_2,undefined4 param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint unaff_r4;
  uint unaff_r6;
  uint *unaff_r7;
  uint unaff_r8;
  undefined1 *unaff_r9;
  undefined1 *puVar4;
  uint *unaff_r11;
  uint *puVar5;
  uint in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  puVar1 = param_2;
  if (in_ZR) {
    puVar1 = (uint *)((int)param_2 + -0x596);
    *param_2 = (uint)unaff_r11;
  }
  puVar5 = unaff_r11;
  if (!in_ZR && in_NG == in_OV) {
    puVar5 = (uint *)((int)unaff_r11 + 0x401);
    param_1 = (uint)(byte)*unaff_r11;
  }
  if (in_ZR) {
    *puVar1 = in_r12;
    puVar1[-0x13d] = param_1;
    puVar2 = (uint *)((int)puVar1 + -0xcf6);
    *(uint *)((int)puVar1 + -0x8f5) = param_1;
    puVar1 = (uint *)((int)puVar1 + -0x10f7);
    *puVar2 = param_1;
  }
  if (in_ZR || in_NG != in_OV) {
    param_1 = (uint)*(byte *)(param_4 + 0x401);
    bRam086bfb3e = *(byte *)((int)puVar1 + 0x5d2);
    *(byte *)(bRam086bfb3e + 0x5ce) = bRam086bfb3e;
    bRam086bfb4e = *(byte *)((int)puVar1 + 0x5d2);
    register0x00000054 = (BADSPACEBASE *)(uint)bRam086bfb4e;
    *(byte *)((int)register0x00000054 + 0x5ce) = bRam086bfb4e;
  }
  puVar2 = puVar1;
  if (in_ZR) {
    puVar2 = puVar1 + -0x173;
    *puVar1 = (uint)register0x00000054;
  }
  if (!in_ZR && in_NG == in_OV) {
    param_1 = *(uint *)((int)puVar5 + -0x401);
  }
  if (in_ZR) {
    *puVar2 = in_r12;
    puVar2[-0x145] = param_1;
    puVar1 = (uint *)((int)puVar2 + -0xd16);
    *(uint *)((int)puVar2 + -0x915) = param_1;
    puVar2 = (uint *)((int)puVar2 + -0x1117);
    *puVar1 = param_1;
  }
  if (!in_CY) {
    param_1 = (uint)*(byte *)(param_4 + 0x401);
    bRam086bfb9a = *(byte *)((int)puVar2 + 0x5f2);
    *(byte *)((int)register0x00000054 + 0x5ee) = bRam086bfb9a;
    puVar2 = puVar2 + 0x2f9;
    bRam086bfbaa = (byte)*puVar2;
    param_4 = (uint)bRam086bfbaa;
    *(byte *)((int)register0x00000054 + 0xbdc) = bRam086bfbaa;
  }
  puVar1 = puVar2;
  if (in_ZR) {
    puVar1 = puVar2 + -0x17b;
    *puVar2 = param_4;
  }
  puVar2 = puVar5;
  if (!in_ZR && in_NG == in_OV) {
    puVar2 = (uint *)((int)puVar5 + 0x401);
    param_1 = (uint)(byte)*puVar5;
  }
  if (in_ZR) {
    *puVar1 = in_r12;
    *(byte *)(puVar1 + -0x13d) = (byte)param_1;
    *(byte *)((int)puVar1 + -0x8f5) = (byte)param_1;
    *(uint *)((int)puVar1 + -0xd57) = param_1;
    *(uint *)((int)puVar1 + -0x11c1) = param_1;
    *(uint *)((int)puVar1 + -0x15c2) = param_1;
    *(uint *)((int)puVar1 + -0x19c3) = param_1;
    puVar1[-0x771] = param_1;
    *(uint *)((int)puVar1 + -0x21c5) = param_1;
    *(uint *)((int)puVar1 + -0x25c6) = param_1;
    *(uint *)((int)puVar1 + -0x29c7) = param_1;
    puVar5 = (uint *)((int)puVar1 + -0x31c9);
    puVar1[-0xb72] = param_1;
    puVar1 = (uint *)((int)puVar1 + -0x35ca);
    *puVar5 = param_1;
  }
  if (!in_ZR && in_NG == in_OV) {
    param_1 = *(uint *)((int)puVar2 + -0x401);
  }
  puVar5 = puVar1;
  if (in_ZR) {
    puVar5 = puVar1 + -0x145;
    *puVar1 = in_r12;
  }
  puVar3 = unaff_r7;
  puVar1 = puVar5;
  if (in_NG) {
    puVar1 = (uint *)((int)puVar5 + 0x401);
    *puVar5 = param_1;
    puVar3 = unaff_r7 + 0x12e;
    unaff_r4 = *unaff_r7;
  }
  if (in_ZR) {
    *puVar1 = unaff_r4;
    *(uint *)((int)puVar1 + -0x48a) = param_1;
    *(uint *)((int)puVar1 + -0x88b) = param_1;
    puVar1[-0x323] = param_1;
    *(uint *)((int)puVar1 + -0x108d) = param_1;
    *(uint *)((int)puVar1 + -0x148e) = param_1;
    *(uint *)((int)puVar1 + -0x188f) = param_1;
    puVar1[-0x724] = param_1;
    puVar5 = (uint *)((int)puVar1 + -0x2492);
    *(uint *)((int)puVar1 + -0x2091) = param_1;
    puVar1 = (uint *)((int)puVar1 + -0x2893);
    *puVar5 = param_1;
  }
  if (!in_ZR && in_NG == in_OV) {
    puVar2 = (uint *)((int)puVar2 + -0x401);
    param_1 = *puVar2;
  }
  puVar5 = puVar1;
  if (in_ZR) {
    puVar5 = puVar1 + -0x14d;
    *puVar1 = in_r12;
  }
  if (in_CY && !in_ZR) {
    *puVar5 = param_1;
    puVar1 = puVar3;
    puVar5 = (uint *)((int)puVar5 + 0x401);
  }
  else {
    puVar1 = puVar3 + 0x136;
    unaff_r9 = (undefined1 *)(uint)(byte)*puVar3;
  }
  if (in_ZR) {
    *puVar5 = unaff_r8;
    *(uint *)((int)puVar5 + -0x4aa) = param_1;
    *(uint *)((int)puVar5 + -0x8ab) = param_1;
    puVar5[-0x32b] = param_1;
    *(uint *)((int)puVar5 + -0x10ad) = param_1;
    *(uint *)((int)puVar5 + -0x14ae) = param_1;
    *(uint *)((int)puVar5 + -0x18af) = param_1;
    puVar5[-0x72c] = param_1;
    puVar3 = (uint *)((int)puVar5 + -0x24b2);
    *(uint *)((int)puVar5 + -0x20b1) = param_1;
    puVar5 = (uint *)((int)puVar5 + -0x28b3);
    *puVar3 = param_1;
  }
  if (!in_ZR && in_NG == in_OV) {
    param_1 = (uint)*(byte *)((int)puVar2 + -0x401);
  }
  puVar3 = puVar5;
  if (in_ZR) {
    puVar3 = puVar5 + -0x155;
    *puVar5 = in_r12;
  }
  puVar5 = puVar3;
  if (in_CY && !in_ZR) {
    puVar5 = (uint *)((int)puVar3 + 0x401);
    *(byte *)puVar3 = (byte)param_1;
  }
  if (in_NG == in_OV) {
    puVar1 = puVar1 + -0x14e;
    unaff_r9 = (undefined1 *)*puVar1;
  }
  if (in_ZR) {
    *puVar5 = unaff_r8;
    *(uint *)((int)puVar5 + -0x4ca) = param_1;
    *(uint *)((int)puVar5 + -0x8cb) = param_1;
    puVar5[-0x333] = param_1;
    *(uint *)((int)puVar5 + -0x10cd) = param_1;
    *(uint *)((int)puVar5 + -0x14ce) = param_1;
    *(uint *)((int)puVar5 + -0x18cf) = param_1;
    puVar5[-0x734] = param_1;
    puVar3 = (uint *)((int)puVar5 + -0x24d2);
    *(uint *)((int)puVar5 + -0x20d1) = param_1;
    puVar5 = (uint *)((int)puVar5 + -0x28d3);
    *puVar3 = param_1;
  }
  puVar3 = puVar2;
  if (!in_ZR && in_NG == in_OV) {
    puVar3 = (uint *)((int)puVar2 + 0x401);
    param_1 = (uint)(byte)*puVar2;
  }
  puVar2 = puVar5;
  if (in_ZR) {
    puVar2 = puVar5 + -0x13d;
    *puVar5 = in_r12;
  }
  puVar5 = puVar1;
  puVar4 = unaff_r9;
  if (in_CY && !in_ZR) {
    puVar4 = unaff_r9 + 0x401;
    *unaff_r9 = (char)param_1;
    puVar5 = puVar1 + 0x13a;
    *(byte *)puVar1 = (byte)unaff_r8;
  }
  if (in_ZR) {
    *puVar2 = unaff_r8;
    *(uint *)((int)puVar2 + -0x4e2) = param_1;
    *(uint *)((int)puVar2 + -0x8e3) = param_1;
    puVar2[-0x339] = param_1;
    *(uint *)((int)puVar2 + -0x10e5) = param_1;
    *(uint *)((int)puVar2 + -0x14e6) = param_1;
    *(uint *)((int)puVar2 + -0x18e7) = param_1;
    puVar2[-0x73a] = param_1;
    puVar1 = (uint *)((int)puVar2 + -0x24ea);
    *(uint *)((int)puVar2 + -0x20e9) = param_1;
    puVar2 = (uint *)((int)puVar2 + -0x28eb);
    *puVar1 = param_1;
  }
  if (!in_ZR && in_NG == in_OV) {
    param_1 = *(uint *)((int)puVar3 + -0x401);
  }
  puVar1 = puVar2;
  if (in_ZR) {
    puVar1 = puVar2 + -0x145;
    *puVar2 = in_r12;
  }
  if (in_OV) {
    *(uint *)(puVar4 + -0x401) = param_1;
    puVar5[-0x142] = unaff_r8;
  }
  if (in_ZR) {
    *puVar1 = unaff_r6;
    *(uint *)((int)puVar1 + -0x502) = param_1;
    *(uint *)((int)puVar1 + -0x903) = param_1;
    puVar1[-0x341] = param_1;
    *(uint *)((int)puVar1 + -0x1105) = param_1;
    *(uint *)((int)puVar1 + -0x1506) = param_1;
    *(uint *)((int)puVar1 + -0x1907) = param_1;
    puVar1[-0x742] = param_1;
    puVar2 = (uint *)((int)puVar1 + -0x250a);
    *(uint *)((int)puVar1 + -0x2109) = param_1;
    puVar1 = (uint *)((int)puVar1 + -0x290b);
    *puVar2 = param_1;
  }
  if (!in_ZR && in_NG == in_OV) {
    param_1 = (uint)(byte)*puVar3;
  }
  puVar2 = puVar1;
  if (in_ZR) {
    puVar2 = puVar1 + -0x13d;
    *puVar1 = in_r12;
  }
  if (in_OV) {
    *(uint *)(puVar4 + -0x401) = param_1;
    puVar5[-0x14a] = unaff_r6;
  }
  if (in_ZR) {
    *puVar2 = unaff_r6;
    *(uint *)((int)puVar2 + -0x522) = param_1;
    *(uint *)((int)puVar2 + -0x923) = param_1;
    puVar2[-0x349] = param_1;
    *(uint *)((int)puVar2 + -0x1125) = param_1;
    *(uint *)((int)puVar2 + -0x1526) = param_1;
    *(uint *)((int)puVar2 + -0x1927) = param_1;
    puVar2[-0x74a] = param_1;
    *(uint *)((int)puVar2 + -0x2129) = param_1;
    *(uint *)((int)puVar2 + -0x252a) = param_1;
    *(uint *)((int)puVar2 + -0x292b) = in_r12;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

