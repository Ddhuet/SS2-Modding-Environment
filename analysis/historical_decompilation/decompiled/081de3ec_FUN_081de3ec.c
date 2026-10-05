
/* WARNING: Control flow encountered bad instruction data */

void FUN_081de3ec(void)

{
  int unaff_r7;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr11;
  
  if (!in_CY || in_ZR) {
    coprocessor_store(5,in_cr11,unaff_r7 + 0x308);
  }
  if (in_OV) {
    software_interrupt(0x6d5332);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

