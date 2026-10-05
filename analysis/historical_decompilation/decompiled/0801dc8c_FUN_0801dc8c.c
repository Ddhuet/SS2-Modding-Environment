
/* WARNING: Control flow encountered bad instruction data */

void FUN_0801dc8c(void)

{
  undefined4 unaff_r4;
  int unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_NG;
  
  if (in_NG) {
    *(undefined4 *)(unaff_r6 + -4) = 0x801dc94;
    *(BADSPACEBASE **)(unaff_r6 + -8) = register0x00000054;
    *(undefined4 *)(unaff_r6 + -0xc) = in_r12;
    *(undefined4 *)(unaff_r6 + -0x10) = unaff_r10;
    *(undefined4 *)(unaff_r6 + -0x14) = unaff_r8;
    *(undefined4 *)(unaff_r6 + -0x18) = unaff_r4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

