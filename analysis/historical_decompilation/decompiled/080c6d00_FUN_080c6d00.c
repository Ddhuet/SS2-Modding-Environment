
/* WARNING: Control flow encountered bad instruction data */

void FUN_080c6d00(undefined4 param_1,undefined4 param_2)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr15;
  
  if (in_ZR || in_NG != in_OV) {
    unaff_r11 = coprocessor_movefromRt(5,7,6,in_cr15,in_cr15);
  }
  if (in_CY) {
    *(undefined4 *)(unaff_r6 + -4) = in_r12;
    *(undefined4 *)(unaff_r6 + -8) = unaff_r11;
    *(undefined4 *)(unaff_r6 + -0xc) = unaff_r10;
    *(undefined4 *)(unaff_r6 + -0x10) = unaff_r8;
    *(undefined4 *)(unaff_r6 + -0x14) = unaff_r5;
    *(undefined4 *)(unaff_r6 + -0x18) = unaff_r4;
    *(undefined4 *)(unaff_r6 + -0x1c) = param_2;
    *(undefined4 *)(unaff_r6 + -0x20) = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

