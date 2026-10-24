
/* WARNING: Control flow encountered bad instruction data */

void FUN_080022a4(void)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  int unaff_lr;
  bool in_NG;
  
  if (in_NG) {
    *(undefined4 *)(unaff_lr + -4) = 0x80022ac;
    *(BADSPACEBASE **)(unaff_lr + -8) = register0x00000054;
    *(undefined4 *)(unaff_lr + -0xc) = in_r12;
    *(undefined4 *)(unaff_lr + -0x10) = unaff_r10;
    *(undefined4 *)(unaff_lr + -0x14) = unaff_r8;
    *(undefined4 *)(unaff_lr + -0x18) = unaff_r5;
    *(undefined4 *)(unaff_lr + -0x1c) = unaff_r4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

