
/* WARNING: Control flow encountered bad instruction data */

void FUN_0803377c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int unaff_r7;
  int unaff_r8;
  int *unaff_r9;
  int *unaff_r10;
  bool in_NG;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr15;
  
  coprocessor_load2(7,in_cr15,unaff_r8);
  if (!in_ZR) {
    *unaff_r9 = unaff_r7;
    unaff_r9[-1] = param_1;
    *unaff_r9 = unaff_r8 + 0x338;
    unaff_r9[-1] = param_4;
  }
  if (in_NG) {
    *unaff_r10 = unaff_r7;
    unaff_r10[-1] = param_4;
    unaff_r10[-2] = param_1;
  }
  if (in_OV) {
    func_0x062397bc();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

