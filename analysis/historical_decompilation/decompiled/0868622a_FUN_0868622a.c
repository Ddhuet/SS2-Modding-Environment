
/* WARNING: Control flow encountered bad instruction data */

void FUN_0868622a(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    software_interrupt(0xc1b570);
  }
  if (in_ZR) {
    software_interrupt(0xd00fd9);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

