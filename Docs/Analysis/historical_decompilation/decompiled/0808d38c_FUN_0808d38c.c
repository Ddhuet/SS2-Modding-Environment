
/* WARNING: Control flow encountered bad instruction data */

void FUN_0808d38c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r3;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *unaff_r9;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  undefined1 in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr4;
  
  coprocessor_movefromRt(7,5,3,in_cr0,in_cr4);
  if (!in_ZR) {
    *unaff_r9 = unaff_r7;
    unaff_r9[-1] = param_1;
    *unaff_r9 = unaff_r8;
    unaff_r9[-1] = param_4;
  }
  if (in_NG) {
    puRam0808d39c = param_1;
    uRam0808d3a0 = param_4;
    uRam0808d3a4 = unaff_r7;
  }
  if (in_OV) {
    unaff_lr = 0x808d3a4;
    param_1 = (undefined4 *)func_0x068933d8();
    param_4 = extraout_r3;
  }
  if ((bool)in_CY) {
    *param_1 = unaff_lr;
    param_1[-1] = param_4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

