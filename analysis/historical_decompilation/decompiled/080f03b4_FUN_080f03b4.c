
/* WARNING: Control flow encountered bad instruction data */

void FUN_080f03b4(void)

{
  undefined4 unaff_r11;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr11;
  
  if (!in_CY || in_ZR) {
    coprocessor_store(5,in_cr11,unaff_r11);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

