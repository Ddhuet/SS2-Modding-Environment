
/* WARNING: Control flow encountered bad instruction data */

void FUN_080e86a6(undefined4 param_1,char param_2,char *param_3)

{
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  if (!in_CY) {
    param_2 = param_2 + -0x25;
  }
  if (in_ZR || in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    software_interrupt(0x104225);
  }
  if (in_CY) {
    *param_3 = param_2;
  }
  else {
    coprocessor_store(0xc,in_cr11,param_3 + -0x338);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

