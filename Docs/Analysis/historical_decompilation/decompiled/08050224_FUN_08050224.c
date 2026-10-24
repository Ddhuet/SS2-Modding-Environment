
undefined4 FUN_08050224(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  iVar1 = FUN_08028a50(0x24,0x80,0x38);
  iVar2 = FUN_08028a50(DAT_080502a0,0x80,0x50);
  FUN_08028e2c(iVar1,0,0xffffff38,200);
  piVar3 = (int *)(*DAT_080502a4 + DAT_080502a8);
  uVar4 = 0;
  do {
    if (*piVar3 == iVar1) goto LAB_0805026a;
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 0x1c;
  } while (uVar4 < 0xf);
  FUN_080003f0();
  piVar3 = (int *)0x0;
LAB_0805026a:
  if (piVar3 != (int *)0x0) {
    *(undefined2 *)((int)piVar3 + 0x36) = 4;
  }
  piVar3 = (int *)(*DAT_080502a4 + DAT_080502a8);
  uVar4 = 0;
  do {
    if (*piVar3 == iVar2) goto LAB_08050290;
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 0x1c;
  } while (uVar4 < 0xf);
  FUN_080003f0();
  piVar3 = (int *)0x0;
LAB_08050290:
  if (piVar3 != (int *)0x0) {
    *(undefined2 *)((int)piVar3 + 0x36) = 4;
  }
  return unaff_lr;
}

