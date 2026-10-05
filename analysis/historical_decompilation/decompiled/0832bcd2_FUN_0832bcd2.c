
/* WARNING: Control flow encountered bad instruction data */

void FUN_0832bcd2(void)

{
  bool in_CY;
  
  if (in_CY) {
    software_interrupt(0xf8e4e7);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

