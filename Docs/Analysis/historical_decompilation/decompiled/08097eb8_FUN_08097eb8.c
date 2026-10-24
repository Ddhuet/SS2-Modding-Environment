
undefined4 FUN_08097eb8(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_lr;
  
  iVar3 = DAT_08097f5c;
  iVar2 = DAT_08097f58;
  iVar1 = DAT_08097f00;
  iVar4 = DAT_08097efc;
  param_3 = param_3 & 0xffff;
  if ((param_3 == 0) || (param_3 == 4)) {
    iVar2 = FUN_080ba8a4(*(short *)((uint)*(ushort *)(param_3 * 2 + DAT_08097f00) * 2 + DAT_08097efc
                                   ) * param_1,0x130);
    param_2[1] = param_2[1] + iVar2;
    iVar3 = iVar1;
    iVar2 = iVar4;
  }
  else {
    iVar4 = *(short *)((uint)*(ushort *)(param_3 * 2 + DAT_08097f5c) * 2 + DAT_08097f58) * param_1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    param_2[1] = param_2[1] + (iVar4 >> 8);
  }
  param_1 = *(short *)((*(ushort *)(param_3 * 2 + iVar3) + 0x40) * 2 + iVar2) * param_1;
  if (param_1 < 0) {
    param_1 = param_1 + 0xff;
  }
  *param_2 = *param_2 + (param_1 >> 8);
  return unaff_lr;
}

