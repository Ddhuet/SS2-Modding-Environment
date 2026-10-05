
undefined8 FUN_08028a50(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  undefined4 unaff_lr;
  
  piVar4 = (int *)(*DAT_08028a70 + DAT_08028a78);
  piVar2 = (int *)(*DAT_08028a70 + DAT_08028a74);
  for (uVar3 = 0; uVar3 < 0xf; uVar3 = uVar3 + 1) {
    iVar1 = FUN_08000470(piVar4);
    if (iVar1 == 0) {
      iVar1 = *DAT_08028ae8;
      *(uint *)(iVar1 + 0x54) = *(uint *)(iVar1 + 0x54) | 1 << (uVar3 & 0xff);
      *piVar2 = *(int *)(iVar1 + 0x4c);
      *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) + 1;
      piVar2[1] = param_1;
      piVar2[0xf] = 1;
      piVar2[2] = param_2 << 8;
      piVar2[3] = param_3 << 8;
      piVar2[0x14] = 0x3c;
      iVar1 = FUN_08001494(0x400);
      piVar2[0x1a] = iVar1;
      piVar2[0x15] = DAT_08028aec;
      piVar2[0x16] = iVar1 + 0x3fc;
      piVar2[0x1b] = DAT_08028af0;
      FUN_08000274(piVar4,piVar2);
      iVar1 = *piVar2;
      goto LAB_08028afc;
    }
    piVar4 = piVar2 + 0x2e;
    piVar2 = piVar2 + 0x1c;
  }
  iVar1 = 0;
LAB_08028afc:
  piVar2 = (int *)(*DAT_08028b1c + DAT_08028b20);
  uVar3 = 0;
  do {
    if (*piVar2 == iVar1) goto LAB_08028b28;
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 0x1c;
  } while (uVar3 < 0xf);
  FUN_080003f0();
  piVar2 = (int *)0x0;
LAB_08028b28:
  while (piVar2[0xf] == 1) {
    FUN_080003f0();
  }
  return CONCAT44(unaff_lr,iVar1);
}

