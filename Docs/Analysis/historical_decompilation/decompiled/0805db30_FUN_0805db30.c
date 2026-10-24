
/* WARNING: Control flow encountered bad instruction data */

void FUN_0805db30(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *unaff_r7;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  bool in_NG;
  bool in_ZR;
  
  if (in_ZR) {
    *param_1 = unaff_r11;
  }
  if (in_NG) {
    *unaff_r7 = unaff_r11;
    unaff_r7[-1] = unaff_r10;
    unaff_r7[-2] = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

