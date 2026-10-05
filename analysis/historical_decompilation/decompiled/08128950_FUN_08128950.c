
/* WARNING: Control flow encountered bad instruction data */

void FUN_08128950(void)

{
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    if (!in_CY) {
      software_interrupt(0x7fa080);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

