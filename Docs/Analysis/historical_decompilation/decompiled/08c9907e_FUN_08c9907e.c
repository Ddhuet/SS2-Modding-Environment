
/* WARNING: Control flow encountered bad instruction data */

void FUN_08c9907e(void)

{
  bool in_ZR;
  
  if (in_ZR) {
    software_interrupt(0xff0000);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

