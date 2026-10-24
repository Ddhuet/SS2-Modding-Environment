
/* WARNING: Control flow encountered bad instruction data */

void FUN_08614678(void)

{
  undefined4 *in_r3;
  undefined4 unaff_r11;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    *in_r3 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

