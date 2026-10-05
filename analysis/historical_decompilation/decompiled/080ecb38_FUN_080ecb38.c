
/* WARNING: Control flow encountered bad instruction data */

void FUN_080ecb38(void)

{
  undefined1 uVar1;
  int unaff_r8;
  undefined4 unaff_r11;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined1 extraout_r3;
  
  if (in_NG != in_OV) {
    if (in_ZR || in_NG != in_OV) {
      software_interrupt(0xc6b7b0);
    }
    func_0x07c62a8a();
    if ((bool)in_NG) {
      software_interrupt(0x4c3010);
    }
    if (!(bool)in_CY) {
      unaff_r11 = uRam080ecb58;
    }
    uVar1 = (undefined1)unaff_r11;
    if (!in_ZR) {
      func_0x08835400();
      uVar1 = extraout_r3;
    }
    if (!(bool)in_CY) {
      *(undefined1 *)(unaff_r8 + -0xf29) = uVar1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

