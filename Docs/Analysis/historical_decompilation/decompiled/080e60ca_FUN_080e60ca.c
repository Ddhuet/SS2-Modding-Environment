
/* WARNING: Control flow encountered bad instruction data */

void FUN_080e60ca(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 unaff_r11;
  int unaff_lr;
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    *(undefined4 *)(unaff_lr + -0x52) = param_1;
  }
  else {
    *param_4 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

