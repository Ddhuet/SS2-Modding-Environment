
/* WARNING: Control flow encountered bad instruction data */

void FUN_08242796(undefined4 param_1,int param_2)

{
  undefined4 unaff_r11;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    *(undefined4 *)(param_2 + 0x5aa) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

