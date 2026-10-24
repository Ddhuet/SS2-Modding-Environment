
undefined8
FUN_081d317e(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 *param_4,
            undefined8 param_5)

{
  uint extraout_r2;
  undefined4 *extraout_r3;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  bool bVar1;
  undefined4 in_cr5;
  undefined8 uVar2;
  
  if (in_NG == in_OV) {
    if (in_ZR || in_NG != in_OV) {
      software_interrupt(0xc9afb6);
    }
    if (in_NG != in_OV) {
      func_0x070c20be();
      param_3 = extraout_r2;
      param_4 = extraout_r3;
    }
    if ((bool)in_CY) {
      *param_4 = unaff_r10;
      param_4[-1] = unaff_r9;
      param_4[-2] = unaff_r8;
      param_4[-3] = unaff_r7;
      param_4[-4] = unaff_r6;
      param_4[-5] = unaff_r5;
      param_4[-6] = param_4;
      param_3 = param_3 & 0xff;
      bVar1 = param_3 == 0 || param_3 != 0 && (bool)((byte)(0x81d31a2 >> param_3 - 1) & 1);
    }
    else {
      coprocessor_moveto(6,1,1,param_4,in_cr5,in_cr5);
      bVar1 = false;
    }
    func_0x084d55f2();
                    /* WARNING: Could not recover jumptable at 0x081d31a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(0x3cc0000 - (unaff_r11 + (uint)!bVar1)))();
    return uVar2;
  }
  return param_5;
}

