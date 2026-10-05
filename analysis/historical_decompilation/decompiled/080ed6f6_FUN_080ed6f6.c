
/* WARNING: Control flow encountered bad instruction data */

void FUN_080ed6f6(void)

{
  int unaff_r5;
  undefined4 *unaff_r6;
  byte *unaff_r7;
  undefined2 uVar1;
  int unaff_r11;
  uint unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  byte in_CY;
  char in_OV;
  
  if (in_NG != in_OV) {
    in_OV = SCARRY4(unaff_r5,0x2e000000) != SCARRY4(unaff_r5 + 0x2e000000,(uint)in_CY);
    unaff_r11 = unaff_r5 + 0x2e000000 + (uint)in_CY;
    in_NG = unaff_r11 < 0;
    in_ZR = unaff_r11 == 0;
  }
  uVar1 = (undefined2)unaff_r11;
  if (!(bool)in_ZR && in_NG == in_OV) {
    unaff_lr = (uint)*unaff_r7;
  }
  if (in_NG != in_OV) {
    uVar1 = (undefined2)*unaff_r6;
  }
  *(undefined2 *)(unaff_lr + 0xb4) = uVar1;
  if (!(bool)in_ZR && in_NG == in_OV) {
    return;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

