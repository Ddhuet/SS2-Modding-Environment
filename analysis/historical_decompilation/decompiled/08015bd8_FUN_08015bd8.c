
/* WARNING: Control flow encountered bad instruction data */

void FUN_08015bd8(undefined4 *param_1)

{
  undefined4 unaff_r11;
  bool in_CY;
  
  if (in_CY) {
    *param_1 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

