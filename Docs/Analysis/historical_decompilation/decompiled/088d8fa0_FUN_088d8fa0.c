
/* WARNING: Control flow encountered bad instruction data */

void FUN_088d8fa0(undefined4 param_1,int param_2)

{
  undefined4 unaff_r6;
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr1;
  undefined4 in_cr11;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (!in_ZR && (bool)in_NG == in_OV) {
    coprocessor_storelong(5,in_cr11,in_r12);
    coprocessor_storelong(1,in_cr1,unaff_r6);
  }
  coprocessor_function(0xe,0xe,7,in_cr15,in_cr14,in_cr11);
  coprocessor_moveto(0xb,7,2,in_r12,in_cr14,in_cr1);
  if (!in_OV) {
    *(char *)(param_2 + -0x111) = (char)param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

