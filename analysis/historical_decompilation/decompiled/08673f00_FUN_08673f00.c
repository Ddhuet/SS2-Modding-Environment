
/* WARNING: Control flow encountered bad instruction data */

void FUN_08673f00(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 unaff_r11;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    *(undefined1 *)(param_3 + -0x543) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

