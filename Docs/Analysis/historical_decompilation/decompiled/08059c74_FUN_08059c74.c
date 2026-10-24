
/* WARNING: Control flow encountered bad instruction data */

void FUN_08059c74(void)

{
  int unaff_r8;
  bool in_NG;
  
  if (in_NG) {
    *(BADSPACEBASE **)unaff_r8 = register0x00000054;
    *(int *)(unaff_r8 + -4) = unaff_r8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

