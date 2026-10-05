
/* WARNING: Control flow encountered bad instruction data */

void FUN_08261cfa(void)

{
  int in_r3;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  
  if (in_CY && !in_ZR) {
    coprocessor_function(5,10,6,in_cr11,in_cr2,in_cr10);
  }
  if (in_NG != in_OV) {
    coprocessor_store(4,in_cr9,in_r3 + 0x218);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

