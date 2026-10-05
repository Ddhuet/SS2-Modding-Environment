
/* WARNING: Control flow encountered bad instruction data */

void FUN_08d6f4ea(void)

{
  undefined1 *in_r3;
  undefined1 uVar1;
  byte *unaff_r4;
  byte *pbVar2;
  undefined1 *unaff_r5;
  undefined1 *puVar3;
  undefined1 *unaff_r7;
  byte *unaff_r8;
  uint unaff_r11;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (in_CY && !in_ZR) {
    unaff_r5 = (undefined1 *)
               (((ulonglong)unaff_r11 << 0x20) + (longlong)(int)unaff_r5 * (longlong)(int)unaff_r5 +
                0x80000000 >> 0x20);
  }
  if (in_NG) {
    pbVar2 = unaff_r4 + -0x557;
    unaff_r11 = (uint)*unaff_r4;
    unaff_r5[-0x345] = (char)unaff_r8;
  }
  else {
    *in_r3 = (char)unaff_r5;
    pbVar2 = unaff_r4;
  }
  puVar3 = unaff_r5;
  if (!in_CY) {
    puVar3 = unaff_r5 + -0x435;
    *unaff_r5 = (char)unaff_r7;
  }
  if (in_NG) {
    pbVar2 = (byte *)((uint)pbVar2 & 0xffff);
  }
  else {
    pbVar2[-0x233] = (byte)pbVar2;
  }
  uVar1 = SUB41(pbVar2,0);
  if (!in_CY || in_ZR) {
    uVar1 = (undefined1)*(undefined4 *)(unaff_r8 + -0x1c);
    unaff_r8 = unaff_r8 + -0x28;
  }
  if (!in_NG) {
    unaff_r7 = (undefined1 *)(uint)*unaff_r8;
  }
  if (!in_OV) {
    puVar3[-0x755] = (char)unaff_r7;
    uVar1 = (undefined1)*(undefined4 *)(unaff_r11 + 8);
  }
  if (!in_CY) {
    *unaff_r7 = (char)puVar3;
  }
  if (in_NG) {
    *puVar3 = uVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

