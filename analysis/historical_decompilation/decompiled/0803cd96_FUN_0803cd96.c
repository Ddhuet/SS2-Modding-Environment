
undefined4 FUN_0803cd96(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  short *psVar3;
  byte *pbVar4;
  undefined4 in_stack_0000000c;
  
  psVar3 = (short *)(param_1 + 0x2e8);
  for (iVar2 = (uint)*(ushort *)(param_1 + 0x72) * 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*psVar3 == 10) {
      param_4 = param_4 + *(int *)(psVar3 + 2);
    }
    psVar3 = psVar3 + 8;
  }
  if (param_4 < 100) {
    while (iVar2 = FUN_0805fa94(), iVar2 != 0) {
      FUN_080003f0();
    }
    while (iVar2 = FUN_0805f8b4(), iVar2 != 0) {
      FUN_080003f0();
    }
    uVar1 = FUN_0805e608(1,0xf,2,0);
    while (iVar2 = FUN_0805f820(uVar1), iVar2 == 0) {
      iVar2 = FUN_0800c748();
      if (iVar2 != 0) {
        FUN_0805f8e0();
        break;
      }
      FUN_080003f0();
    }
  }
  else {
    while (iVar2 = FUN_0805fa94(), iVar2 != 0) {
      FUN_080003f0();
    }
    while (iVar2 = FUN_0805f8b4(), iVar2 != 0) {
      FUN_080003f0();
    }
    uVar1 = FUN_0805e608(1,0xf,2,0);
    while (iVar2 = FUN_0805f820(uVar1), iVar2 == 0) {
      iVar2 = FUN_0800c748();
      if (iVar2 != 0) {
        FUN_0805f8e0();
        break;
      }
      FUN_080003f0();
    }
    if ((*DAT_0803ce50 & 0x20) == 0) {
      FUN_080067e8(0x23);
    }
    FUN_08028b3c(6,DAT_0803ce54,DAT_0803ce54,0);
    FUN_0807c778(100);
    iVar2 = FUN_0800c780();
    if (iVar2 == 0) {
      pbVar4 = (byte *)(*DAT_0803ce74 + DAT_0803ce78);
    }
    else {
      pbVar4 = (byte *)(*DAT_0803ce58 + DAT_0803ce5c);
    }
    *pbVar4 = *pbVar4 | 8;
  }
  iVar2 = FUN_080020f4();
  iVar2 = iVar2 * 0x154 + DAT_0803cff8;
  *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) & 0xfffffffe;
  FUN_0800ca58();
  return in_stack_0000000c;
}

