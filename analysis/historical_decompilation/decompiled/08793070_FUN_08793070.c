
/* WARNING: Control flow encountered bad instruction data */

void FUN_08793070(void)

{
  undefined4 unaff_r11;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    software_interrupt(0xf6b5f0);
  }
  HintPreloadInstruction(unaff_r11);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

