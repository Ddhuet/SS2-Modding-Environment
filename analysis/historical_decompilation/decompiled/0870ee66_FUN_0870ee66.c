
/* WARNING: Control flow encountered bad instruction data */

void FUN_0870ee66(void)

{
  bool in_ZR;
  
  if (!in_ZR) {
    software_interrupt(0x71b571);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

