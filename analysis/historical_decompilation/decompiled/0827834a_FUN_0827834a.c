
/* WARNING: Control flow encountered bad instruction data */

void FUN_0827834a(void)

{
  bool in_ZR;
  
  if (!in_ZR) {
    software_interrupt(0x1405f4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

