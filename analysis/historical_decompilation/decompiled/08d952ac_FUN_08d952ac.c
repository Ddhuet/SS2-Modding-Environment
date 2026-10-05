
/* WARNING: Control flow encountered bad instruction data */

void FUN_08d952ac(void)

{
  int in_r12;
  bool in_ZR;
  undefined4 in_cr11;
  
  if (!in_ZR) {
    coprocessor_storelong(5,in_cr11,in_r12 + 0x40);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

