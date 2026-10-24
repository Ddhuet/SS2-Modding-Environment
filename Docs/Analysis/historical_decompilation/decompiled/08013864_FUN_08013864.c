
undefined8 FUN_08013864(int param_1,int *param_2,uint param_3,ushort param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_lr;
  
  param_3 = param_3 & 0xffff;
  iVar1 = FUN_08058314();
  iVar4 = DAT_080138cc;
  if (iVar1 == 0) {
    param_4 = param_4 | 2;
  }
  iVar1 = *param_2;
  iVar5 = param_2[1];
  if ((param_3 == 0) || (param_3 == 4)) {
    iVar2 = FUN_080ba8a4(param_1 * *(short *)((uint)*(ushort *)(param_3 * 2 + DAT_080138cc) * 2 +
                                             DAT_080138c8),0x130);
  }
  else {
    iVar2 = param_1 * *(short *)((uint)*(ushort *)(param_3 * 2 + DAT_08013978) * 2 + DAT_08013974);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar2 = iVar2 >> 8;
    iVar4 = DAT_08013978;
  }
  iVar3 = param_1 * *(short *)((*(ushort *)(param_3 * 2 + iVar4) + 0x40) * 2 + DAT_08013974);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  uVar6 = param_3 + 1 & 0xffff;
  if (param_5 == 0) {
    uVar6 = FUN_0800ac18(param_3,iVar1 + (iVar3 >> 8),iVar5 + iVar2,param_4);
    uVar6 = uVar6 & 0xffff;
    if (uVar6 == 0) goto LAB_08013a64;
  }
  if (uVar6 != 0) {
    param_3 = uVar6 - 1 & 0xffff;
  }
  iVar1 = *param_2;
  iVar5 = param_2[1];
  if ((param_3 == 0) || (param_3 == 4)) {
    iVar4 = FUN_080ba8a4(param_1 * *(short *)((uint)*(ushort *)(param_3 * 2 + iVar4) * 2 +
                                             DAT_08013974),0x130);
  }
  else {
    iVar4 = param_1 * *(short *)((uint)*(ushort *)(param_3 * 2 + iVar4) * 2 + DAT_08013a10);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar4 = iVar4 >> 8;
  }
  iVar2 = DAT_08013a14;
  iVar3 = param_1 * *(short *)((*(ushort *)(param_3 * 2 + DAT_08013a14) + 0x40) * 2 + DAT_08013a10);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  if (param_5 == 0) {
    uVar6 = FUN_0800ac18(param_3,iVar1 + (iVar3 >> 8),iVar5 + iVar4,param_4);
    uVar6 = uVar6 & 0xffff;
    if (uVar6 == 0) goto LAB_08013a64;
  }
  if (uVar6 != 0) {
    param_3 = uVar6 - 1 & 0xffff;
  }
  if ((param_3 == 0) || (param_3 == 4)) {
    iVar4 = FUN_080ba8a4(param_1 * *(short *)((uint)*(ushort *)(param_3 * 2 + iVar2) * 2 +
                                             DAT_08013a10),0x130);
    param_2[1] = param_2[1] + iVar4;
  }
  else {
    iVar4 = param_1 * *(short *)((uint)*(ushort *)(param_3 * 2 + iVar2) * 2 + DAT_08013a78);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    param_2[1] = param_2[1] + (iVar4 >> 8);
  }
  param_1 = param_1 * *(short *)((*(ushort *)(param_3 * 2 + DAT_08013a7c) + 0x40) * 2 + DAT_08013a78
                                );
  if (param_1 < 0) {
    param_1 = param_1 + 0xff;
  }
  *param_2 = *param_2 + (param_1 >> 8);
LAB_08013a64:
  return CONCAT44(unaff_lr,param_3);
}

