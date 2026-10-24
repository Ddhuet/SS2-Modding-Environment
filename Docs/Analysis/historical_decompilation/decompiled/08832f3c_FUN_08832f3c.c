
/* WARNING: Control flow encountered bad instruction data */

void FUN_08832f3c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 *unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  int unaff_r11;
  int iVar1;
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  int extraout_r12_01;
  int extraout_r12_02;
  int extraout_r12_03;
  int extraout_r12_04;
  int extraout_r12_05;
  int extraout_r12_06;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  
  if (in_NG != in_OV) {
    unaff_lr = 0x8832f40;
    func_0x076e04ec();
    param_2 = extraout_r1;
    param_3 = extraout_r2;
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x8832f44;
    func_0x0771cd70();
    param_2 = extraout_r1_00;
    param_3 = extraout_r2_00;
    in_r12 = extraout_r12_00;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x8832f48;
    func_0x07721568();
    param_2 = extraout_r1_01;
    param_3 = extraout_r2_01;
    in_r12 = extraout_r12_01;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    *unaff_r7 = param_2;
    unaff_r7[1] = param_3;
    unaff_r7[2] = unaff_r5;
    unaff_r7[3] = unaff_r6;
    unaff_r7[4] = unaff_r8;
    unaff_r7[5] = unaff_r10;
    unaff_r7[6] = in_r12;
    unaff_r7[7] = register0x00000054;
    unaff_r7[8] = unaff_lr;
    return;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    return;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    if (in_NG != in_OV) {
      return;
    }
    if (in_NG == in_OV) {
      if (!(bool)in_CY || (bool)in_ZR) {
        func_0x07699588();
        in_r12 = extraout_r12_02;
      }
      if (in_NG != in_OV) {
        func_0x06f195cc();
        in_r12 = extraout_r12_03;
      }
      if (in_NG != in_OV) {
        func_0x07719dd4();
        in_r12 = extraout_r12_04;
      }
      if (!(bool)in_ZR && in_NG == in_OV) {
        func_0x077215e0();
        in_r12 = extraout_r12_05;
      }
      iVar1 = unaff_r11;
      if (!(bool)in_ZR && in_NG == in_OV) {
        iVar1 = unaff_r11 + 0x2e4;
        coprocessor_load(0xb,in_cr10,unaff_r11);
        func_0x07b21de0();
        in_r12 = extraout_r12_06;
      }
      if ((bool)in_ZR || in_NG != in_OV) {
        coprocessor_storelong(0xb,in_cr12,iVar1);
        coprocessor_loadlong(0xc,in_cr11,in_r12 + 0x2ec);
        coprocessor_storelong(0xc,in_cr12,&stack0x000002ec);
        coprocessor_loadlong(0xc,in_cr13,in_r12 + 0x330);
        coprocessor_loadlong(0xc,in_cr12,&stack0x000002f0);
        coprocessor_loadlong(0xc,in_cr13,&stack0x00000370);
        coprocessor_loadlong(0xd,in_cr13,&stack0x00000330);
        software_interrupt(0xdddddd);
        coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
      }
      else {
        coprocessor_load(0xb,in_cr11,in_r12);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return;
  }
  return;
}

