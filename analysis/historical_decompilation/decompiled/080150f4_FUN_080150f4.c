
undefined4 FUN_080150f4(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined4 unaff_lr;
  
  puVar5 = (undefined2 *)(param_1 * 0x154 + DAT_08015130);
  uVar6 = (*(uint *)(*(int *)(puVar5 + 0xa8) + 4) & 0x1ffff) >> 0xe;
  puVar5[0x5c] = (ushort)(*(byte *)(*(int *)(puVar5 + 0xa8) + 3) >> 4);
  if (6 < uVar6 - 1) {
    puVar5[0x60] = puVar5[0x5c];
    uVar4 = 0;
    while ((uVar6 != 0 && ((**(byte **)(puVar5 + 0xa8) & 0xf) == 5))) {
      if (((puVar5[0x5d] & 1) == 0) && ((puVar5[0x5e] == 2 && (uVar6 != 0)))) {
        *(int *)(puVar5 + 0x72) = *(int *)(puVar5 + 0x72) + 1;
        uVar1 = FUN_0807a8b0(1);
        uVar4 = uVar4 + 1;
        FUN_08077c6c(*puVar5,uVar1,uVar6,uVar6,uVar4);
        if (2 < uVar4) {
          uVar4 = 0;
        }
        uVar6 = uVar6 - 1;
      }
      FUN_080003f0();
    }
    iVar3 = FUN_080020f4();
    if (((iVar3 == param_1) && (1 < (ushort)(puVar5[0x13] - 10))) &&
       ((*(uint *)(puVar5 + 0x1c) & 0x2000) == 0)) {
      puVar5[0x13] = 0;
    }
    puVar5[0x15] = 0;
    puVar5[0x17] = puVar5[0x16];
    puVar5[0x16] = 0;
    puVar5[0x95] = 0;
    return unaff_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0801512e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)((uVar6 - 1) * 4 + DAT_08015134))();
  return uVar2;
}

