
/* WARNING: Control flow encountered bad instruction data */

void FUN_08059640(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r8;
  undefined4 unaff_r11;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr1;
  
  if (in_ZR || in_NG != (bool)in_OV) {
    unaff_r8 = *(int *)(param_3 + 0xc);
    unaff_r11 = *(undefined4 *)(param_3 + 0x10);
    param_3 = param_3 + 0x14;
  }
  if (in_NG != (bool)in_OV) {
    coprocessor_loadlong(0xc,in_cr1,param_1);
  }
  if (in_NG) {
    *(undefined4 *)(unaff_r8 + param_3 * -0x1000000) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

