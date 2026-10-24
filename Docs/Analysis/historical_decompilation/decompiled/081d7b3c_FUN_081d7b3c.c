
/* WARNING: Control flow encountered bad instruction data */

void FUN_081d7b3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_pc;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    *(undefined4 *)(unaff_r6 + 4) = param_1;
    *(undefined4 *)(unaff_r6 + 8) = param_2;
    *(undefined4 *)(unaff_r6 + 0xc) = param_4;
    *(undefined4 *)(unaff_r6 + 0x10) = unaff_r4;
    *(undefined4 *)(unaff_r6 + 0x14) = unaff_r5;
    *(undefined4 *)(unaff_r6 + 0x18) = unaff_r7;
    *(undefined4 *)(unaff_r6 + 0x1c) = unaff_r8;
    *(undefined4 *)(unaff_r6 + 0x20) = unaff_r10;
    *(undefined4 *)(unaff_r6 + 0x24) = in_r12;
    *(BADSPACEBASE **)(unaff_r6 + 0x28) = register0x00000054;
    *(undefined4 *)(unaff_r6 + 0x2c) = 0x81d7b44;
  }
  if (in_ZR) {
    *(undefined4 *)(unaff_r11 + -0x7ec) = unaff_pc;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

