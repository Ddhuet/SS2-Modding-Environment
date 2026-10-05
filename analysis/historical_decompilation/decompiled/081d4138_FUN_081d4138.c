
/* WARNING: Control flow encountered bad instruction data */

void FUN_081d4138(void)

{
  undefined4 unaff_r11;
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    uRam081d4140 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

