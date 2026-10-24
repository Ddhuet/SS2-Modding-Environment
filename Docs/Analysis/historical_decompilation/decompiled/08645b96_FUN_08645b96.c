
/* WARNING: Control flow encountered bad instruction data */

void FUN_08645b96(void)

{
  char *unaff_r7;
  bool in_ZR;
  
  if (in_ZR) {
    *unaff_r7 = (char)unaff_r7 + -0xd;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

