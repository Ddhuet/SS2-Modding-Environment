
/* WARNING: Control flow encountered bad instruction data */

void FUN_08b34d24(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(5,in_cr11,&stack0x00000224);
    coprocessor_loadlong(0xd,in_cr13,&stack0x000002d4);
    coprocessor_loadlong(0xd,in_cr13,&stack0x00000374);
    coprocessor_loadlong(0xd,in_cr11,&stack0x000002f4);
    func_0x07a2bcb0();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

