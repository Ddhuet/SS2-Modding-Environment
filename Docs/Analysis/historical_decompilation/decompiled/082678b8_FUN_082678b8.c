
/* WARNING: Control flow encountered bad instruction data */

void FUN_082678b8(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 unaff_r11;
  bool in_NG;
  
  if (in_NG) {
    *param_4 = unaff_r11;
  }
  *param_3 = unaff_r11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

