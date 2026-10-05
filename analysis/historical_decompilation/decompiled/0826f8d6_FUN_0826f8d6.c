
/* WARNING: Control flow encountered bad instruction data */

void FUN_0826f8d6(undefined4 param_1,undefined4 param_2,int param_3)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    return;
  }
  coprocessor_load(5,in_cr11,param_3 + 800);
  if (in_ZR) {
    software_interrupt(0xf1ddd5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

