
/* WARNING: Control flow encountered bad instruction data */

void FUN_08682d5c(void)

{
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    software_interrupt(0xd9b55f);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

