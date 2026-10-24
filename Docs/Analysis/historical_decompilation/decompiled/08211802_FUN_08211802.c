
/* WARNING: Control flow encountered bad instruction data */

void FUN_08211802(void)

{
  bool in_ZR;
  undefined4 in_cr9;
  
  if (!in_ZR) {
    coprocessor_movefromRt(0xd,0,7,in_cr9,in_cr9);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

