
/* WARNING: Control flow encountered bad instruction data */

void FUN_080b8818(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int unaff_r9;
  undefined4 *unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool in_NG;
  bool in_ZR;
  undefined1 in_OV;
  
  puVar1 = param_1;
  if (in_ZR) {
    puVar1 = param_1 + -0x140;
    *param_1 = unaff_r11;
  }
  if (in_NG) {
    unaff_r10[-1] = unaff_lr;
    unaff_r10[-2] = unaff_r11;
    unaff_r10[-3] = unaff_r9;
    unaff_r10[-4] = param_4;
    unaff_r10[-5] = puVar1;
  }
  if (in_ZR) {
    in_OV = SBORROW4(unaff_r9,param_4 * 0x20000);
  }
  else {
    *puVar1 = unaff_r11;
    puVar1[-1] = unaff_r9;
    puVar1[-2] = unaff_r8;
    puVar1[-3] = unaff_r6;
  }
  if ((bool)in_OV) {
    *unaff_r10 = in_r12;
    unaff_r10[-1] = unaff_r11;
    unaff_r10[-2] = unaff_r7;
    unaff_r10[-3] = param_4;
    unaff_r10[-4] = puVar1;
    *puVar1 = unaff_lr;
    puVar1[-1] = register0x00000054;
    puVar1[-2] = unaff_r11;
    puVar1[-3] = unaff_r4;
    puVar1[-4] = puVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

