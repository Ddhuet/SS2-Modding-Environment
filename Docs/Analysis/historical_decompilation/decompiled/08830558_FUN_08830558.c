
/* WARNING: Control flow encountered bad instruction data */

void FUN_08830558(void)

{
  int unaff_r7;
  byte *unaff_r8;
  undefined4 *unaff_r9;
  int *unaff_r10;
  int unaff_r11;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr14;
  
  if (in_NG != in_OV) {
    coprocessor_loadlong(5,in_cr11,unaff_r11 + 0x9c);
    func_0x0838d294();
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    coprocessor_storelong(8,in_cr11,0x883074c);
  }
  if (in_NG != in_OV) {
    coprocessor_movefromRt(7,7,4,in_cr14,in_cr10);
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY && !(bool)in_ZR) {
      unaff_r9 = *(undefined4 **)(unaff_r7 + -0x10);
      unaff_r7 = unaff_r7 + -0x1c;
    }
    else {
      unaff_r8 = (byte *)((int)unaff_r8 * -0x7ffff);
      unaff_r10 = (int *)(uint)*unaff_r8;
    }
    if (!(bool)in_OV) {
      *unaff_r9 = unaff_r8;
    }
    if ((bool)in_CY && !(bool)in_ZR) {
      *unaff_r10 = unaff_r7;
    }
    if ((bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

