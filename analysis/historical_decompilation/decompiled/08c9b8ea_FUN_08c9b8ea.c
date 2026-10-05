
/* WARNING: Control flow encountered bad instruction data */

void FUN_08c9b8ea(void)

{
  bool in_ZR;
  
  if (in_ZR) {
    software_interrupt(0xc1b56f);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

