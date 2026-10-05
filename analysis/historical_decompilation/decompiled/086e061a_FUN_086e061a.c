
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_086e061a(void)

{
  int unaff_r5;
  bool in_ZR;
  
  if (!in_ZR) {
    return *(undefined4 *)(unaff_r5 + -0x18);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

