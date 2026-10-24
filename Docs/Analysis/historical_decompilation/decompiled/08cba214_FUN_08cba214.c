
/* WARNING: Control flow encountered bad instruction data */

void FUN_08cba214(void)

{
  undefined4 unaff_r4;
  int unaff_r5;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    *(undefined4 *)(unaff_r5 + 4) = unaff_r4;
    *(int *)(unaff_r5 + 8) = unaff_r5;
    *(undefined4 *)(unaff_r5 + 0xc) = unaff_r8;
    *(undefined4 *)(unaff_r5 + 0x10) = unaff_r10;
    *(undefined4 *)(unaff_r5 + 0x14) = in_r12;
    *(BADSPACEBASE **)(unaff_r5 + 0x18) = register0x00000054;
    *(undefined4 *)(unaff_r5 + 0x1c) = 0x8cba21c;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

