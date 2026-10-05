
/* WARNING: Control flow encountered bad instruction data */

void FUN_08df6f8c(void)

{
  int in_r3;
  int unaff_r5;
  undefined4 unaff_r11;
  bool in_NG;
  
  if (in_NG) {
    *(undefined4 *)(unaff_r5 + 0x586) = unaff_r11;
  }
  else {
    *(int *)(in_r3 + 0x584) = unaff_r5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

