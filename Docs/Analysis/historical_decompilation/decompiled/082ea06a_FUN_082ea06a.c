
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_082ea06a(undefined4 param_1,undefined4 param_2)

{
  int unaff_r10;
  undefined4 *unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr1;
  
  if (in_ZR || in_NG != in_OV) {
    if (in_CY) {
      coprocessor_load(6,in_cr1,0x82ea076);
    }
    *(undefined4 *)(unaff_r10 + 0x16) = param_1;
    *(undefined4 *)(unaff_r10 + 0x1a) = param_2;
    return *unaff_lr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

