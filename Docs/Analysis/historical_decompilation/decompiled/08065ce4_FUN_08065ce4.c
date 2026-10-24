
undefined4 FUN_08065ce4(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  piVar1 = DAT_08065d10;
  puVar2 = (undefined4 *)FUN_08001494(DAT_08065d14);
  *piVar1 = (int)puVar2;
  *puVar2 = param_1;
  uVar4 = 0;
  iVar3 = 0;
  do {
    *(undefined4 *)(*piVar1 + 0xc + iVar3) = 0;
    iVar3 = iVar3 + 0x28;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x1e);
  return unaff_lr;
}

