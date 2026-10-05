
/* WARNING: Control flow encountered bad instruction data */

void FUN_08240c4e(void)

{
  undefined1 *unaff_r4;
  undefined1 unaff_r11;
  int in_r12;
  undefined4 unaff_pc;
  bool in_ZR;
  bool in_CY;
  
  if (!in_CY) {
    *unaff_r4 = unaff_r11;
  }
  if (!in_ZR) {
    *(undefined4 *)(in_r12 + -0x121) = unaff_pc;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

