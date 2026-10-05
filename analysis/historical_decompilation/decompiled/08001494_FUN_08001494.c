
undefined8 FUN_08001494(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_lr;
  
  uVar1 = DAT_0800150c;
  uVar3 = param_1 + 3U & 0xfffffffc;
  if (uVar3 < 0x10) {
    uVar3 = 0x10;
  }
  uVar5 = *(uint *)(DAT_08001508 + 0xc);
  do {
    if (uVar5 == DAT_08001508) {
      iVar4 = 0;
LAB_08001532:
      return CONCAT44(unaff_lr,iVar4);
    }
    uVar2 = *(int *)(uVar5 + 4) - uVar5;
    if (uVar3 + 0x10 <= uVar2) {
      if (uVar2 < uVar3 + 0x30) {
        *(undefined4 *)(*(int *)(uVar5 + 8) + 0xc) = *(undefined4 *)(uVar5 + 0xc);
        *(undefined4 *)(*(int *)(uVar5 + 0xc) + 8) = *(undefined4 *)(uVar5 + 8);
      }
      else {
        iVar4 = uVar5 + uVar3;
        uVar3 = iVar4 + 0x10;
        *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) & 0x80000000 | uVar5 & DAT_0800150c;
        *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(uVar5 + 4);
        *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(uVar5 + 8);
        *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(uVar5 + 0xc);
        *(byte *)(iVar4 + 0x13) = *(byte *)(iVar4 + 0x13) & 0x7f;
        **(uint **)(uVar5 + 4) = **(uint **)(uVar5 + 4) & 0x80000000 | uVar3 & uVar1;
        *(uint *)(uVar5 + 4) = uVar3;
        *(uint *)(*(int *)(uVar5 + 8) + 0xc) = uVar3;
        *(uint *)(*(int *)(uVar5 + 0xc) + 8) = uVar3;
      }
      *(byte *)(uVar5 + 3) = *(byte *)(uVar5 + 3) | 0x80;
      iVar4 = uVar5 + 0x10;
      goto LAB_08001532;
    }
    uVar5 = *(uint *)(uVar5 + 0xc);
  } while( true );
}

