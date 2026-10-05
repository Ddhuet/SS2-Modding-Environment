
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e1673e(void)

{
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (in_OV) {
    software_interrupt(0x58b59a);
  }
  if (in_CY && !in_ZR) {
    software_interrupt(0x8fb6b5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

