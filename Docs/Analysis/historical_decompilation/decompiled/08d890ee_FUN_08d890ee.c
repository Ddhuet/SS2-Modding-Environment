
/* WARNING: Control flow encountered bad instruction data */

void FUN_08d890ee(void)

{
  byte *unaff_r4;
  int unaff_r11;
  uint uVar1;
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  int extraout_r12_01;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr14;
  
  if ((bool)in_NG) {
    uVar1 = (uint)*unaff_r4;
  }
  else {
    uVar1 = unaff_r11 - 0x544;
    func_0x07c5a20e();
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
    func_0x07c5e252();
    in_r12 = extraout_r12_00;
  }
  if (in_NG != in_OV) {
    func_0x07c9f6f2();
    in_r12 = extraout_r12_01;
  }
  coprocessor_moveto(0xb,7,5,uVar1,in_cr13,in_cr11);
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xe,in_cr14,&stack0x000003b8);
    coprocessor_loadlong(0xe,in_cr14,in_r12 + 0x3b8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

