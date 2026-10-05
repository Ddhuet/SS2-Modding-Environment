
/* WARNING: Control flow encountered bad instruction data */

void FUN_08f0ad26(void)

{
  int unaff_r11;
  int iVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  iVar1 = unaff_r11;
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(5,in_cr11,unaff_r11 + 0x1e8);
    coprocessor_load(0xe,in_cr15,unaff_r11 + 0x3b4);
    coprocessor_loadlong(0xe,in_cr14,unaff_r11 + 0x728);
    iVar1 = unaff_r11 + 0x768;
    coprocessor_load(0xf,in_cr15,iVar1);
    coprocessor_loadlong(0xe,in_cr15,unaff_r11 + 0xb1c);
    func_0x07e0a8f6();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_load(0xe,in_cr15,iVar1 + 0x3b4);
    func_0x07e0a8be();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xe,in_cr14,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
  }
  coprocessor_movefromRt(0xd,6,6,in_cr13,in_cr14);
  software_interrupt(0xeeddee);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

