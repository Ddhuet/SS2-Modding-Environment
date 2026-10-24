
/* WARNING: Control flow encountered bad instruction data */

void FUN_0883235a(void)

{
  undefined1 in_r3;
  int unaff_r5;
  bool in_CY;
  
  if (!in_CY) {
    *(undefined1 *)(unaff_r5 + -0x555) = in_r3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

