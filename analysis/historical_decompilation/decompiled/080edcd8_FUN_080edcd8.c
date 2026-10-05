
/* WARNING: Control flow encountered bad instruction data */

void FUN_080edcd8(uint param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  int unaff_r9;
  undefined4 unaff_r10;
  uint unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr11;
  undefined4 in_cr14;
  
  if (in_ZR || in_NG != in_OV) {
    unaff_r11 = param_1 & 0xd2bfffff;
  }
  else {
    coprocessor_function(6,0xd,7,in_cr14,in_cr14,in_cr1);
  }
  if (in_NG != in_OV) {
    coprocessor_load(0xb,in_cr11,unaff_r10);
  }
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_moveto(0xc,6,5,unaff_r11,in_cr1,in_cr14);
  }
  if (in_NG != in_OV) {
    unaff_r11 = *(uint *)(unaff_r9 + (unaff_r9 >> 0x1f));
  }
  if (in_ZR || in_NG != in_OV) {
    *param_4 = (char)unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

