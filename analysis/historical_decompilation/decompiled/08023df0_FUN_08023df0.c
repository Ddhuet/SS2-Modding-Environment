
undefined4 FUN_08023df0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_lr;
  
  piVar1 = DAT_08023e30;
  iVar5 = DAT_08023e34 + param_2 * 0x28;
  iVar2 = FUN_08000470(*DAT_08023e30 + iVar5);
  if (iVar2 != 0) {
    FUN_080003a8(*piVar1 + iVar5);
  }
  *(undefined4 *)(*piVar1 + 0x1840 + param_2 * 0x28) = DAT_08023e38;
  while( true ) {
    iVar5 = FUN_08001494(0x200);
    iVar4 = *DAT_08023e9c;
    iVar3 = param_2 * 0x28;
    *(int *)(iVar4 + DAT_08023ea0 + iVar3) = iVar5;
    iVar2 = DAT_08023ea4;
    if (iVar5 != 0) break;
    FUN_080003f0();
  }
  *(int *)(iVar4 + DAT_08023ea4 + iVar3) = iVar5 + 0x1fc;
  *(undefined4 *)(iVar4 + DAT_08023ea8 + iVar3) = 0x46;
  *(undefined4 *)(iVar4 + iVar2 + 0x14 + iVar3) = 0;
  FUN_08000274(iVar4 + iVar3 + DAT_08023eac,param_1,param_2);
  return unaff_lr;
}

