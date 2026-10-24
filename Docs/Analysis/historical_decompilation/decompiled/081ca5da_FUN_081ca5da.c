
/* WARNING: Control flow encountered bad instruction data */

void FUN_081ca5da(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int unaff_r6;
  undefined4 unaff_pc;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_storelong(5,in_cr11,unaff_r6 + 0x2c4);
  }
  if (in_ZR) {
    *param_3 = unaff_pc;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

