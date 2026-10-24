
/* WARNING: Control flow encountered bad instruction data */

void FUN_082676d8(undefined1 *param_1)

{
  undefined1 unaff_r11;
  bool in_CY;
  
  if (in_CY) {
    *param_1 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

