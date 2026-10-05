
undefined8 FUN_08e16b6e(byte *param_1,byte *param_2,uint param_3,uint param_4)

{
  int unaff_r4;
  undefined1 *unaff_r5;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int iVar3;
  uint unaff_r9;
  undefined4 unaff_r10;
  uint unaff_r11;
  uint *in_r12;
  uint *puVar4;
  uint unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr4;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  undefined8 in_d7;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 in_d18;
  undefined8 in_d19;
  undefined8 in_d20;
  undefined8 in_d21;
  undefined8 in_d22;
  undefined8 in_d23;
  undefined8 in_d24;
  undefined8 in_d27;
  undefined8 in_d28;
  undefined8 in_d29;
  undefined8 in_d30;
  undefined8 in_d31;
  
  if (!(bool)in_CY || (bool)in_ZR) {
    coprocessor_moveto(5,5,4,unaff_r11,in_cr1,in_cr13);
  }
  if (in_NG != in_OV) {
    coprocessor_function(0xe,0xc,5,in_cr11,in_cr1,in_cr0);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    coprocessor_function(0,9,6,in_cr13,in_cr14,in_cr1);
  }
  if (in_NG == in_OV) {
    in_CY = (byte)(param_4 >> 10) & 1;
    in_r12 = (uint *)(unaff_r9 | (int)param_4 >> 0xb);
    in_NG = (int)in_r12 < 0;
    in_ZR = in_r12 == (uint *)0x0;
  }
  else {
    software_interrupt(0xc1c1a3);
  }
  if (in_NG == in_OV) {
    in_CY = 0;
    in_r12 = (uint *)(unaff_lr | 0x31400000);
    in_NG = (int)in_r12 < 0;
    in_ZR = in_r12 == (uint *)0x0;
  }
  else {
    unaff_r11 = coprocessor_movefromRt(0xe,5,5,in_cr11,in_cr14);
  }
  puVar4 = in_r12;
  if (!(bool)in_ZR && in_NG == in_OV) {
    puVar4 = (uint *)((int)in_r12 + 0xbb9);
    unaff_r11 = *in_r12;
  }
  if (in_NG == in_OV) {
    puVar4 = (uint *)(unaff_r4 >> 0xb);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    unaff_r10 = uRam08e16b9a;
  }
  if (in_NG == in_OV) {
    puVar4 = (uint *)(param_3 + 0x2fc00000 + (uint)in_CY);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    unaff_r11 = (uint)param_2 & ~(param_3 >> 0x1f);
  }
  if (in_NG == in_OV) {
    puVar4 = (uint *)(param_1 + in_CY + 0x4000000c);
    puVar1 = unaff_r5;
  }
  else {
    unaff_r11 = coprocessor_movefromRt(0xc,5,5,in_cr14,in_cr11);
    puVar1 = unaff_r5 + (unaff_r4 >> 3);
    register0x00000054 = *(BADSPACEBASE **)unaff_r5;
    *(undefined8 *)param_1 = in_d27;
    *(undefined8 *)(param_1 + 8) = in_d28;
    *(undefined8 *)(param_1 + 0x10) = in_d29;
    *(undefined8 *)(param_1 + 0x18) = in_d30;
    *(undefined8 *)(param_1 + 0x20) = in_d31;
    *(undefined8 *)(param_1 + 0x28) = in_d0;
    *(undefined8 *)(param_1 + 0x30) = in_d1;
    *(undefined8 *)(param_1 + 0x38) = in_d2;
    *(undefined8 *)(param_1 + 0x40) = in_d3;
    *(undefined8 *)(param_1 + 0x48) = in_d4;
    *(undefined8 *)(param_1 + 0x50) = in_d5;
    *(undefined8 *)(param_1 + 0x58) = in_d6;
    *(undefined8 *)(param_1 + 0x60) = in_d7;
    *(undefined8 *)(param_1 + 0x68) = unaff_d8;
    *(undefined8 *)(param_1 + 0x70) = unaff_d9;
    *(undefined8 *)(param_1 + 0x78) = unaff_d10;
    *(undefined8 *)(param_1 + 0x80) = unaff_d11;
    *(undefined8 *)(param_1 + 0x88) = unaff_d12;
    *(undefined8 *)(param_1 + 0x90) = unaff_d13;
    *(undefined8 *)(param_1 + 0x98) = unaff_d14;
    *(undefined8 *)(param_1 + 0xa0) = unaff_d15;
    *(undefined8 *)(param_1 + 0xa8) = in_d16;
    *(undefined8 *)(param_1 + 0xb0) = in_d17;
    *(undefined8 *)(param_1 + 0xb8) = in_d18;
    *(undefined8 *)(param_1 + 0xc0) = in_d19;
    *(undefined8 *)(param_1 + 200) = in_d20;
    *(undefined8 *)(param_1 + 0xd0) = in_d21;
    *(undefined8 *)(param_1 + 0xd8) = in_d22;
    *(undefined8 *)(param_1 + 0xe0) = in_d23;
    *(undefined8 *)(param_1 + 0xe8) = in_d24;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    puVar4 = (uint *)(uint)param_1[0x5c3];
  }
  iVar3 = unaff_r8 + 0x354;
  coprocessor_storelong(5,in_cr13,unaff_r8);
  puVar2 = puVar1;
  if ((bool)in_ZR || in_NG != in_OV) {
    puVar2 = puVar1 + 0xfee;
    *puVar1 = (char)unaff_lr;
  }
  coprocessor_storelong(8,in_cr14,unaff_r11);
  if ((bool)in_ZR || in_NG != in_OV) {
    puVar4 = (uint *)(uint)*param_1;
  }
  coprocessor_moveto(5,7,6,register0x00000054,in_cr12,in_cr4);
  if ((bool)in_ZR || in_NG != in_OV) {
    register0x00000054 = (BADSPACEBASE *)(uint)*param_2;
  }
  else {
    unaff_r7 = UnsignedSaturate(unaff_r4 >> 0x11,0xd);
    UnsignedDoesSaturate(unaff_r4 >> 0x11,0xd);
  }
  if (in_NG == in_OV) {
    *(uint *)(unaff_r8 + 0x358) = param_4;
    *(undefined1 **)(unaff_r8 + 0x35c) = puVar2;
    *(undefined4 *)(unaff_r8 + 0x360) = unaff_r6;
    *(int *)(unaff_r8 + 0x364) = unaff_r7;
    *(undefined4 *)(unaff_r8 + 0x368) = unaff_r10;
    *(uint *)(unaff_r8 + 0x36c) = unaff_r11 + 0x39c;
    *(BADSPACEBASE **)(unaff_r8 + 0x370) = register0x00000054;
    *(uint *)(unaff_r8 + 0x374) = unaff_lr;
    *(undefined4 *)(unaff_r8 + 0x378) = 0x8e16bda;
    iVar3 = unaff_r8 + 0x378;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    *puVar2 = (char)register0x00000054;
  }
  else {
    *(int *)(unaff_r9 + ((uint)puVar4 >> 0x11 | (int)puVar4 << 0xf)) =
         iVar3 + (char)((uint)iVar3 >> 8);
  }
  return *(undefined8 *)(unaff_r7 + -0x24);
}

