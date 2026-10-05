
/* WARNING: Control flow encountered bad instruction data */

void FUN_080d7dbe(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr13;
  
  if (in_NG != in_OV) {
    func_0x06f05496();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(0xc,in_cr13,0x80d812a);
  }
  else {
    software_interrupt(0xc9c3bf);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

