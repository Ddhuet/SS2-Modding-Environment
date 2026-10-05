
/* WARNING: Control flow encountered bad instruction data */

void FUN_0834094e(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 *unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 *unaff_r11;
  undefined4 in_r12;
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr13;
  
  if (!in_ZR && (bool)in_NG == in_OV) {
    *unaff_r11 = param_2;
    unaff_r11[1] = param_3;
    unaff_r11[2] = unaff_r4;
    unaff_r11[3] = unaff_r5;
    unaff_r11[4] = unaff_r6;
    unaff_r11[5] = unaff_r7;
    unaff_r11[6] = unaff_r8;
    unaff_r11[7] = unaff_r10;
    unaff_r11[8] = in_r12;
    unaff_r11[9] = register0x00000054;
    unaff_r11[10] = 0x8340956;
  }
  if (in_OV) {
    param_2 = *(undefined4 *)(unaff_lr + -0xaf0);
  }
  if (in_CY) {
    *(int *)(param_1 + -4) = unaff_lr;
    *(undefined4 *)(param_1 + -8) = unaff_r10;
    *(undefined4 **)(param_1 + -0xc) = unaff_r6;
    *(undefined4 *)(param_1 + -0x10) = param_4;
    *(int *)(param_1 + -0x14) = param_1;
  }
  if (!in_CY || in_ZR) {
    coprocessor_storelong(0xf,in_cr13,0x8340d46);
  }
  if (in_CY) {
    *unaff_r6 = param_2;
    unaff_r6[1] = param_3;
    unaff_r6[2] = param_4;
    unaff_r6[3] = unaff_r4;
    unaff_r6[4] = unaff_r8;
    unaff_r6[5] = param_3 - (!in_CY + 0x3080000);
    unaff_r6[6] = in_r12;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

