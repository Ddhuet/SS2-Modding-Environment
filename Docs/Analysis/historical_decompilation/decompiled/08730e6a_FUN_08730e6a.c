
/* WARNING: Control flow encountered bad instruction data */

void FUN_08730e6a(int param_1)

{
  undefined4 unaff_r11;
  bool in_NG;
  bool in_OV;
  
  if (in_NG) {
    *(undefined4 *)(param_1 + -0x546) = unaff_r11;
  }
  if (in_OV) {
    *(char *)(param_1 + -0x541) = (char)param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

