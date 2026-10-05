
/* WARNING: Control flow encountered bad instruction data */

void FUN_08689f78(void)

{
  undefined4 unaff_r11;
  int in_r12;
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    *(undefined4 *)(in_r12 + -0x51f) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

