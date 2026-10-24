
/* WARNING: Control flow encountered bad instruction data */

void FUN_0877e7fe(void)

{
  bool in_ZR;
  
  if (in_ZR) {
    software_interrupt(0x29b553);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

