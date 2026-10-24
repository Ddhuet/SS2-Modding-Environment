
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a52d4e(void)

{
  int unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr0;
  
  if (!(bool)in_OV) {
    func_0x07980342();
  }
  if (in_NG != in_OV) {
    func_0x07941c36();
  }
  if (in_NG != in_OV) {
    func_0x0784a48a();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x0793d812();
  }
  if (in_NG != in_OV) {
    func_0x0794160e();
  }
  if (in_NG != in_OV) {
    coprocessor_storelong(0,in_cr0,unaff_r11 + 0x3c);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x0791315e();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x07d53172();
  }
  coprocessor_loadlong2(0,in_cr0,&stack0x0000003c);
  if (!(bool)in_CY) {
    func_0x078d2d7e();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

