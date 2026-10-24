
/* WARNING: Control flow encountered bad instruction data */

void FUN_08228c80(void)

{
  undefined4 unaff_r11;
  undefined4 *unaff_lr;
  uint uVar1;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if (in_NG == in_OV) {
    uVar1 = (int)unaff_lr + ((int)unaff_lr >> 0xb);
    *unaff_lr = unaff_r11;
    in_CY = 0xffff66ff < uVar1;
    in_ZR = uVar1 == 0xffff6700;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

