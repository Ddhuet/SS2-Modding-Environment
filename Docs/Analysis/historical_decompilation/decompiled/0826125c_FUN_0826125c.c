
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0826125c(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 *in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  bool bVar1;
  bool bVar2;
  undefined4 in_cr1;
  undefined4 in_cr9;
  
  if (in_NG == in_OV) {
    uRam0826128c = 0x8261264;
    uRam08261268 = param_1;
    iRam0826126c = param_2;
    uRam08261270 = param_4;
    iRam08261274 = unaff_r6;
    uRam08261278 = unaff_r7;
    uRam0826127c = unaff_r8;
    uRam08261280 = unaff_r10;
    puRam08261284 = in_r12;
    puRam08261288 = (undefined1 *)register0x00000054;
  }
  if (!in_CY || in_ZR) {
    coprocessor_load(0xe,in_cr9,unaff_r5);
  }
  if (in_ZR) {
    if (!in_NG) {
      unaff_r11 = *(undefined4 *)(param_3 + -4);
      param_2 = *(int *)(param_3 + -0x1c);
    }
    bVar2 = true;
    if (in_OV) {
      unaff_r6 = 0x5f00000 - param_2;
      in_NG = unaff_r6 < 0;
      bVar2 = unaff_r6 == 0;
    }
    bVar1 = in_OV && SBORROW4(0x5f00000,param_2);
    if (bVar2 || in_NG != bVar1) {
      coprocessor_loadlong(7,in_cr1,unaff_r6);
    }
    if (in_NG != bVar1) {
      if (!in_NG) {
        coprocessor_movefromRt(0,4,in_cr1);
        coprocessor_movefromRt2(0,4,in_cr1);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *in_r12 = unaff_r11;
    return param_1;
  }
  return uRam08261270;
}

