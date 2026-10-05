
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e53238(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  uint unaff_r9;
  uint unaff_r10;
  undefined4 *unaff_r11;
  bool in_NG;
  char cVar2;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  bool bVar3;
  bool bVar4;
  
  if (in_NG) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_OV != '\0') {
    unaff_r11 = (undefined4 *)*unaff_r11;
  }
  if (in_CY) {
    if (in_ZR) {
      *(uint *)(unaff_r9 + 4) = param_1;
      *(undefined4 *)(unaff_r9 + 8) = param_4;
      *(undefined4 *)(unaff_r9 + 0xc) = unaff_r5;
      *(undefined4 *)(unaff_r9 + 0x10) = unaff_r7;
      *(undefined4 *)(unaff_r9 + 0x14) = unaff_r8;
      *(uint *)(unaff_r9 + 0x18) = unaff_r9;
      *(undefined4 **)(unaff_r9 + 0x1c) = unaff_r11;
      *(BADSPACEBASE **)(unaff_r9 + 0x20) = register0x00000054;
      *(undefined4 *)(unaff_r9 + 0x24) = 0x8e5324c;
    }
    bVar4 = true;
    bVar3 = false;
    if (in_ZR) {
      bVar4 = (bool)((byte)(unaff_r10 >> 0x14) & 1);
      unaff_r10 = (uint)unaff_r11 & unaff_r10 >> 0x15;
      bVar3 = unaff_r10 == 0;
    }
    cVar2 = '\0';
    if (bVar3) {
      param_2 = param_2 & (uint)unaff_r11 >> 0x17;
      uVar1 = param_1 & unaff_r10 << (param_1 & 0xff);
      uVar1 = uVar1 & (int)unaff_r11 << (uVar1 & 0xff);
      param_1 = uVar1 & (int)unaff_r11 << (uVar1 & 0xff) &
                (int)unaff_r11 << (param_1 & param_2 << (param_2 & 0xff) & 0xff) & unaff_r9 >> 3;
    }
    if (!bVar4) {
      func_0x078b5518(param_1);
    }
    if (cVar2 != in_OV) {
      func_0x07cf9944();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

