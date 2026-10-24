
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08a39d7e(void)

{
  int unaff_r8;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    if (in_ZR) {
      software_interrupt(0x28f5dd);
      software_interrupt(0x290000);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined4 *)(unaff_r8 + 4);
}

