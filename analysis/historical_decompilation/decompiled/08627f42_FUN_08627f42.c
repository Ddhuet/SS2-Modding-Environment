
/* WARNING: Control flow encountered bad instruction data */

void FUN_08627f42(void)

{
  bool in_ZR;
  
  if (!in_ZR) {
    software_interrupt(0xf0b5f4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

