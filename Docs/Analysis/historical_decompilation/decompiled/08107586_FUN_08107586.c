
/* WARNING: Control flow encountered bad instruction data */

void FUN_08107586(void)

{
  undefined1 unaff_r4;
  int unaff_r5;
  int unaff_r11;
  uint unaff_lr;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != (bool)in_OV) {
    coprocessor_load(5,in_cr11,unaff_r5 + 0x2f4);
  }
  if (!in_ZR) {
    unaff_lr = (uint)*(byte *)(unaff_r11 + 0x2cd);
  }
  if (!in_NG) {
    *(undefined1 *)(unaff_lr - 0x2c) = unaff_r4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

