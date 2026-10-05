
/* WARNING: Control flow encountered bad instruction data */

void FUN_081c1848(void)

{
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr9;
  undefined4 in_cr11;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_function(5,0xc,7,in_cr11,in_cr2,in_cr9);
  }
  if (in_CY && !in_ZR) {
    software_interrupt(0x8dc0c7);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

