
/* WARNING: Control flow encountered bad instruction data */

void FUN_086276ea(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 unaff_r11;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    *param_3 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

