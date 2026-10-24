
/* WARNING: Control flow encountered bad instruction data */

void FUN_08172108(int param_1)

{
  int unaff_r8;
  undefined1 unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr7;
  undefined4 in_cr9;
  undefined4 in_cr15;
  
  if ((bool)in_ZR || in_NG != in_OV) {
    *(undefined1 *)(unaff_r8 + 0x5a5) = unaff_r11;
    return;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
      param_1 = param_1 + 0x210;
      coprocessor_load(5,in_cr9,param_1);
    }
    if ((bool)in_ZR) {
      param_1 = func_0x083710c4();
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      in_OV = SBORROW4(param_1,0x36) != SBORROW4(param_1 + -0x36,(uint)!(bool)in_CY);
      in_NG = (int)(param_1 - (!(bool)in_CY + 0x36)) < 0;
      in_ZR = param_1 == !(bool)in_CY + 0x36;
    }
    if ((bool)in_ZR || in_NG != in_OV) {
      coprocessor_movefromRt(0xb,6,6,in_cr15,in_cr7);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

