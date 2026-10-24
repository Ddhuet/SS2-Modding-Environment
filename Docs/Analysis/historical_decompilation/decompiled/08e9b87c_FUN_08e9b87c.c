
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e9b87c(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_r11;
  bool in_NG;
  
  if (in_NG) {
    return;
  }
  *(undefined4 *)(param_3 + 0x555) = unaff_r11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

