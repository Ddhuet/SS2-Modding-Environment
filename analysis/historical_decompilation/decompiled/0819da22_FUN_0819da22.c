
/* WARNING: Control flow encountered bad instruction data */

void FUN_0819da22(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined1 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR || in_NG != in_OV) {
    *param_3 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

