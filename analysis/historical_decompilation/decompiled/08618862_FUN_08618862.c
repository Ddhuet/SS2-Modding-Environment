
/* WARNING: Control flow encountered bad instruction data */

void FUN_08618862(void)

{
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    software_interrupt(0x34b55b);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

