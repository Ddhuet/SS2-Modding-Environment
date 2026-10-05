
/* WARNING: Control flow encountered bad instruction data */

void FUN_081f937e(void)

{
  uint unaff_r5;
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    coprocessor_load(9,in_cr11,
                     ((unaff_r5 >> 0x10) << 0x18 | (unaff_r5 >> 0x18) << 0x10 |
                      (unaff_r5 & 0xff) << 8 | unaff_r5 >> 8 & 0xff) + 0x2e0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

