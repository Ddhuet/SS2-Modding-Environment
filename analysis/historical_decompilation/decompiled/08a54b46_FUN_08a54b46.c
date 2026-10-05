
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a54b46(uint param_1)

{
  undefined4 uVar1;
  int unaff_r11;
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr15;
  undefined4 extraout_s1;
  undefined4 extraout_s4;
  undefined4 extraout_s5;
  
  if (!(bool)in_OV) {
    unaff_r11 = 0;
  }
  if (in_NG != in_OV) {
    param_1 = func_0x07943a16();
    in_r12 = extraout_r12;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    param_1 = func_0x07983a42();
    in_r12 = extraout_r12_00;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_storelong(0xd,in_cr12,0x8a54b5a);
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY) {
    in_CY = param_1 < 0x26400;
    in_OV = SBORROW4(0x26400,param_1) != SBORROW4(0x26400 - param_1,1);
    unaff_r11 = 0x26400 - (param_1 + 1);
    in_NG = unaff_r11 < 0;
    in_ZR = unaff_r11 == 0;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    if ((bool)in_ZR || in_NG != in_OV) {
      func_0x07914f5a();
    }
    else {
      coprocessor_load(0xc,in_cr13,in_r12 + 0x2ec);
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
      coprocessor_loadlong(0xf,in_cr0,unaff_r11 + 0x338);
    }
    uVar1 = coprocessor_movefromRt(0,5,7,in_cr11,in_cr15);
    uVar1 = func_0x07d54b7c(uVar1);
    if ((bool)in_ZR) {
      software_interrupt(0xbb0000);
    }
    VectorHalvingAdd(CONCAT44(extraout_s5,extraout_s4),CONCAT44(extraout_s1,uVar1),4,1);
    coprocessor_load2(0,in_cr0,unaff_r11);
    if ((bool)in_CY) {
      in_NG = '\x01';
      in_ZR = false;
    }
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

