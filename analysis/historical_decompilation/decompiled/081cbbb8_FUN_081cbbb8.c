
/* WARNING: Control flow encountered bad instruction data */

void FUN_081cbbb8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_function(5,0xb,5,in_cr11,in_cr13,in_cr10);
  }
  if (in_ZR) {
    coprocessor_function(6,0xf,7,in_cr15,in_cr14,in_cr2);
  }
  if (!in_CY) {
    *in_r12 = param_3;
  }
  coprocessor_movefromRt(0,0,1,in_cr1,in_cr3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

