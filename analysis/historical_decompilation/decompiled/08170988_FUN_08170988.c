
/* WARNING: Control flow encountered bad instruction data */

void FUN_08170988(void)

{
  undefined4 unaff_r4;
  int unaff_r7;
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(unaff_r7 + 0x5c4) = unaff_r11;
  if (in_CY && !in_ZR) {
    *(BADSPACEBASE **)unaff_r4 = register0x00000054;
  }
  if (in_NG == in_OV) {
    software_interrupt(0xb19f89);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

