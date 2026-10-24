
/* WARNING: Control flow encountered bad instruction data */

void FUN_0801dbb4(void)

{
  int unaff_r4;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_NG;
  
  if (in_NG) {
    *(undefined4 *)(unaff_r4 + -4) = 0x801dbbc;
    *(BADSPACEBASE **)(unaff_r4 + -8) = register0x00000054;
    *(undefined4 *)(unaff_r4 + -0xc) = in_r12;
    *(undefined4 *)(unaff_r4 + -0x10) = unaff_r10;
    *(undefined4 *)(unaff_r4 + -0x14) = unaff_r8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

