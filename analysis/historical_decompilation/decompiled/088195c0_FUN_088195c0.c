
/* WARNING: Control flow encountered bad instruction data */

void FUN_088195c0(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr8;
  undefined4 in_cr13;
  undefined1 auStack_374 [884];
  
  if (in_NG != in_OV) {
    func_0x07706cb4();
  }
  if (in_NG != in_OV) {
    func_0x077084b8();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_storelong(0xd,in_cr13,auStack_374);
    coprocessor_loadlong(0xc,in_cr8,auStack_374);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

