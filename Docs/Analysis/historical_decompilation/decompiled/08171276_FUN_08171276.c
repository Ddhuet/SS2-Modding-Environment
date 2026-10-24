
/* WARNING: Control flow encountered bad instruction data */

void FUN_08171276(void)

{
  undefined4 in_r3;
  undefined4 unaff_r5;
  int unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    *(undefined4 *)(unaff_r7 + 4) = in_r3;
    *(undefined4 *)(unaff_r7 + 8) = unaff_r5;
    *(int *)(unaff_r7 + 0xc) = unaff_r7;
    *(undefined4 *)(unaff_r7 + 0x10) = unaff_r8;
    *(undefined4 *)(unaff_r7 + 0x14) = unaff_r10;
    *(undefined4 *)(unaff_r7 + 0x18) = in_r12;
    *(BADSPACEBASE **)(unaff_r7 + 0x1c) = register0x00000054;
    *(undefined4 *)(unaff_r7 + 0x20) = 0x817127e;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

