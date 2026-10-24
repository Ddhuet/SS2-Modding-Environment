
/* WARNING: Control flow encountered bad instruction data */

void FUN_08eaffdc(undefined1 *param_1,undefined4 param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint *unaff_r5;
  uint unaff_r8;
  uint unaff_r9;
  uint unaff_r11;
  undefined1 in_NG;
  bool in_ZR;
  bool bVar2;
  byte in_CY;
  bool bVar3;
  
  if (in_ZR) {
    unaff_r11 = unaff_r9 ^
                (unaff_r9 >> ((uint)unaff_r5 & 0x1f) | unaff_r9 << 0x20 - ((uint)unaff_r5 & 0x1f));
    unaff_r9 = param_3 ^ (int)unaff_r9 >> (unaff_r8 & 0xff);
  }
  if (!(bool)in_CY) {
    unaff_r9 = unaff_r9 & 0xffff | 0x4b890000;
  }
  if (in_ZR) {
    in_NG = (int)unaff_r5 < 0;
    param_4 = unaff_r5;
  }
  bVar2 = in_ZR && unaff_r5 == (uint *)0x0;
  if (bVar2) {
    in_NG = (int)unaff_r8 < 0;
    in_CY = 0;
  }
  bVar3 = false;
  if (bVar2 && unaff_r8 == 0) {
    in_CY = (byte)((uint)param_1 >> 8) & 1;
    uVar1 = unaff_r11 ^ (int)param_1 << 0x18;
    in_NG = (int)uVar1 < 0;
    bVar3 = uVar1 == 0;
  }
  if (bVar3) {
    in_CY = (byte)((uint)param_1 >> 0x1c) & 1;
    in_NG = (int)(unaff_r9 ^ (int)param_1 << 4) < 0;
  }
  if (!(bool)in_CY) {
    in_NG = (int)param_4 < 0;
    *(undefined1 **)param_1 = param_1;
    param_1 = (undefined1 *)((uint)param_1 & 0xffff);
  }
  if ((bool)in_NG) {
    param_1 = (undefined1 *)*param_4;
  }
  if (!(bool)in_CY) {
    in_NG = (int)((uint)param_4 ^ 0xcc000000) < 0;
  }
  if ((bool)in_NG) {
    *param_1 = (char)param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

