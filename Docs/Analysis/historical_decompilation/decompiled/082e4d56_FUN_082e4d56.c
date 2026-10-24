
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e4d56(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_r4;
  bool in_NG;
  char in_OV;
  undefined4 in_cr7;
  undefined4 in_cr11;
  undefined4 in_cr14;
  
  if (in_NG != (bool)in_OV) {
    coprocessor_function(5,0xb,1,in_cr11,in_cr7,in_cr14);
  }
  if (in_NG) {
    *unaff_r4 = param_4;
    unaff_r4[-1] = param_3;
    unaff_r4[-2] = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

