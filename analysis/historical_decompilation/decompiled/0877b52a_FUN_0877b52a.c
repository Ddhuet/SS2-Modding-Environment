
/* WARNING: Control flow encountered bad instruction data */

void FUN_0877b52a(void)

{
  bool in_ZR;
  
  if (in_ZR) {
    software_interrupt(0x501640);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

