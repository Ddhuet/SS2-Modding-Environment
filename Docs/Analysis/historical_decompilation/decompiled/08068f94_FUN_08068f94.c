
undefined4 FUN_08068f94(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 unaff_lr;
  
  if (*(int *)(param_1 * 4 + DAT_08068fa8) != 0) {
    while (iVar3 = FUN_08000470(*(undefined4 *)(param_1 * 4 + DAT_08068fdc)), iVar3 != 0) {
      FUN_080003f0();
    }
  }
  puVar4 = (undefined4 *)(param_1 * 4 + DAT_08068fdc);
  FUN_08001538(*puVar4);
  *puVar4 = 0;
  piVar1 = DAT_08068fe0;
  if (*DAT_08068fe0 != 0) {
    while (iVar3 = FUN_08000470(*piVar1), iVar3 != 0) {
      FUN_080003f0();
    }
  }
  puVar4 = (undefined4 *)(param_1 * 4 + DAT_0806901c);
  FUN_08001538(*puVar4);
  *puVar4 = 0;
  puVar4 = DAT_08069020;
  FUN_08001538(*DAT_08069020);
  puVar2 = DAT_08069024;
  FUN_08001538(*DAT_08069024);
  *puVar4 = 0;
  *puVar2 = 0;
  return unaff_lr;
}

