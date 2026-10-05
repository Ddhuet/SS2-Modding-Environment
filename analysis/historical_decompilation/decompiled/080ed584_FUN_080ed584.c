
/* WARNING: Control flow encountered bad instruction data */

void FUN_080ed584(int param_1,undefined4 param_2,int param_3)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr4;
  undefined4 in_cr8;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    coprocessor_load(5,in_cr11,param_1 + 0x2f8);
  }
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_storelong(5,in_cr11,param_2);
  }
  if (in_NG == in_OV) {
    coprocessor_load(9,in_cr11,param_3 + 0x308);
  }
  if (!in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_movefromRt(0xc,6,6,in_cr8,in_cr4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

