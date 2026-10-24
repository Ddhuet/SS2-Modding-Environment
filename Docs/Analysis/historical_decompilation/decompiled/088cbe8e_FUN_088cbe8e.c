
/* WARNING: Control flow encountered bad instruction data */

void FUN_088cbe8e(void)

{
  int in_r3;
  char unaff_r9;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  
  if (!in_NG) {
    unaff_r9 = unaff_r9 + 'U';
  }
  if (!in_CY || in_ZR) {
    *(char *)(in_r3 + -0x545) = unaff_r9;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

