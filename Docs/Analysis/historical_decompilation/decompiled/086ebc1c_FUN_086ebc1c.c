
/* WARNING: Control flow encountered bad instruction data */

void FUN_086ebc1c(int param_1)

{
  undefined1 unaff_r11;
  bool in_CY;
  
  if (in_CY) {
    *(undefined1 *)(param_1 + 0x502) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

