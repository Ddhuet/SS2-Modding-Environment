
/* WARNING: Control flow encountered bad instruction data */

void FUN_086f5790(undefined4 param_1,undefined1 *param_2)

{
  undefined1 unaff_r11;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    *param_2 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

