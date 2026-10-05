
/* WARNING: Control flow encountered bad instruction data */

void FUN_0827df20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  int unaff_r11;
  int in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (!in_CY || in_ZR) {
    *(undefined4 *)(unaff_r11 + 4) = param_1;
    *(undefined4 *)(unaff_r11 + 8) = param_3;
    *(undefined4 *)(unaff_r11 + 0xc) = unaff_r7;
    *(undefined4 *)(unaff_r11 + 0x10) = unaff_r8;
    *(undefined4 *)(unaff_r11 + 0x14) = unaff_r10;
    *(int *)(unaff_r11 + 0x18) = in_r12;
    *(BADSPACEBASE **)(unaff_r11 + 0x1c) = register0x00000054;
    *(undefined4 *)(unaff_r11 + 0x20) = 0x827df28;
  }
  if (in_ZR || in_NG != in_OV) {
    return;
  }
  UnsignedSaturate(in_r12 >> 0x11,0xe);
  UnsignedDoesSaturate(in_r12 >> 0x11,0xe);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

