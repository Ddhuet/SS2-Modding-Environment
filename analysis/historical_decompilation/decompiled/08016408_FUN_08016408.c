
undefined4 FUN_08016408(void)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 unaff_lr;
  
  uVar8 = 0;
  iVar9 = 0;
  do {
    iVar7 = iVar9 + DAT_0801649c;
    iVar5 = FUN_08000470(iVar7);
    if (iVar5 != 0) {
      FUN_080003a8(iVar7);
      iVar5 = uVar8 * DAT_080164a4 + *DAT_080164a0;
      *(undefined2 *)(iVar5 + 0x5c) = 0;
      *(undefined2 *)(iVar5 + 0xc) = 0xb;
      FUN_08058668(*(undefined1 *)(iVar5 + 0x86),*(undefined1 *)(iVar5 + 0x84),3);
    }
    piVar1 = DAT_080164a8;
    iVar9 = iVar9 + 0x28;
    uVar8 = uVar8 + 1;
  } while (uVar8 < 5);
  uVar8 = 0;
  iVar9 = 0;
  do {
    iVar5 = FUN_08000470(*piVar1 + iVar9);
    if (iVar5 != 0) {
      FUN_080003a8(*piVar1 + iVar9);
    }
    puVar4 = DAT_080164b4;
    puVar3 = DAT_080164b0;
    puVar2 = DAT_080164ac;
    iVar9 = iVar9 + 0x28;
    uVar8 = uVar8 + 1;
  } while (uVar8 < 2);
  uVar8 = 0;
  puVar6 = DAT_080164b8;
  do {
    puVar6[2] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6 = puVar6 + 3;
    uVar8 = uVar8 + 1;
  } while (uVar8 < 3);
  *puVar2 = 0;
  *puVar3 = 0;
  *puVar4 = 0;
  return unaff_lr;
}

