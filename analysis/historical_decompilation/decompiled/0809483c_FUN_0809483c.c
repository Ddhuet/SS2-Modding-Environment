
undefined4 FUN_0809483c(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_lr;
  
  piVar1 = DAT_08094894;
  if ((*DAT_08094894 != 0) && ((iVar2 = FUN_08000470(), iVar2 != 0 || (*(int *)(*piVar1 + 8) == 0)))
     ) {
    do {
      uVar3 = FUN_08001494(0x400);
      *(undefined4 *)(*piVar1 + 0x20) = uVar3;
      FUN_080003f0();
    } while (*piVar1 == 0);
    iVar2 = *DAT_08094894;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x20) + 0x3fc;
    *(undefined4 *)(iVar2 + 0xc) = DAT_08094898;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 8) = 0x44;
    FUN_08000274(iVar2,0,0);
  }
  return unaff_lr;
}

