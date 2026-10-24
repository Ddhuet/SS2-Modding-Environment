
/* WARNING: Control flow encountered bad instruction data */

void FUN_080ecae8(void)

{
  int unaff_r7;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_ZR || in_NG != in_OV) {
    coprocessor_storelong(5,in_cr11,unaff_r7 + 0x2c4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

