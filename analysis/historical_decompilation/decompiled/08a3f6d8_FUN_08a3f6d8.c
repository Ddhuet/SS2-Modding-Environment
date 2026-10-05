
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a3f6d8(void)

{
  int unaff_r11;
  bool in_NG;
  undefined4 in_cr11;
  
  if (!in_NG) {
    coprocessor_store(5,in_cr11,unaff_r11 + 0x188);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

