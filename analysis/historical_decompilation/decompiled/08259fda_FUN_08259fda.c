
/* WARNING: Control flow encountered bad instruction data */

void FUN_08259fda(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    unaff_r6 = unaff_r6 + 0x5cd;
  }
  *(undefined4 *)(unaff_r6 + -4) = unaff_r10;
  *(undefined4 *)(unaff_r6 + -8) = unaff_r9;
  *(undefined4 *)(unaff_r6 + -0xc) = unaff_r8;
  *(undefined4 *)(unaff_r6 + -0x10) = param_4;
  *(undefined4 *)(unaff_r6 + -0x14) = param_3;
  *(undefined4 *)(unaff_r6 + -0x18) = param_2;
  *(undefined4 *)(unaff_r6 + -0x1c) = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

