
undefined4 FUN_080283f0(undefined1 param_1,undefined2 param_2,undefined1 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 unaff_lr;
  
  iVar1 = DAT_08028440;
  piVar4 = DAT_0802843c;
  uVar2 = *(uint *)(*DAT_0802843c + DAT_08028440);
  if (uVar2 < 0xb) {
    *(undefined1 *)(*DAT_0802843c + uVar2 * 4 + DAT_08028444) = param_1;
    iVar3 = *piVar4;
    *(undefined1 *)(iVar3 + *(int *)(iVar3 + iVar1) * 4 + DAT_08028448) = param_3;
    iVar3 = *piVar4;
    piVar4 = (int *)(iVar3 + iVar1);
    *(undefined2 *)(iVar3 + *piVar4 * 4 + iVar1 + 4) = param_2;
    *piVar4 = *piVar4 + 1;
  }
  return unaff_lr;
}

