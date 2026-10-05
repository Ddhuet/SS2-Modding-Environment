
undefined4 FUN_080b8790(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  piVar1 = (int *)((param_1 & 0xffff) * 8 + DAT_080b87c0);
  piVar2 = *(int **)((uint)*(ushort *)(piVar1 + 1) * 0xc + DAT_080b87bc);
  iVar3 = *piVar1;
  if (*piVar2 == iVar3) {
    if ((short)piVar2[1] == 0) {
      FUN_080b8db0(piVar2,*piVar2);
    }
    else if (piVar2[1] < 0) {
      FUN_080b8644(piVar2);
    }
  }
  else {
    FUN_080b8db0(piVar2,iVar3);
  }
  return unaff_lr;
}

