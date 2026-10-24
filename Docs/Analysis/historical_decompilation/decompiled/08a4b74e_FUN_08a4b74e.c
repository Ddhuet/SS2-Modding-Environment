
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a4b74e(void)

{
  int unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr0;
  
  if (!(bool)in_OV) {
    func_0x07978d42();
  }
  if (in_NG != in_OV) {
    func_0x0793a636();
  }
  if (in_NG != in_OV) {
    func_0x07842e8a();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x07936212();
  }
  if (in_NG != in_OV) {
    func_0x0793a00e();
  }
  if (in_NG != in_OV) {
    coprocessor_storelong(0,in_cr0,unaff_r11 + 0x3c);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x0790bb5e();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x07d4bb72();
  }
  coprocessor_loadlong2(0,in_cr0,&stack0x0000003c);
  if (!(bool)in_CY) {
    func_0x078cb77e();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

