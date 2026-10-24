
/* WARNING: Control flow encountered bad instruction data */

void FUN_08682b42(void)

{
  bool in_ZR;
  
  if (in_ZR) {
    software_interrupt(0xb10ff1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

