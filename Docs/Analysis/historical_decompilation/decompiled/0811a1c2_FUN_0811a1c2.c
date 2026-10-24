
/* WARNING: Control flow encountered bad instruction data */

void FUN_0811a1c2(void)

{
  uint uVar1;
  uint unaff_r4;
  int unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined1 *unaff_r11;
  undefined1 *puVar2;
  int extraout_r12;
  bool in_NG;
  bool in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  undefined4 in_cr15;
  undefined8 uVar3;
  
  if (!in_ZR) {
    return;
  }
  puVar2 = unaff_r11;
  if (in_NG) {
    puVar2 = unaff_r11 + -0x812;
    *unaff_r11 = (char)unaff_r4;
  }
  uVar3 = func_0x089702e2();
  uVar1 = (uint)((ulonglong)uVar3 >> 0x20);
  if (in_NG != (bool)in_OV) {
    if (in_ZR) {
      unaff_r10 = uRam0811a1ce;
    }
    if ((bool)in_OV) {
      uVar1 = uVar1 & 0xffff | 0xc10b0000;
    }
    if (!in_ZR) {
      unaff_r4 = (uint)*(byte *)(unaff_r4 - ((int)uVar3 >> 0x1a));
    }
    if (!(bool)in_CY || in_ZR) {
      coprocessor_storelong(0xc,in_cr15,extraout_r12 + 0x3c4);
    }
    if (!in_ZR && in_NG == (bool)in_OV) {
      *(int *)(unaff_r5 + 4) = (int)uVar3;
      *(uint *)(unaff_r5 + 8) = uVar1;
      *(uint *)(unaff_r5 + 0xc) = unaff_r4;
      *(int *)(unaff_r5 + 0x10) = unaff_r5;
      *(undefined4 *)(unaff_r5 + 0x14) = unaff_r7;
      *(undefined4 *)(unaff_r5 + 0x18) = unaff_r8;
      *(undefined4 *)(unaff_r5 + 0x1c) = unaff_r9;
      *(undefined4 *)(unaff_r5 + 0x20) = unaff_r10;
      *(undefined1 **)(unaff_r5 + 0x24) = puVar2;
      *(int *)(unaff_r5 + 0x28) = extraout_r12;
      *(BADSPACEBASE **)(unaff_r5 + 0x2c) = register0x00000054;
      *(undefined4 *)(unaff_r5 + 0x30) = 0x811a1ea;
    }
    if (in_NG) {
      software_interrupt(0x513c55);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

