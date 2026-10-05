
/* WARNING: Control flow encountered bad instruction data */

void FUN_0810e9c6(void)

{
  int in_r3;
  char *unaff_r11;
  bool in_CY;
  
  if (in_CY) {
    *unaff_r11 = (char)unaff_r11 + (char)(in_r3 >> 0xb);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

