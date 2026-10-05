
undefined4 FUN_0809839c(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_lr;
  
  piVar1 = DAT_080983d4;
  iVar3 = FUN_08000470(*DAT_080983d4);
  puVar2 = DAT_080983d8;
  if ((iVar3 != 0) || (*(int *)(*piVar1 + 8) == 0)) {
    *DAT_080983d8 = param_1;
    puVar2[1] = param_2;
    iVar3 = FUN_08001494(0x400);
    iVar4 = *piVar1;
    *(int *)(iVar4 + 0x20) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)(iVar4 + 8) = 0;
    }
    else {
      *(int *)(iVar4 + 0x10) = iVar3 + 0x3fc;
      *(undefined4 *)(iVar4 + 0xc) = DAT_08098400;
      *(undefined4 *)(iVar4 + 0x24) = 0;
      *(undefined4 *)(iVar4 + 8) = 0x44;
      FUN_08000274(iVar4,param_3);
    }
  }
  return unaff_lr;
}

