
/* WARNING: Control flow encountered bad instruction data */

void FUN_08274b70(void)

{
  int unaff_r9;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  if (!in_ZR) {
    coprocessor_storelong2(0xd,in_cr11,unaff_r9 + 0x348);
    if (in_NG != in_OV) {
      coprocessor_function(4,0xe,6,in_cr13,in_cr1,in_cr9);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

