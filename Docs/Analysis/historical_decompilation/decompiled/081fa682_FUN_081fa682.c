
/* WARNING: Control flow encountered bad instruction data */

void FUN_081fa682(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *unaff_r4;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    coprocessor_load(5,in_cr11,param_1);
  }
  if (in_CY && !in_ZR) {
    if (!in_CY || in_ZR) {
      if (in_CY && !in_ZR) {
        *unaff_r4 = param_3 + 0x10000008;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

