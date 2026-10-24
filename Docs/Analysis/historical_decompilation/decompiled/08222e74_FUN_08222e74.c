
/* WARNING: Control flow encountered bad instruction data */

void FUN_08222e74(undefined4 param_1,char param_2,undefined4 param_3,int param_4)

{
  int unaff_r6;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  
  if (in_NG != in_OV) {
    return;
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
    coprocessor_movefromRt(0xc,5,5,in_cr13,in_cr11);
  }
  if (in_ZR || in_NG != in_OV) {
    software_interrupt(0xdcdad8);
  }
  else {
    *(char *)(unaff_r6 + (param_4 >> 0xb)) = param_2 - (!in_CY + -0x41);
    coprocessor_function(10,0xc,6,in_cr12,in_cr12,in_cr9);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

