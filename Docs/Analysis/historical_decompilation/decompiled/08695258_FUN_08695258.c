
/* WARNING: Control flow encountered bad instruction data */

void FUN_08695258(void)

{
  undefined4 unaff_r11;
  int in_r12;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    *(undefined4 *)(in_r12 + -0x50d) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

