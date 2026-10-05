
/* WARNING: Control flow encountered bad instruction data */

void FUN_087d8170(void)

{
  uint unaff_r9;
  undefined4 unaff_r11;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (!in_CY || in_ZR) {
    return;
  }
  if (!in_OV) {
    *(undefined4 *)(unaff_r9 + (unaff_r9 >> 0xe | unaff_r9 << 0x12)) = unaff_r11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

