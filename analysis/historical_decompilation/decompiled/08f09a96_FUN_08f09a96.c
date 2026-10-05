
/* WARNING: Control flow encountered bad instruction data */

undefined8
FUN_08f09a96(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 *extraout_r2_01;
  undefined4 *extraout_r2_02;
  undefined4 *extraout_r2_03;
  undefined4 *extraout_r2_04;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 extraout_r3_04;
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  undefined4 unaff_r9;
  undefined4 *unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined4 extraout_r12_01;
  undefined4 extraout_r12_02;
  undefined4 extraout_r12_03;
  undefined4 extraout_r12_04;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined8 uVar1;
  
  uVar1 = CONCAT44(param_2,param_1);
  if ((bool)in_CY) {
    unaff_r11 = (undefined4 *)((uint)param_3 ^ 0x20800);
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    param_3 = param_3 + -0x2ee;
    *param_3 = unaff_r11;
  }
  if (in_NG != in_OV) {
    return *(undefined8 *)(param_3 + -0xb);
  }
  if (in_NG != in_OV) {
    return *(undefined8 *)(param_3 + -0xb);
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x8f09aae;
    uVar1 = func_0x0707899e();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x8f09ab2;
    uVar1 = func_0x07d389a2();
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x8f09ab6;
    uVar1 = func_0x07e011a6();
    param_3 = extraout_r2_01;
    param_4 = extraout_r3_01;
    in_r12 = extraout_r12_01;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    unaff_lr = 0x8f09aba;
    uVar1 = func_0x07e0122a();
    param_3 = extraout_r2_02;
    param_4 = extraout_r3_02;
    in_r12 = extraout_r12_02;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    unaff_r11 = unaff_r11 + 0xdd;
    coprocessor_load(0xd,in_cr14,unaff_r11);
  }
  coprocessor_loadlong(0xe,in_cr14,unaff_r11 + 0xed);
  coprocessor_movefromRt(0xf,6,7,in_cr13,in_cr14);
  if (in_NG != in_OV) {
    unaff_lr = 0x8f09aca;
    uVar1 = func_0x07e09aca();
    param_3 = extraout_r2_03;
    param_4 = extraout_r3_03;
    in_r12 = extraout_r12_03;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x8f09ace;
    uVar1 = func_0x085ebdbe();
    param_3 = extraout_r2_04;
    param_4 = extraout_r3_04;
    in_r12 = extraout_r12_04;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_moveto(0xb,7,5,unaff_r11,in_cr15,in_cr13);
    coprocessor_moveto(0xb,7,5,unaff_r11,in_cr15,in_cr13);
    software_interrupt(0xffbbdd);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x071eb126();
    }
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x071ebd2a();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r8 = (int)uVar1;
  unaff_r8[1] = param_3;
  unaff_r8[2] = param_4;
  unaff_r8[3] = unaff_r4;
  unaff_r8[4] = unaff_r6;
  unaff_r8[5] = unaff_r7;
  unaff_r8[6] = unaff_r8;
  unaff_r8[7] = unaff_r9;
  unaff_r8[8] = unaff_r11;
  unaff_r8[9] = in_r12;
  unaff_r8[10] = register0x00000054;
  unaff_r8[0xb] = 0x8f09aee;
  *unaff_r8 = param_4;
  unaff_r8[1] = unaff_r7;
  unaff_r8[2] = unaff_r11;
  unaff_r8[3] = register0x00000054;
  *unaff_r8 = param_4;
  unaff_r8[1] = unaff_r7;
  unaff_r8[2] = unaff_r11;
  unaff_r8[3] = in_r12;
  unaff_r8[4] = unaff_lr;
  *unaff_r11 = param_4;
  unaff_r11[1] = unaff_r7;
  unaff_r11[2] = unaff_r11;
  unaff_r11[3] = in_r12;
  unaff_r11[4] = unaff_lr;
  *unaff_r8 = param_4;
  unaff_r8[1] = unaff_r4;
  unaff_r8[2] = unaff_r6;
  unaff_r8[3] = unaff_r9;
  unaff_r8[4] = in_r12;
  unaff_r8[5] = unaff_lr;
  return uVar1;
}

