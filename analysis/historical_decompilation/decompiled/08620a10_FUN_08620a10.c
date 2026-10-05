
/* WARNING: Control flow encountered bad instruction data */

void FUN_08620a10(void)

{
  bool in_ZR;
  
  if (in_ZR) {
    software_interrupt(0x80b503);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

