
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a5b956(void)

{
  int unaff_r11;
  int iVar1;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr13;
  undefined4 in_cr15;
  
  if (in_NG != in_OV) {
    func_0x07948dba();
  }
  if (in_NG != in_OV) {
    func_0x0784a84e();
  }
  iVar1 = unaff_r11;
  if ((bool)in_ZR || in_NG != in_OV) {
    iVar1 = unaff_r11 + 0x370;
    coprocessor_load(0xd,in_cr13,unaff_r11);
  }
  if (in_NG != in_OV) {
    func_0x0784241e();
  }
  coprocessor_storelong2(0,in_cr0,iVar1);
  coprocessor_load2(0,in_cr0,iVar1 + 0x3fc);
  if (in_NG != in_OV) {
    func_0x07d1b976();
  }
  if (in_NG != in_OV) {
    coprocessor_load(0,in_cr0,iVar1 + 0x438);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x07d5bd6a();
  }
  if (!(bool)in_CY) {
    coprocessor_loadlong(0xf,in_cr15,&stack0x000003fc);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

