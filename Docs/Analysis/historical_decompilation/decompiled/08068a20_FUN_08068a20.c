
undefined4 FUN_08068a20(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_lr;
  
  uVar3 = FUN_08002164();
  iVar2 = DAT_08068a64;
  iVar1 = DAT_08068a60;
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      uVar6 = 0;
      uVar7 = uVar4 + 1;
      puVar5 = (undefined4 *)(uVar4 * 0x28 + iVar1);
      do {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 1;
        *(undefined4 *)(uVar4 * 4 + iVar2) = 0;
        uVar6 = uVar6 + 1;
      } while (uVar6 < 10);
      uVar4 = uVar7;
    } while (uVar7 < uVar3);
  }
  return unaff_lr;
}

