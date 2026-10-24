
/* WARNING: Control flow encountered bad instruction data */

void FUN_082314cc(undefined4 param_1,undefined4 param_2)

{
  undefined4 unaff_r4;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    *(undefined4 *)(unaff_r11 + 4) = param_2;
    *(undefined4 *)(unaff_r11 + 8) = unaff_r4;
    *(undefined4 *)(unaff_r11 + 0xc) = unaff_r7;
    *(undefined4 *)(unaff_r11 + 0x10) = unaff_r8;
    *(undefined4 *)(unaff_r11 + 0x14) = unaff_r10;
    *(undefined4 *)(unaff_r11 + 0x18) = in_r12;
    *(BADSPACEBASE **)(unaff_r11 + 0x1c) = register0x00000054;
    *(undefined4 *)(unaff_r11 + 0x20) = 0x82314d4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

