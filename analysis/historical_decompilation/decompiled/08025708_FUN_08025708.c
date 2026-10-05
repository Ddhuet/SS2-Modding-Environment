
undefined4 FUN_08025708(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_lr;
  
  piVar1 = DAT_08025744;
  iVar5 = DAT_08025748 + param_2 * 0x28;
  iVar2 = FUN_08000470(*DAT_08025744 + iVar5);
  if (iVar2 != 0) {
    FUN_080003a8(*piVar1 + iVar5);
  }
  *(undefined4 *)(*piVar1 + DAT_0802574c + param_2 * 0x28) = DAT_08025750;
  while( true ) {
    iVar5 = FUN_08001494(0x400);
    iVar4 = *DAT_080257b0;
    iVar3 = param_2 * 0x28;
    *(int *)(iVar4 + DAT_080257b4 + iVar3) = iVar5;
    iVar2 = DAT_080257b8;
    if (iVar5 != 0) break;
    FUN_080003f0();
  }
  *(int *)(iVar4 + DAT_080257b8 + iVar3) = iVar5 + 0x3fc;
  *(undefined4 *)(iVar4 + DAT_080257bc + iVar3) = 0x46;
  *(undefined4 *)(iVar4 + iVar2 + 0x14 + iVar3) = 0;
  FUN_08000274(iVar4 + iVar3 + DAT_080257c0,param_1);
  return unaff_lr;
}

