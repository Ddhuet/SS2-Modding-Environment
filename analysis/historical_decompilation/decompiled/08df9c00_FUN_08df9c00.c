
/* WARNING: Control flow encountered bad instruction data */

void FUN_08df9c00(uint param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint *unaff_r4;
  undefined1 *unaff_r5;
  uint *unaff_r9;
  uint *unaff_r11;
  uint in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  
  if (!in_CY || in_ZR) {
    unaff_r11[-0x143] = (uint)unaff_r11;
  }
  if (!in_ZR && in_NG == in_OV) {
    *(uint *)((int)unaff_r9 + -0x50a) = in_r12;
  }
  if (in_ZR) {
    unaff_r5[param_1 * 0x10000] = (char)param_1;
    unaff_r5 = unaff_r5 + param_1 * 0x10000 + 0x6e5;
    *unaff_r5 = (char)param_1;
  }
  *(uint *)((int)unaff_r4 + -0x55) = param_1;
  if (in_ZR) {
    *(uint **)((int)param_3 + -0x503) = unaff_r4;
    param_2 = param_1 & param_2 << 10;
  }
  if (!in_CY) {
    coprocessor_moveto(0xf,0,1,param_4,in_cr5,in_cr5);
  }
  uVar1 = (undefined1)param_4;
  if (in_ZR) {
    uVar1 = 0;
    unaff_r11 = unaff_r11 + -0x14f;
    param_1 = *unaff_r11;
  }
  if (!in_NG) {
    unaff_r9 = (uint *)((int)unaff_r9 + -0x53a);
    unaff_r5 = (undefined1 *)*unaff_r9;
  }
  if (!in_CY) {
    unaff_r5[param_1 * 0x10000] = uVar1;
    unaff_r5 = unaff_r5 + param_1 * 0x10000 + -0x6e5;
    uVar1 = *unaff_r5;
  }
  if (!in_ZR && in_NG == in_OV) {
    unaff_r4 = (uint *)((int)unaff_r4 + -0x85);
    param_1 = *unaff_r4;
  }
  if (in_NG == in_OV) {
    param_3 = (undefined4 *)((int)param_3 + -0x533);
  }
  if (in_CY) {
    param_3 = (undefined4 *)coprocessor_movefromRt(0xf,5,5,in_cr5,in_cr5);
  }
  if (in_ZR) {
    param_3 = (undefined4 *)(unaff_r5 + (uint)in_CY + ((uint)unaff_r5 >> 0x1b));
  }
  if (!in_CY || in_ZR) {
    unaff_r11 = unaff_r11 + -0x14b;
    *unaff_r11 = in_r12;
  }
  if (in_NG != in_OV) {
    unaff_r9 = (uint *)((int)unaff_r9 + -0x52a);
    *unaff_r9 = in_r12;
  }
  if (in_CY) {
    param_3 = *(undefined4 **)(unaff_r5 + param_1 * 0x10000);
    unaff_r5 = (undefined1 *)((int)(unaff_r5 + param_1 * 0x10000) + 0x6e5);
    *unaff_r5 = (char)param_3;
  }
  if (in_NG) {
    unaff_r4 = (uint *)((int)unaff_r4 + -0x45);
    *unaff_r4 = param_1;
  }
  if (in_ZR) {
    param_3 = (undefined4 *)((int)param_3 + -0x523);
    *param_3 = unaff_r4;
  }
  if (in_CY) {
    param_1 = param_1 & param_2 >> 10;
  }
  if (!in_NG) {
    coprocessor_function(0xf,0,0,in_cr5,in_cr5,in_cr5);
  }
  if (in_ZR) {
    unaff_r5 = (undefined1 *)((uint)unaff_r5 & (int)unaff_r5 << 0x1a);
    unaff_r4 = (uint *)(uint)(byte)unaff_r11[-0x157];
  }
  if (!in_NG) {
    unaff_r4 = (uint *)(uint)*(byte *)((int)unaff_r9 + -0x55a);
    unaff_r5 = (undefined1 *)(uint)*(byte *)((byte)unaff_r5[param_1 * -0x10000] - 0x655);
  }
  if (in_NG == in_OV) {
    param_1 = (uint)*(byte *)((int)unaff_r4 + -0x85);
  }
  if (in_NG) {
    coprocessor_moveto(0xf,6,5,unaff_r4,in_cr5,in_cr5);
  }
  if (in_ZR) {
    unaff_r4 = (uint *)(unaff_r5 + (uint)in_CY + ((uint)unaff_r5 >> 0x1b));
  }
  if (!in_CY || in_ZR) {
    *(byte *)(unaff_r11 + -0x153) = (byte)in_r12;
  }
  *(byte *)((int)unaff_r9 + -0x54a) = (byte)unaff_r9;
  if (in_NG) {
    unaff_r5[param_1 * 0x10000] = (char)unaff_r4;
    unaff_r5 = unaff_r5 + 0x6b5;
    *unaff_r5 = (char)unaff_r4;
  }
  else {
    *(byte *)((int)unaff_r4 + -0x45) = (byte)param_1;
  }
  if (in_ZR) {
    *(char *)((int)param_3 + -0x543) = (char)param_2;
  }
  if (in_NG) {
    param_1 = param_1 & (int)param_2 >> 10;
  }
  if (!in_OV) {
    coprocessor_function(0xf,1,0,in_cr7,in_cr5,in_cr5);
  }
  if (in_NG) {
    unaff_r11 = unaff_r11 + -0x15f;
    unaff_r4 = (uint *)(uint)(byte)*unaff_r11;
  }
  else {
    unaff_r9 = (uint *)((int)unaff_r9 + -0x57a);
    unaff_r5 = (undefined1 *)(uint)*(byte *)unaff_r9;
  }
  if (in_NG == in_OV) {
    unaff_r4 = (uint *)((int)unaff_r4 + -0x85);
    param_1 = (uint)*(byte *)unaff_r4;
    param_3 = (undefined4 *)((int)param_3 + -0x573);
  }
  if (in_OV) {
    coprocessor_function(0xf,0xc,5,in_cr6,in_cr5,in_cr5);
    *(byte *)(unaff_r11 + -0x15b) = 0;
  }
  *(byte *)((int)unaff_r9 + -0x56a) = (byte)(byte *)((int)unaff_r9 + -0x56a);
  if (in_OV) {
    unaff_r5[0x6c5] = (char)*(undefined4 *)(unaff_r5 + param_1 * 0x10000);
  }
  if (!in_NG) {
    *(byte *)((int)unaff_r4 + -0xe5) = (byte)param_1;
  }
  if (!in_ZR) {
    *(undefined1 *)((int)param_3 + -0x563) = uVar1;
  }
  if (!in_CY || in_ZR) {
    coprocessor_movefromRt(0xf,1,0,in_cr5,in_cr5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

