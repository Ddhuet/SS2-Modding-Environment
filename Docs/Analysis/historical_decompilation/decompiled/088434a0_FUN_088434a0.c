
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x088434b0) */

void FUN_088434a0(void)

{
  int unaff_r9;
  bool in_NG;
  
  if (!in_NG) {
    *(undefined1 *)(unaff_r9 + -0x58b) = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

