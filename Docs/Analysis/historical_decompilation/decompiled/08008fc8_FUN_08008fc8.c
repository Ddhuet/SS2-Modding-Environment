
undefined4 FUN_08008fc8(int param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_lr;
  
  uVar5 = param_3 & 0xffff;
  iVar3 = *(int *)((uint)*(ushort *)(param_1 + 0x14) * 4 + DAT_08009088);
  iVar7 = *(int *)(param_1 + 0xc);
  uVar4 = param_2 & 0xffff;
  if ((int)(param_2 * 0x10000) < 0) {
    uVar4 = 0;
  }
  if ((int)(param_3 * 0x10000) < 0) {
    uVar5 = 0;
  }
  uVar1 = (short)((ushort)uVar4 & 0xff) >> 3;
  uVar6 = 0x20 - uVar1 & 0xffff;
  sVar2 = (short)(((int)(uVar5 << 0x10 & 0xff0000) >> 0x13) << 5);
  uVar4 = ((uint)*(ushort *)(param_1 + 0x10) * ((int)(uVar5 << 0x10) >> 0x13 & 0xffffU) & 0xffff) +
          ((int)(uVar4 << 0x10) >> 0x13 & 0xffffU) & 0xffff;
  if (uVar6 != 0) {
    FUN_080b9a88(iVar7 + uVar4 * 2,((int)(short)uVar1 + (int)sVar2) * 2 + iVar3,uVar6);
  }
  FUN_080b9a88(iVar7 + (uVar6 + uVar4) * 2,sVar2 * 2 + iVar3,0x20 - uVar6 & DAT_0800908c);
  return unaff_lr;
}

