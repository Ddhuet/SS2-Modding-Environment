
/* WARNING: Control flow encountered bad instruction data */

void FUN_087d2772(undefined1 param_1)

{
  undefined1 unaff_r4;
  undefined1 *unaff_r6;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    param_1 = func_0x076d566e();
  }
  if (in_NG != in_OV) {
    param_1 = func_0x07692a72();
  }
  if ((bool)in_NG) {
    *unaff_r6 = param_1;
    unaff_r6[-0x445] = unaff_r4;
    *unaff_r6 = unaff_r4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

