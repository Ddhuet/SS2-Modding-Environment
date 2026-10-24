
undefined4 FUN_080570e0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  iVar2 = FUN_08028a50(0x3e,0x78,0x60);
  piVar3 = (int *)(*DAT_08057160 + DAT_08057164);
  uVar4 = 0;
  do {
    if (*piVar3 == iVar2) goto LAB_0805710c;
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 0x1c;
  } while (uVar4 < 0xf);
  FUN_080003f0();
  piVar3 = (int *)0x0;
LAB_0805710c:
  if (piVar3 != (int *)0x0) {
    *(undefined2 *)(piVar3 + 6) = 8;
    *(undefined2 *)((int)piVar3 + 0x1a) = 0x1e;
    piVar3[0xf] = piVar3[0xf] | 0x10;
  }
  iVar1 = DAT_08057168;
  piVar3 = (int *)(*DAT_08057160 + DAT_08057164);
  uVar4 = 0;
  do {
    if (*piVar3 == iVar2) goto LAB_08057140;
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 0x1c;
  } while (uVar4 < 0xf);
  FUN_080003f0();
  piVar3 = (int *)0x0;
LAB_08057140:
  if (piVar3 != (int *)0x0) {
    piVar3[0x11] = iVar1;
  }
  iVar2 = FUN_0800c5e8();
  if (iVar2 == 0) {
    iVar2 = FUN_0801a720();
    if (iVar2 == 1) {
      FUN_0801a74c(6);
    }
    else if (iVar2 < 2) {
      if (iVar2 == 0) {
        FUN_08058b6c();
      }
    }
    else if (iVar2 == 2) {
      FUN_0801a78c(6);
    }
    while (iVar2 = FUN_0801a6dc(), iVar2 == 0) {
      FUN_080003f0();
    }
  }
  return unaff_lr;
}

