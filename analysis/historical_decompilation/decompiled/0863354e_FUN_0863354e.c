
/* WARNING: Control flow encountered bad instruction data */

void FUN_0863354e(void)

{
  undefined4 unaff_r11;
  int in_r12;
  bool in_CY;
  
  if (!in_CY) {
    *(undefined4 *)(in_r12 + -0x535) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

