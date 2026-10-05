
undefined4 FUN_0802626c(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_lr;
  
  iVar2 = DAT_080262d4;
  piVar1 = DAT_080262d0;
  iVar3 = FUN_08000470(*DAT_080262d0 + DAT_080262d4);
  if (iVar3 != 0) {
    FUN_080003a8(*piVar1 + iVar2);
  }
  *(undefined4 *)(*piVar1 + DAT_080262d8) = DAT_080262dc;
  iVar4 = FUN_08001494(0x400);
  iVar3 = DAT_080262e0;
  iVar5 = *piVar1;
  *(int *)(iVar5 + DAT_080262e0) = iVar4;
  *(int *)(iVar5 + iVar3 + -0x10) = iVar4 + 0x3fc;
  *(undefined4 *)(iVar5 + DAT_080262e4) = 0x46;
  *(undefined4 *)(iVar5 + 0x17e0) = 0;
  FUN_08000274(iVar5 + iVar2,param_1);
  return unaff_lr;
}

