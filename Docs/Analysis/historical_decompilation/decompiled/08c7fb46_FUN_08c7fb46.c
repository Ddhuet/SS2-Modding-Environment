
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_08c7fb46(undefined4 param_1,uint param_2)

{
  uint extraout_r1;
  undefined1 *unaff_r4;
  undefined1 unaff_r5;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr8;
  undefined4 in_cr15;
  
  if ((bool)in_CY) {
    unaff_r11 = *(uint *)(unaff_r11 + 0x535);
  }
  if (!(bool)in_NG) {
    return *(undefined8 *)(unaff_r9 + 4);
  }
  if (in_OV != '\x01') {
    func_0x0712e9aa();
    param_2 = extraout_r1;
  }
  if ((bool)in_CY) {
    unaff_r11 = param_2 ^ 0x2ec00;
  }
  if (!(bool)in_ZR) {
    *unaff_r4 = unaff_r5;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_store(1,in_cr1,unaff_r8 + 0x44);
  }
  coprocessor_store2(8,in_cr8,unaff_r8 + 0x220);
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_load(0xf,in_cr15,unaff_r11 + 0x3fc);
  }
  if (in_NG != in_OV) {
    func_0x07b66262();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x07b491de();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

