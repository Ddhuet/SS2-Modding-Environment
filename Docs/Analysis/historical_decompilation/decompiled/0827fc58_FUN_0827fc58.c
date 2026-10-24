
/* WARNING: Control flow encountered bad instruction data */

void FUN_0827fc58(void)

{
  int in_r3;
  int unaff_r10;
  undefined1 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr13;
  
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(7,in_cr13,unaff_r10 + 0x354);
  }
  else {
    *(undefined1 *)(in_r3 + 0xfbe) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

