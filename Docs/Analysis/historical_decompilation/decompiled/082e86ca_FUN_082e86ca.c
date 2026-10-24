
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e86ca(undefined4 param_1,undefined4 param_2,int param_3)

{
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr6;
  
  if (!in_ZR && in_NG == in_OV) {
    if (!in_CY) {
      coprocessor_loadlong(0xc,in_cr2,param_3 + -0x24);
    }
    if (in_NG == in_OV) {
      coprocessor_movefromRt(3,7,7,in_cr4,in_cr6);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

