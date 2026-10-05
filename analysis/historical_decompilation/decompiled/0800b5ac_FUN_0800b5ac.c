
undefined8 FUN_0800b5ac(uint param_1,uint param_2,int param_3)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  if (param_3 == 0) {
    iVar3 = *(int *)(DAT_0800b5ec + 0x68);
    puVar1 = (ushort *)(DAT_0800b5ec + 0x70);
  }
  else {
    iVar3 = *(int *)(DAT_0800b5c4 + 0x6c);
    puVar1 = (ushort *)(DAT_0800b5c4 + 0x74);
  }
  uVar2 = (*(uint *)(iVar3 + ((param_1 >> 3) + (param_2 >> 3) * (uint)*puVar1) * 2) & 0xffff) >> 0xe
  ;
  if (uVar2 == 1) {
    param_1 = 1;
  }
  else if (uVar2 < 2) {
    if (uVar2 == 0) {
      param_1 = 2;
    }
  }
  else if (uVar2 == 2) {
    param_1 = 3;
  }
  return CONCAT44(unaff_lr,param_1);
}

