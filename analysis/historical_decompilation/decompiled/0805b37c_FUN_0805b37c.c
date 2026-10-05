
void FUN_0805b37c(int param_1)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = DAT_0805b388;
  for (uVar5 = 0; iVar3 = FUN_080020f4(), piVar1 = DAT_0805b410,
      uVar5 < *(byte *)(iVar3 * 0x154 + iVar4 + 0x7f); uVar5 = uVar5 + 1) {
    *(undefined1 *)(*DAT_0805b410 + uVar5 * 0x10 + 0x81) = 0;
  }
  param_1 = param_1 * 0x10;
  if (*(short *)(*DAT_0805b410 + param_1 + 0x78) == 2) {
    iVar4 = FUN_0805b458(*DAT_0805b410 + param_1 + 0x78);
    if (iVar4 == 0) {
      iVar4 = FUN_080020f4();
      *(undefined2 *)(iVar4 * 0x154 + DAT_0805b430 + 0x16) = 0;
      goto LAB_0805b44a;
    }
    *(undefined1 *)(*piVar1 + param_1 + 0x81) = 1;
    iVar3 = FUN_08006d98(*(ushort *)(*piVar1 + param_1 + 0x7a) | 0xb0000);
    iVar4 = FUN_080020f4();
    iVar4 = iVar4 * 0x154 + DAT_0805b414;
    uVar2 = *(undefined2 *)(iVar3 + 0x174);
  }
  else {
    iVar4 = FUN_080020f4();
    iVar4 = iVar4 * 0x154 + DAT_0805b454;
    uVar2 = 0;
  }
  *(undefined2 *)(iVar4 + 0x16) = uVar2;
LAB_0805b44a:
  FUN_080663d4();
  return;
}

