
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a5914e(void)

{
  int unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr0;
  
  if (!(bool)in_OV) {
    func_0x07986742();
  }
  if (in_NG != in_OV) {
    func_0x07948036();
  }
  if (in_NG != in_OV) {
    func_0x0785088a();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x07943c12();
  }
  if (in_NG != in_OV) {
    func_0x07947a0e();
  }
  if (in_NG != in_OV) {
    coprocessor_storelong(0,in_cr0,unaff_r11 + 0x3c);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x0791955e();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x07d59572();
  }
  coprocessor_loadlong2(0,in_cr0,&stack0x0000003c);
  if (!(bool)in_CY) {
    func_0x078d917e();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

