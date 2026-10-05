
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e1ea70(void)

{
  int unaff_r4;
  bool in_NG;
  
  if (!in_NG) {
    *(char *)(unaff_r4 + -0x444) = (char)unaff_r4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

