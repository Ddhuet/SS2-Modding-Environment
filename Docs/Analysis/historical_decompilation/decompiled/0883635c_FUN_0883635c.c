
/* WARNING: Control flow encountered bad instruction data */

void FUN_0883635c(void)

{
  undefined4 *unaff_r5;
  char *unaff_r8;
  undefined4 unaff_r10;
  char unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr4;
  
  if (!(bool)in_CY || (bool)in_ZR) {
    return;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    if ((bool)in_OV) {
      *unaff_r5 = unaff_r10;
    }
    if (in_NG != in_OV) {
      func_0x07647510();
    }
    if (!(bool)in_ZR && in_NG == in_OV) {
      coprocessor_storelong(3,in_cr4,unaff_r8);
    }
    if ((bool)in_CY && !(bool)in_ZR) {
      unaff_r8[-0xa41] = unaff_r11;
    }
    if (!(bool)in_NG) {
      *unaff_r8 = (char)unaff_r8 + -0x68;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

