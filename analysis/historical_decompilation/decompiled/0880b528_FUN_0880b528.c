
/* WARNING: Control flow encountered bad instruction data */

void FUN_0880b528(void)

{
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr4;
  
  if (in_ZR || in_NG != in_OV) {
    software_interrupt(0xfdb500);
  }
  if (!in_CY || in_ZR) {
    coprocessor_storelong(5,in_cr4,in_r12);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

