
/* WARNING: Control flow encountered bad instruction data */

void FUN_08245d6e(void)

{
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr4;
  undefined4 in_cr9;
  
  if (in_CY && !in_ZR) {
    coprocessor_movefromRt(5,4,5,in_cr4,in_cr9);
  }
  func_0x075aac02();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

