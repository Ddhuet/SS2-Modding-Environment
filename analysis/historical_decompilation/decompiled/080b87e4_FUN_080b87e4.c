
undefined4 FUN_080b87e4(uint param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 unaff_lr;
  
  piVar1 = (int *)((param_1 & 0xffff) * 8 + DAT_080b8814);
  piVar2 = *(int **)((uint)*(ushort *)(piVar1 + 1) * 0xc + DAT_080b8810);
  if (*piVar2 == *piVar1) {
    FUN_080b8e64(piVar2);
  }
  return unaff_lr;
}

