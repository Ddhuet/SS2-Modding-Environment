
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e9576c(undefined4 param_1,undefined4 param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 unaff_r11;
  bool in_NG;
  
  if (in_NG) {
    *param_3 = unaff_r11;
    param_3[-0x544] = unaff_r11;
    param_3[-0xb99] = unaff_r11;
    *param_4 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

