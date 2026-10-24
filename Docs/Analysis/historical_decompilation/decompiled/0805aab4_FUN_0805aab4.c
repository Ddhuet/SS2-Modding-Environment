
undefined4 FUN_0805aab4(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  piVar1 = DAT_0805aacc;
  iVar2 = FUN_08000470(*DAT_0805aacc + DAT_0805aad0);
  if (iVar2 == 0) {
    while( true ) {
      iVar2 = FUN_08001494(0xc00);
      *(int *)(*piVar1 + DAT_0805ab2c) = iVar2;
      if (iVar2 != 0) break;
      FUN_080003f0();
    }
    iVar2 = *DAT_0805ab30;
    *(undefined4 *)(iVar2 + 0x700) = DAT_0805ab34;
    *(int *)(iVar2 + DAT_0805ab38) = *(int *)(iVar2 + 0x714) + DAT_0805ab3c;
    *(undefined4 *)(iVar2 + DAT_0805ab40) = 0x46;
    *(undefined4 *)(iVar2 + 0x718) = 0;
    FUN_08000274(iVar2 + DAT_0805ab44,param_1);
  }
  return unaff_lr;
}

