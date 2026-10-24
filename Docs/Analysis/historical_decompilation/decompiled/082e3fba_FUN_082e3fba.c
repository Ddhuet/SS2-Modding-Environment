
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e3fba(int param_1)

{
  undefined1 unaff_r11;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    *(undefined1 *)(param_1 + 0x5c1) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

