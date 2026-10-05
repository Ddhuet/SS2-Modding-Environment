
/* WARNING: Control flow encountered bad instruction data */

void FUN_0819d872(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r5;
  int unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r11;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG != in_OV) {
    if (in_ZR || in_NG != in_OV) {
      *(undefined4 *)(unaff_r7 + 4) = param_1;
      *(undefined4 *)(unaff_r7 + 8) = param_2;
      *(undefined4 *)(unaff_r7 + 0xc) = param_3;
      *(undefined4 *)(unaff_r7 + 0x10) = param_4;
      *(undefined4 *)(unaff_r7 + 0x14) = unaff_r5;
      *(int *)(unaff_r7 + 0x18) = unaff_r7;
      *(undefined4 *)(unaff_r7 + 0x1c) = unaff_r8;
      *(undefined4 *)(unaff_r7 + 0x20) = unaff_r11;
      *(undefined4 *)(unaff_r7 + 0x24) = in_r12;
      *(BADSPACEBASE **)(unaff_r7 + 0x28) = register0x00000054;
      *(undefined4 *)(unaff_r7 + 0x2c) = 0x819d87e;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

