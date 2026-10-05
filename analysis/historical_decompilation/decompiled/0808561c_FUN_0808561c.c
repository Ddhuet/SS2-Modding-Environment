
/* WARNING: Control flow encountered bad instruction data */

void FUN_0808561c(uint param_1,undefined4 *param_2,undefined4 param_3)

{
  uint unaff_r5;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 unaff_lr;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr14;
  
  if ((bool)in_NG != in_OV) {
    unaff_r11 = (int)param_2 + (param_1 >> (unaff_r5 & 0xff));
  }
  if (!in_CY || (bool)in_ZR) {
    *(undefined4 *)(param_1 - 0x500) = param_3;
  }
  if (in_OV) {
    *param_2 = unaff_lr;
    param_2[-1] = unaff_r11;
    param_2[-2] = unaff_r10;
    param_2[-3] = param_3;
    param_2[-4] = param_2;
    param_2[-5] = param_1;
    param_2 = param_2 + -6;
  }
  if ((bool)in_NG) {
    if (in_OV == true) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!(bool)in_ZR && in_OV == true) {
      param_1 = func_0x06884a38(param_1,param_2);
    }
    if ((bool)in_ZR) {
      param_1 = param_1 + 0x3c4;
      coprocessor_loadlong(0xb,in_cr14,param_1);
    }
    if (!(bool)in_NG) {
      func_0x0a227694(param_1);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

