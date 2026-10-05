
undefined4 FUN_08061fb0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  short local_2c;
  short local_2a;
  undefined2 local_28;
  undefined2 local_26;
  int local_24;
  
  puVar1 = DAT_08062088;
  iVar3 = *(int *)(param_1 + 0x94);
  iVar2 = *(int *)(param_1 + 0x98);
  local_28 = 0;
  local_26 = 0;
  FUN_08059a8c(0x25);
  uVar4 = 0x2f;
  local_24 = (iVar3 >> 8) << 0x10;
  do {
    iVar2 = iVar2 + -0x20;
    FUN_0800b570(local_24 >> 0x10,iVar2 * 0x100 >> 0x10,&local_2c,&local_2a,0x30,0);
    local_2c = local_2c + -8;
    local_2a = local_2a + -8;
    FUN_080087c8(0xe,&local_28,&local_26,puVar1[2],1);
    iVar3 = FUN_0800c5e8();
    if (iVar3 == 0) {
      FUN_080077f8((int)local_2c,(int)local_2a,0xe,local_28,0,puVar1 + 7,puVar1[2],*puVar1);
    }
    FUN_080003f0();
    uVar4 = uVar4 - 1 & 0xffff;
  } while (uVar4 != DAT_0806208c);
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 8;
  return unaff_lr;
}

