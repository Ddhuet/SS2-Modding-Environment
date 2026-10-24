
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e9bdc2(void)

{
  int in_r3;
  undefined1 unaff_r11;
  bool in_NG;
  
  if (in_NG) {
    *(undefined1 *)(in_r3 + -0x544) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

