
/* WARNING: Control flow encountered bad instruction data */

void FUN_0812e5c6(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 extraout_r3;
  undefined4 unaff_r5;
  uint unaff_r6;
  int unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar1;
  undefined4 in_cr2;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  if (!in_ZR && in_NG == (bool)in_OV) {
    unaff_r11 = *(undefined4 *)(param_2 - 0x5ed);
  }
  if (in_NG) {
    coprocessor_storelong(2,in_cr2,unaff_r9 + 0x6c);
  }
  if (in_NG != (bool)in_OV) {
    param_2 = param_3 & 0x3800000;
  }
  if (in_CY) {
    *(undefined4 *)(param_4 + -4) = 0x812e5da;
    *(undefined4 *)(param_4 + -8) = unaff_lr;
    *(undefined4 *)(param_4 + -0xc) = unaff_r11;
    *(undefined4 *)(param_4 + -0x10) = unaff_r10;
    *(undefined4 *)(param_4 + -0x14) = unaff_r8;
    *(undefined4 *)(param_4 + -0x18) = unaff_r5;
    *(int *)(param_4 + -0x1c) = param_4;
    *(uint *)(param_4 + -0x20) = param_3;
    *(uint *)(param_4 + -0x24) = param_2;
    *(undefined4 *)(param_4 + -0x28) = param_1;
  }
  bVar1 = (uint)(unaff_r7 >> 0x13) < unaff_r6 || unaff_r6 - (unaff_r7 >> 0x13) < (uint)in_CY;
  func_0x0975b28e();
  if (bVar1) {
    coprocessor_moveto(0xb,5,7,extraout_r3,in_cr12,in_cr11);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

