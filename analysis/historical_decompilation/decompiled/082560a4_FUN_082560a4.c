
/* WARNING: Control flow encountered bad instruction data */

void FUN_082560a4(void)

{
  int in_r3;
  int unaff_r4;
  undefined1 *unaff_r9;
  undefined4 unaff_r11;
  bool in_ZR;
  
  if (!in_ZR) {
    *(undefined4 *)(unaff_r4 + in_r3 * -0x800) = unaff_r11;
  }
  *unaff_r9 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

