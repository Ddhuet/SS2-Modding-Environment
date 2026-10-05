
/* WARNING: Control flow encountered bad instruction data */

void FUN_08743e06(void)

{
  bool in_NG;
  
  if (in_NG) {
    software_interrupt(0xfe5fa5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

