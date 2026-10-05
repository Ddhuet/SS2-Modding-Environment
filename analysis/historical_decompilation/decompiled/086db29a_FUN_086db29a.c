
/* WARNING: Control flow encountered bad instruction data */

void FUN_086db29a(void)

{
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY || in_ZR) {
    software_interrupt(0xf5e592);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

