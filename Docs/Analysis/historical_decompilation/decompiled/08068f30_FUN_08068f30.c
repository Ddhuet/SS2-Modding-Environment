
undefined4 FUN_08068f30(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  piVar1 = DAT_08068f44;
  iVar2 = FUN_08000470(*DAT_08068f44);
  if (iVar2 == 0) {
    while( true ) {
      iVar2 = FUN_08001494(0x800);
      *(int *)(*piVar1 + 0x20) = iVar2;
      if (iVar2 != 0) break;
      FUN_080003f0();
    }
    iVar2 = *DAT_08068f84;
    *(undefined4 *)(iVar2 + 0xc) = DAT_08068f88;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x20) + DAT_08068f8c;
    *(undefined4 *)(iVar2 + 8) = 0x65;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    FUN_08000274(iVar2,param_1,param_2);
  }
  return unaff_lr;
}

