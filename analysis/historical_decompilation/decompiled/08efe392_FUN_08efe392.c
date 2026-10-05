
/* WARNING: Control flow encountered bad instruction data */

void FUN_08efe392(void)

{
  uint unaff_r8;
  char *unaff_r11;
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    coprocessor_load(5,in_cr11,unaff_r8);
  }
  else {
    *unaff_r11 = (char)unaff_r11 - (char)(unaff_r8 >> 0x14);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

