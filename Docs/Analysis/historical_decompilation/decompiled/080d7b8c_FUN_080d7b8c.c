
/* WARNING: Control flow encountered bad instruction data */

void FUN_080d7b8c(undefined4 param_1,char *param_2,char param_3)

{
  undefined4 unaff_r9;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    coprocessor_load(5,in_cr11,unaff_r9);
  }
  if (!in_ZR && in_NG == in_OV) {
    *param_2 = param_3 - (!in_CY + '/');
    param_2 = param_2 + 0xc1;
  }
  func_0x07e53746(param_1,param_2);
  if (in_ZR) {
    software_interrupt(0xb0600);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

