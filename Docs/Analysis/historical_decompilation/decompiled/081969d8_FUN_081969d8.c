
/* WARNING: Control flow encountered bad instruction data */

void FUN_081969d8(void)

{
  int unaff_r5;
  undefined2 unaff_r11;
  
  *(undefined2 *)(unaff_r5 + 0x53) = unaff_r11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

