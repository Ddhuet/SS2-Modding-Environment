
/* WARNING: Control flow encountered bad instruction data */

void FUN_081553b4(undefined4 param_1,int param_2)

{
  int unaff_r8;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr11;
  
  if (in_CY && !in_ZR) {
    coprocessor_storelong(5,in_cr11,unaff_r8 + -0x70);
  }
  if (!in_NG) {
    param_2 = param_2 + 0x24b;
  }
  if (in_ZR) {
    func_0x06daee14(param_1,param_2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

