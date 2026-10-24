
/* WARNING: Control flow encountered bad instruction data */

void FUN_08046bb4(void)

{
  bool in_NG;
  
  if (in_NG) {
    software_interrupt(0x5b5f0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

