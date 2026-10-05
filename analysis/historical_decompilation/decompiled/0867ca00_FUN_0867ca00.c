
/* WARNING: Control flow encountered bad instruction data */

void FUN_0867ca00(void)

{
  bool in_ZR;
  
  if (in_ZR) {
    software_interrupt(0x40b5d0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

