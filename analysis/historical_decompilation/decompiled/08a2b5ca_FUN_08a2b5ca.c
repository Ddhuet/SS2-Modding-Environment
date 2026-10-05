
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a2b5ca(void)

{
  bool in_CY;
  
  if (!in_CY) {
    software_interrupt(0xb53a);
    software_interrupt(0xb63a);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

