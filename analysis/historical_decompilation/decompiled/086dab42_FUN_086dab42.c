
/* WARNING: Control flow encountered bad instruction data */

void FUN_086dab42(undefined4 param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined4 *extraout_r1;
  undefined1 *extraout_r2;
  undefined1 unaff_r5;
  undefined4 unaff_r6;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG == in_OV) {
    software_interrupt(0x70b561);
  }
  if (!in_CY || in_ZR) {
    func_0x07bc798e();
    param_2 = extraout_r1;
    param_3 = extraout_r2;
  }
  if (!(bool)in_NG) {
    *param_2 = unaff_r6;
    *param_3 = unaff_r5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

