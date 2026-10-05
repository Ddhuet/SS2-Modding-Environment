
/* WARNING: Control flow encountered bad instruction data */

void FUN_0869c68a(void)

{
  uint uVar1;
  int in_r3;
  uint unaff_r4;
  byte unaff_r7;
  uint unaff_r11;
  uint in_r12;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  undefined1 uVar2;
  
  uVar2 = in_CY;
  if (!(bool)in_ZR) {
    uVar2 = in_r12 < in_r12 * 0x400 || in_r12 * 0x3ff < (uint)in_CY;
    in_OV = SBORROW4(in_r12 * 0x400,in_r12) != SBORROW4(in_r12 * 0x3ff,(uint)!in_CY);
    unaff_r11 = in_r12 * 0x3ff - (uint)!in_CY;
    in_NG = (int)unaff_r11 < 0;
    in_ZR = unaff_r11 == 0;
  }
  if (!(bool)in_OV) {
    uVar1 = unaff_r11 >> (unaff_r4 & 0xff);
    uVar2 = CARRY4(unaff_r11,uVar1);
    in_OV = SCARRY4(unaff_r11,uVar1);
    in_NG = (int)(unaff_r11 + uVar1) < 0;
    in_ZR = unaff_r11 + uVar1 == 0;
  }
  if (!(bool)uVar2 || (bool)in_ZR) {
    unaff_r7 = (byte)in_r3 & 0xd3;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    *(byte *)(in_r3 + 0x40b) = unaff_r7;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

