
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e427c(void)

{
  int in_r3;
  int unaff_r4;
  int unaff_r8;
  undefined4 unaff_r11;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  if (in_ZR) {
    coprocessor_moveto(5,7,5,unaff_r11,in_cr2,in_cr15);
  }
  if (in_NG) {
    *(char *)(unaff_r4 - (in_r3 >> 10)) = (char)unaff_r4;
  }
  if (in_NG == (bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_load(5,in_cr11,unaff_r8 + 200);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

