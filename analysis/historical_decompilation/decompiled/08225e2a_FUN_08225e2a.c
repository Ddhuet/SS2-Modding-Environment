
/* WARNING: Control flow encountered bad instruction data */

void FUN_08225e2a(void)

{
  undefined4 unaff_r11;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    uRam0822640a = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

