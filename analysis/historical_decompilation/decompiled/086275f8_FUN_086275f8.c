
/* WARNING: Control flow encountered bad instruction data */

void FUN_086275f8(int param_1,int param_2)

{
  bool in_ZR;
  undefined4 in_cr11;
  
  if (!in_ZR) {
    param_1 = func_0x06aede88(param_1,param_2 + -0x5d);
  }
  coprocessor_store2(0xf,in_cr11,param_1 + -0x1b4);
  func_0x073e66a6();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

