
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a5fc08(undefined4 param_1,undefined4 param_2,int param_3)

{
  int extraout_r2;
  int unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 unaff_s23;
  
  if (in_NG != in_OV) {
    unaff_r11 = unaff_r11 + 0x2dc;
    coprocessor_load(5,in_cr11,unaff_r11);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x07d8eb00();
    param_3 = extraout_r2;
  }
  if (in_NG != in_OV) {
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000370);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    *(undefined4 *)(unaff_r11 + 0x274) = unaff_s23;
  }
  if (!(bool)in_CY) {
    coprocessor_store(3,in_cr2,param_3 + -0xf4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

