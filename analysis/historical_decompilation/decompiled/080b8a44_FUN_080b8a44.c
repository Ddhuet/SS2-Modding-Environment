
/* WARNING: Control flow encountered bad instruction data */

void FUN_080b8a44(void)

{
  int in_r3;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 in_r12;
  bool in_NG;
  
  if (in_NG) {
    *(undefined4 *)(in_r3 + -4) = 0x80b8a4c;
    *(BADSPACEBASE **)(in_r3 + -8) = register0x00000054;
    *(undefined4 *)(in_r3 + -0xc) = in_r12;
    *(undefined4 *)(in_r3 + -0x10) = unaff_r10;
    *(undefined4 *)(in_r3 + -0x14) = unaff_r8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

