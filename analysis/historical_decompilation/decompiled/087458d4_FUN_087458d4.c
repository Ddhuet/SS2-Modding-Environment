
/* WARNING: Control flow encountered bad instruction data */

void FUN_087458d4(void)

{
  undefined4 *unaff_r6;
  undefined4 unaff_r11;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    *unaff_r6 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

