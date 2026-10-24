
undefined4 FUN_080b8b20(uint param_1)

{
  short *psVar1;
  undefined1 uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_lr;
  
  iVar6 = *DAT_080b8ba0;
  *(char *)(iVar6 + 8) = (char)((param_1 & 0xf0000) >> 0x10);
  uVar7 = (uint)*(ushort *)((((param_1 & 0xf0000) >> 0x10) - 1) * 2 + DAT_080b8ba4);
  *(uint *)(iVar6 + 0x10) = uVar7;
  uVar2 = FUN_080ba8a4(0x630,uVar7);
  *(undefined1 *)(iVar6 + 0xb) = uVar2;
  uVar4 = FUN_080ba8a4(uVar7 * DAT_080b8ba8 + DAT_080b8bac,DAT_080b8bb0);
  *(undefined4 *)(iVar6 + 0x14) = uVar4;
  iVar5 = FUN_080ba8a4(0x1000000);
  *(int *)(iVar6 + 0x18) = iVar5 + 1 >> 1;
  *DAT_080b8bb4 = 0;
  psVar1 = DAT_080b8bb8;
  sVar3 = FUN_080ba8a4(DAT_080b8bbc,uVar7);
  *psVar1 = -sVar3;
  FUN_080b8cfc();
  do {
  } while (*DAT_080b8bc0 == -0x61);
  do {
  } while (*DAT_080b8bc0 != -0x61);
  *DAT_080b8bb4 = 0x80;
  return unaff_lr;
}

