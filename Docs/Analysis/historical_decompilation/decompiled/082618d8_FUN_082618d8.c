
/* WARNING: Control flow encountered bad instruction data */

void FUN_082618d8(void)

{
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (in_CY) {
    if (!in_OV) {
      software_interrupt(0x77634f);
    }
    if ((bool)in_NG != in_OV) {
      software_interrupt(0xd1e4f9);
    }
    if (!in_ZR) {
      func_0x065487a8();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

