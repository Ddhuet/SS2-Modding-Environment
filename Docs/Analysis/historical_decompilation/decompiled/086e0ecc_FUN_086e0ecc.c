
/* WARNING: Control flow encountered bad instruction data */

void FUN_086e0ecc(void)

{
  bool in_ZR;
  
  if (in_ZR) {
    software_interrupt(0x1b501);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

