
/* WARNING: Control flow encountered bad instruction data */

void FUN_08baf656(void)

{
  undefined4 *in_r3;
  undefined4 unaff_r10;
  bool in_NG;
  bool in_CY;
  
  if (in_NG) {
    in_r3 = in_r3 + -0x145;
  }
  if (!in_CY) {
    *in_r3 = unaff_r10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

