
/* WARNING: Control flow encountered bad instruction data */

void FUN_0862a462(void)

{
  int in_r3;
  undefined4 unaff_r11;
  bool in_CY;
  
  if (!in_CY) {
    *(undefined4 *)(in_r3 + -0x535) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

