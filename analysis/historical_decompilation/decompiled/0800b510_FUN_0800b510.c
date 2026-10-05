
/* WARNING: Control flow encountered bad instruction data */

void FUN_0800b510(undefined4 *param_1)

{
  int *unaff_r9;
  undefined4 unaff_r11;
  bool in_ZR;
  
  if (in_ZR) {
    *param_1 = unaff_r11;
    *unaff_r9 = (int)(param_1 + -0x15c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

