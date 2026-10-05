
/* WARNING: Control flow encountered bad instruction data */

void FUN_08c8a064(void)

{
  char *unaff_r11;
  bool in_CY;
  
  if (!in_CY) {
    *unaff_r11 = (char)unaff_r11 + -0x21;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

