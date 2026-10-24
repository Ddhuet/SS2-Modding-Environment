
/* WARNING: Control flow encountered bad instruction data */

void FUN_08292006(void)

{
  undefined4 unaff_r11;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    uRam082925c5 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

