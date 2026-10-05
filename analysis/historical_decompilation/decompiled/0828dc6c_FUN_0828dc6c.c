
/* WARNING: Control flow encountered bad instruction data */

void FUN_0828dc6c(void)

{
  uint unaff_r4;
  undefined4 *unaff_r5;
  int unaff_r6;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  char in_NG;
  bool in_CY;
  char in_OV;
  
  if (in_NG == in_OV) {
    *(undefined4 *)(unaff_r6 + (unaff_r4 >> 0xb | unaff_r4 << 0x15)) = unaff_r11;
  }
  if (in_CY) {
    *unaff_r5 = unaff_lr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

