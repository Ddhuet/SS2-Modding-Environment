
/* WARNING: Control flow encountered bad instruction data */

void FUN_088aee04(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  byte *unaff_r9;
  undefined4 unaff_r10;
  uint unaff_r11;
  int in_r12;
  undefined4 unaff_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (!in_OV) {
    unaff_r9 = unaff_r9 + -(param_4 >> 10);
    unaff_r11 = (uint)*unaff_r9;
  }
  if (!in_CY || in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_NG == in_OV) {
    *(undefined4 *)(unaff_r11 + 4) = param_2;
    *(uint *)(unaff_r11 + 8) = param_4;
    *(undefined4 *)(unaff_r11 + 0xc) = unaff_r5;
    *(undefined4 *)(unaff_r11 + 0x10) = unaff_r7;
    *(byte **)(unaff_r11 + 0x14) = unaff_r9;
    *(uint *)(unaff_r11 + 0x18) = unaff_r11;
    *(BADSPACEBASE **)(unaff_r11 + 0x1c) = register0x00000054;
    *(undefined4 *)(unaff_r11 + 0x20) = 0x88aee14;
    unaff_r11 = unaff_r11 + 0x20;
  }
  if (!in_OV) {
    *(undefined4 *)(unaff_r11 + 4) = param_2;
    *(uint *)(unaff_r11 + 8) = param_4;
    *(undefined4 *)(unaff_r11 + 0xc) = unaff_r5;
    *(undefined4 *)(unaff_r11 + 0x10) = unaff_r7;
    *(undefined4 *)(unaff_r11 + 0x14) = unaff_r10;
    *(uint *)(unaff_r11 + 0x18) = unaff_r11;
    *(undefined4 *)(unaff_r11 + 0x1c) = unaff_lr;
    *(undefined4 *)(unaff_r11 + 0x20) = 0x88aee18;
    unaff_r11 = *(uint *)(unaff_r11 + (in_r12 >> 0x19));
  }
  if ((bool)in_NG == in_OV) {
    *(undefined4 *)(unaff_r9 + 4) = param_3;
    *(uint *)(unaff_r9 + 8) = param_4;
    *(undefined4 *)(unaff_r9 + 0xc) = unaff_r4;
    *(undefined4 *)(unaff_r9 + 0x10) = unaff_r5;
    *(undefined4 *)(unaff_r9 + 0x14) = unaff_r7;
    *(byte **)(unaff_r9 + 0x18) = unaff_r9;
    *(uint *)(unaff_r9 + 0x1c) = unaff_r11;
    *(BADSPACEBASE **)(unaff_r9 + 0x20) = register0x00000054;
    unaff_r9[0x24] = 0x20;
    unaff_r9[0x25] = 0xee;
    unaff_r9[0x26] = 0x8a;
    unaff_r9[0x27] = 8;
  }
  if (!in_CY || in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

