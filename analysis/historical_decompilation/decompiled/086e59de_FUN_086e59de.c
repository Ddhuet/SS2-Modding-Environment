
/* WARNING: Control flow encountered bad instruction data */

void FUN_086e59de(undefined4 *param_1)

{
  undefined4 unaff_r11;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    *param_1 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

