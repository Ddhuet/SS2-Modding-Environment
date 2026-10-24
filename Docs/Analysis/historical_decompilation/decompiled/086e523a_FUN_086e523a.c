
/* WARNING: Control flow encountered bad instruction data */

void FUN_086e523a(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_CY && !in_ZR) {
    param_1 = func_0x08492a12();
    param_3 = extraout_r2;
  }
  if (in_NG != in_OV) {
    *(undefined4 *)(param_1 + -0x871) = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

