
/* WARNING: Control flow encountered bad instruction data */

void FUN_080323a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *unaff_r9;
  bool in_NG;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr4;
  undefined4 in_cr15;
  
  coprocessor_function2(7,10,6,in_cr15,in_cr4,in_cr15);
  if (!in_ZR) {
    *unaff_r9 = unaff_r7;
    unaff_r9[-1] = param_1;
    *unaff_r9 = unaff_r8;
    unaff_r9[-1] = param_4;
  }
  if (in_NG) {
    *param_4 = unaff_r7;
    param_4[-1] = param_4;
    param_4[-2] = param_1;
  }
  if (in_OV) {
    func_0x062383e4();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

