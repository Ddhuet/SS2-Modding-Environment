
undefined8 FUN_080695f4(uint *param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_lr;
  
  uVar5 = *param_1;
  if (uVar5 < 4) {
    psVar2 = (short *)(uVar5 * 0x154 + DAT_08069614 + 0x44);
  }
  else {
    psVar2 = (short *)(uVar5 * DAT_08069664 + *DAT_08069660 + DAT_08069668);
  }
  sVar1 = *psVar2;
  uVar3 = FUN_080008c8();
  iVar4 = FUN_080baaf4(uVar3,0x14);
  if (param_1[3] == 0x13) {
    uVar5 = FUN_080b9a9c(sVar1 + 0xf);
    iVar6 = (uint)*(ushort *)((param_1[5] >> 0x10) * 2 + DAT_080696cc) *
            ((param_1[5] & DAT_080696d0) + 1);
  }
  else {
    uVar5 = FUN_080b9a9c(sVar1 + 0xf);
    iVar6 = (param_1[5] + 1) * (int)*(short *)(param_1[3] * 0x18 + DAT_0806966c);
  }
  sVar1 = FUN_080baa7c((iVar4 + 100) * iVar6 * (param_1[4] + 0x14) * (uVar5 & 0xffff),DAT_080696d4);
  if (param_2 != 0) {
    sVar1 = FUN_08021c10(*(undefined2 *)(param_1[3] * 0x18 + DAT_080696d8 + 2),sVar1,param_2);
  }
  return CONCAT44(unaff_lr,(int)sVar1);
}

