
/* WARNING: Control flow encountered bad instruction data */

void FUN_082fd9c8(void)

{
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_load(5,in_cr11,unaff_r11);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

