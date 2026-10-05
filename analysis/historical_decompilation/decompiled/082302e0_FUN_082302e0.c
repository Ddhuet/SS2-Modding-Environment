
/* WARNING: Control flow encountered bad instruction data */

void FUN_082302e0(void)

{
  int unaff_r5;
  uint unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  if (in_NG != in_OV) {
    return;
  }
  func_0x07a235e0();
  if ((bool)in_ZR || in_NG != in_OV) {
    in_NG = (int)(unaff_r11 & 0xffc2ffff) < 0;
    in_ZR = (unaff_r11 & 0xffc2ffff) == 0;
  }
  software_interrupt(0xe4dacf);
  func_0x082b02ea();
  if ((bool)in_ZR) {
    if (in_NG == in_OV) {
      *(undefined4 *)(unaff_r5 + 0x4a3) = uRam082eeee0;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

