
/* WARNING: Control flow encountered bad instruction data */

void FUN_081b31ec(undefined4 param_1)

{
  undefined4 *unaff_r5;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if (in_ZR || in_NG != in_OV) {
    param_1 = *unaff_r5;
  }
  func_0x077b714e(param_1);
  coprocessor_function(0xe,2,1,in_cr13,in_cr3,in_cr1);
  if (in_ZR) {
    coprocessor_movefromRt(4,7,6,in_cr1,in_cr14);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

