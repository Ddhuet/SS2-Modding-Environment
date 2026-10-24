
/* WARNING: Control flow encountered bad instruction data */

void FUN_0808fa00(void)

{
  int in_r3;
  bool in_NG;
  undefined4 in_cr11;
  
  if (in_NG) {
    coprocessor_load(5,in_cr11,in_r3 + -0xc0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

