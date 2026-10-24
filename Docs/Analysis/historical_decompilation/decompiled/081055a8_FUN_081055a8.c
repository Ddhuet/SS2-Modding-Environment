
/* WARNING: Control flow encountered bad instruction data */

void FUN_081055a8(void)

{
  uint extraout_r1;
  uint uVar1;
  uint extraout_r2;
  int extraout_r3;
  int unaff_r4;
  undefined4 unaff_r5;
  int unaff_r6;
  undefined4 unaff_r8;
  uint unaff_r10;
  int unaff_r11;
  int extraout_r12;
  int iVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  byte in_CY;
  undefined1 in_OV;
  byte bVar3;
  
  func_0x07472c3c();
  uVar1 = extraout_r1;
  if ((bool)in_NG) {
    uVar1 = unaff_r10;
  }
  if ((bool)in_OV) {
    unaff_r6 = (unaff_r4 >> (uVar1 & 0xff)) - unaff_r11;
  }
  software_interrupt(0x122d49);
  iVar2 = extraout_r12;
  bVar3 = in_CY;
  if (in_NG != in_OV) {
    bVar3 = 0xffffff2c < extraout_r2 || CARRY4(extraout_r2 + 0xd3,(uint)in_CY);
    iVar2 = extraout_r2 + 0xd3 + (uint)in_CY;
    in_NG = iVar2 < 0;
    in_ZR = iVar2 == 0;
  }
  if ((bool)in_ZR) {
    iVar2 = 0x2f000 - (extraout_r3 + (uint)!(bool)bVar3);
  }
  if ((bool)in_NG) {
    *(BADSPACEBASE **)(unaff_r6 + -4) = register0x00000054;
    *(int *)(unaff_r6 + -8) = iVar2;
    *(uint *)(unaff_r6 + -0xc) = unaff_r10;
    *(undefined4 *)(unaff_r6 + -0x10) = unaff_r8;
    *(undefined4 *)(unaff_r6 + -0x14) = unaff_r5;
  }
  if ((bool)in_ZR) {
    software_interrupt(0x263642);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

