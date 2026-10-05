
/* WARNING: Control flow encountered bad instruction data */

void FUN_08991a2a(void)

{
  undefined1 extraout_r1;
  undefined1 extraout_r1_00;
  undefined1 uVar1;
  uint extraout_r1_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  int unaff_r4;
  int unaff_r6;
  int unaff_r7;
  undefined1 *unaff_r9;
  undefined4 unaff_r10;
  undefined1 *unaff_r11;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined4 extraout_r12_01;
  undefined4 uVar4;
  undefined4 uVar5;
  int unaff_pc;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr8;
  undefined4 in_cr12;
  undefined4 in_cr14;
  undefined8 uVar6;
  uint uVar2;
  undefined4 uVar3;
  
  uVar5 = 0x8991a2e;
  uVar6 = func_0x09abf228();
  uVar3 = extraout_r3;
  uVar4 = extraout_r12;
  if (!(bool)in_CY || (bool)in_ZR) {
    uVar5 = 0x8991a32;
    uVar6 = func_0x09b1812e();
    uVar3 = extraout_r3_00;
    uVar4 = extraout_r12_00;
  }
  if (in_NG != in_OV) {
    uVar5 = 0x8991a36;
    uVar6 = func_0x0a321e92();
    uVar3 = extraout_r3_01;
    uVar4 = extraout_r12_01;
  }
  uVar2 = (uint)((ulonglong)uVar6 >> 0x20);
  if (!(bool)in_CY || (bool)in_ZR) {
    *(undefined4 *)(unaff_r4 + -4) = 0x8991a3e;
    *(undefined4 *)(unaff_r4 + -8) = uVar5;
    *(BADSPACEBASE **)(unaff_r4 + -0xc) = register0x00000054;
    *(undefined4 *)(unaff_r4 + -0x10) = uVar4;
    *(undefined4 *)(unaff_r4 + -0x14) = unaff_r10;
    *(undefined1 **)(unaff_r4 + -0x18) = unaff_r9;
    *(int *)(unaff_r4 + -0x1c) = unaff_r4;
    *(undefined4 *)(unaff_r4 + -0x20) = uVar3;
    *(int *)(unaff_r4 + -0x24) = (int)uVar6;
  }
  if ((bool)in_OV) {
    unaff_r4 = (int)(((ulonglong)uVar2 << 0x20) + (longlong)unaff_r6 * (longlong)unaff_pc >> 0x20);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY) {
      in_OV = SBORROW4(unaff_r7,0x128);
      in_NG = unaff_r7 + -0x128 < 0;
      in_ZR = unaff_r7 == 0x128;
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      coprocessor_loadlong(8,in_cr5,0x8991cd6);
    }
    if (in_NG != in_OV) {
      coprocessor_function(0xb,0xb,4,in_cr14,in_cr14,in_cr12);
    }
    if (!(bool)in_ZR) {
      *unaff_r11 = (char)unaff_r4;
      UnsignedSaturate(uVar2 << 2,0x1b);
      UnsignedDoesSaturate(uVar2 << 2,0x1b);
      func_0x08de9ea2();
      uVar2 = extraout_r1_01;
    }
    uVar1 = (undefined1)uVar2;
    if (!(bool)in_ZR) {
      func_0x08561ea6();
      uVar1 = extraout_r1;
    }
    if ((bool)in_NG) {
      func_0x075e2aaa();
      uVar1 = extraout_r1_00;
    }
    coprocessor_store2(4,in_cr4,unaff_r10);
    coprocessor_store2(5,in_cr1,0x8991a6e);
    if (in_NG != in_OV) {
      uVar3 = coprocessor_movefromRt(0xb,7,5,in_cr6,in_cr8);
      uVar1 = (undefined1)uVar3;
    }
    if (!(bool)in_ZR) {
      *unaff_r9 = uVar1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

