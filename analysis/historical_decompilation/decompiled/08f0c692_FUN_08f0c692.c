
/* WARNING: Control flow encountered bad instruction data */

void FUN_08f0c692(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r3;
  undefined4 uVar1;
  undefined4 unaff_r9;
  undefined4 *unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr15;
  
  if ((bool)in_ZR || in_NG != in_OV) {
    unaff_r11 = (undefined4 *)coprocessor_movefromRt(5,7,2,in_cr15,in_cr13);
    coprocessor_function(5,0xe,4,in_cr11,in_cr15,in_cr13);
    coprocessor_movefromRt(5,7,5,in_cr15,in_cr13);
    param_3 = coprocessor_movefromRt(8,7,5,in_cr15,in_cr13);
  }
  uVar1 = coprocessor_movefromRt(0xb,7,6,in_cr15,in_cr13);
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x071fb5a2(param_1,param_2,param_3);
    param_4 = extraout_r3;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY && !(bool)in_ZR) {
      *unaff_r11 = param_4;
      unaff_r11[1] = uVar1;
      unaff_r11[2] = unaff_r9;
      unaff_r11[3] = 0x8f0c6b6;
      func_0x07dd5cda();
    }
    if (in_NG != in_OV) {
      func_0x07d2e8e2();
    }
    if (in_NG != in_OV) {
      func_0x0706f5b2();
    }
    if (in_NG != in_OV) {
      func_0x0a3fb5b6();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

