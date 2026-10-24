
/* WARNING: Control flow encountered bad instruction data */

void FUN_081969ca(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  bool in_NG;
  undefined4 in_cr11;
  
  *(undefined4 *)(unaff_r11 + 4) = param_1;
  *(undefined4 *)(unaff_r11 + 8) = param_3;
  *(undefined4 *)(unaff_r11 + 0xc) = param_4;
  *(undefined4 *)(unaff_r11 + 0x10) = unaff_r5;
  *(undefined4 *)(unaff_r11 + 0x14) = unaff_r7;
  *(undefined4 *)(unaff_r11 + 0x18) = unaff_r8;
  *(undefined4 *)(unaff_r11 + 0x1c) = unaff_r10;
  *(undefined4 *)(unaff_r11 + 0x20) = in_r12;
  *(BADSPACEBASE **)(unaff_r11 + 0x24) = register0x00000054;
  *(undefined4 *)(unaff_r11 + 0x28) = 0x81969d2;
  if (in_NG) {
    coprocessor_moveto2(0xb,0,param_3,param_3,in_cr11);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

