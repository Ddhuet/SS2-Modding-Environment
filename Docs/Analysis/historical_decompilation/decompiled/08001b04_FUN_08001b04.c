
/* WARNING: Control flow encountered bad instruction data */

void FUN_08001b04(undefined4 *param_1)

{
  undefined4 unaff_r11;
  bool in_ZR;
  
  if (in_ZR) {
    *param_1 = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

