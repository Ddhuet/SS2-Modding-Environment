
undefined4 FUN_0805599c(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  iVar1 = FUN_08028a50(0x24,0x138,0xb0);
  iVar2 = FUN_08028a50(DAT_08055a1c,0x138,200);
  FUN_08028e2c(iVar1,0,0xffffff38,200);
  piVar3 = (int *)(*DAT_08055a20 + DAT_08055a24);
  uVar4 = 0;
  do {
    if (*piVar3 == iVar1) goto LAB_080559e6;
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 0x1c;
  } while (uVar4 < 0xf);
  FUN_080003f0();
  piVar3 = (int *)0x0;
LAB_080559e6:
  if (piVar3 != (int *)0x0) {
    *(undefined2 *)((int)piVar3 + 0x36) = 4;
  }
  piVar3 = (int *)(*DAT_08055a20 + DAT_08055a24);
  uVar4 = 0;
  do {
    if (*piVar3 == iVar2) goto LAB_08055a0c;
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 0x1c;
  } while (uVar4 < 0xf);
  FUN_080003f0();
  piVar3 = (int *)0x0;
LAB_08055a0c:
  if (piVar3 != (int *)0x0) {
    *(undefined2 *)((int)piVar3 + 0x36) = 4;
  }
  return unaff_lr;
}

