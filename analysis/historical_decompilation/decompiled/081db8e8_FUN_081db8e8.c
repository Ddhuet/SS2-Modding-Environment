
/* WARNING: Control flow encountered bad instruction data */

void FUN_081db8e8(uint param_1)

{
  uint uVar1;
  int unaff_r5;
  int unaff_r8;
  uint unaff_r9;
  int unaff_r11;
  int iVar2;
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  int extraout_r12_01;
  int extraout_r12_02;
  int extraout_r12_03;
  int extraout_r12_04;
  int extraout_r12_05;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  if (in_NG == in_OV) {
    unaff_r11 = unaff_r8 + (unaff_r5 >> 0xb) + (uint)in_CY;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_function(0xb,0xb,5,in_cr10,in_cr11,in_cr1);
  }
  if ((bool)in_ZR) {
    software_interrupt(0x3f4e2);
  }
  if (in_CY) {
    if ((bool)in_ZR || in_NG != in_OV) {
      coprocessor_load(0,in_cr0,param_1);
    }
    if (in_NG != in_OV) {
      param_1 = func_0x0831b05c();
      in_r12 = extraout_r12;
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
      param_1 = func_0x07a9b060();
      in_r12 = extraout_r12_00;
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
      coprocessor_load(0xc,in_cr11,unaff_r11);
      iVar2 = unaff_r11 + 0x5d8;
      coprocessor_load(0xc,in_cr11,unaff_r11 + 0x2ec);
      unaff_r11 = unaff_r11 + 0x8c4;
      coprocessor_load(0xc,in_cr12,iVar2);
      param_1 = func_0x07ed6c70();
      in_r12 = extraout_r12_01;
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
      param_1 = func_0x07a92c7c();
      in_r12 = extraout_r12_02;
    }
    uVar1 = in_r12 >> 0x13;
    if ((bool)in_ZR) {
      param_1 = in_r12 * in_r12 * (param_1 & uVar1 & uVar1 & uVar1 & uVar1) & unaff_r9 & unaff_r9;
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
      func_0x07a92ce0(param_1);
      in_r12 = extraout_r12_03;
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
      func_0x07a92d5c();
      in_r12 = extraout_r12_04;
    }
    if (in_NG != in_OV) {
      func_0x0831ace4();
      in_r12 = extraout_r12_05;
    }
    if (in_NG != in_OV) {
      coprocessor_loadlong(0xc,in_cr11,unaff_r11 + 0x264);
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
      coprocessor_storelong(9,in_cr9,in_r12);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

