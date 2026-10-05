
undefined8 FUN_0800a950(int param_1,int param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  if (param_3 != 0) {
    iVar2 = FUN_08006d98(*(undefined4 *)((param_3 & 0xffffffdf) * 4 + DAT_0800a98c + 0x10));
    uVar4 = (uint)*(short *)(iVar2 + 0x10);
    iVar2 = iVar2 + (int)*(short *)(iVar2 + 0x12) * uVar4 * 6 + 0x20;
    goto LAB_0800a9c4;
  }
  if (*(short *)(DAT_0800a9ac + 0x8c) == 8) {
    sVar1 = *(short *)(DAT_0800a9ac + 0x90);
    if (sVar1 == 0x12) {
      uVar4 = 0x5a;
    }
    else {
      if ((sVar1 != 2) && (sVar1 != 0xc)) goto LAB_0800a9bc;
      uVar4 = 0x3c;
    }
  }
  else {
LAB_0800a9bc:
    uVar4 = (uint)*(ushort *)(DAT_0800a9ac + 0x78);
  }
  iVar2 = *(int *)(DAT_0800a9ac + 0x68);
LAB_0800a9c4:
  puVar3 = (uint *)(iVar2 + ((param_1 >> 0xb) + uVar4 * (param_2 >> 0xb)) * 2);
  uVar4 = *puVar3;
  uVar4 = ((uVar4 & 0x1fff) >> 0xc) << 4 | (uVar4 & 0xfff) >> 8;
  if ((char)*puVar3 == '\x01') {
    uVar4 = uVar4 | 1;
  }
  return CONCAT44(unaff_lr,uVar4);
}

