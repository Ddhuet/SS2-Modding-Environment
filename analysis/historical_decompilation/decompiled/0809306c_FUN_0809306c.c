
undefined4 FUN_0809306c(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  piVar1 = DAT_080930bc;
  if ((*DAT_080930bc != 0) && ((iVar2 = FUN_08000470(), iVar2 != 0 || (*(int *)(*piVar1 + 8) == 0)))
     ) {
    iVar2 = *piVar1;
    *(undefined4 *)(iVar2 + 0xc) = DAT_080930c0;
    *(undefined4 *)(iVar2 + 8) = 0x44;
    iVar2 = FUN_08001494(0x400);
    iVar3 = *piVar1;
    *(int *)(iVar3 + 0x20) = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar3 + 0x10) = iVar2 + 0x3fc;
      *(undefined4 *)(iVar3 + 0x24) = 0;
      FUN_08000274(iVar3,0,0);
    }
  }
  return unaff_lr;
}

