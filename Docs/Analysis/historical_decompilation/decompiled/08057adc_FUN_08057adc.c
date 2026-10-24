
undefined4 FUN_08057adc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar3 = param_1 * 0x18;
  uStack_1c = 0;
  iStack_24 = *(int *)(iVar3 + DAT_08057b2c) << 8;
  iStack_20 = *(int *)(iVar3 + DAT_08057b2c + 4) << 8;
  uStack_18 = CONCAT22(*(undefined2 *)(iVar3 + DAT_08057b2c + 0xc),
                       *(undefined2 *)(iVar3 + DAT_08057b2c + 8));
  iVar3 = FUN_080020f4();
  iVar3 = iVar3 * 0x154 + DAT_08057b30;
  while (((iVar2 = FUN_08021ef0(iVar3 + 0x94,&iStack_24,&uStack_1c,&uStack_18), iVar2 == 0 ||
          ((*(ushort *)(iVar3 + 0x1a) & 1) == 0)) && (iVar2 = FUN_08059a38(), iVar2 == 0))) {
    FUN_080003f0();
  }
  iVar3 = FUN_0800c61c();
  if (iVar3 != 1) {
    iVar2 = FUN_080020f4();
    iVar3 = DAT_08057c1c;
    iVar2 = iVar2 * 0x154 + DAT_08057c1c;
    *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 1;
    FUN_0800ca44();
    iVar2 = FUN_080020f4();
    iVar2 = iVar2 * 0x154 + iVar3;
    *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 2;
    FUN_080683b0();
    if ((*DAT_08057c20 & 0x20) == 0) {
      FUN_080067e8(0x24);
    }
    FUN_08028b3c(0,*(undefined2 *)(param_1 * 0x18 + DAT_08057c24 + 0x10),
                 *(undefined2 *)(param_1 * 0x18 + DAT_08057c24 + 0x14),0x5a);
    iVar2 = FUN_080020f4();
    iVar2 = iVar2 * 0x154 + iVar3;
    *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) & 0xfffffffd;
    FUN_080683b0();
    iVar2 = FUN_080020f4();
    iVar3 = iVar2 * 0x154 + iVar3;
    *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) & 0xfffffffe;
    FUN_0800ca58();
    uVar1 = DAT_08057c28;
    iVar3 = *DAT_08057c2c + DAT_08057c30;
    for (uVar4 = 0; uVar4 < 0x1e; uVar4 = uVar4 + 1) {
      iVar2 = FUN_08000470(iVar3);
      if (iVar2 == 0) {
        while( true ) {
          iVar2 = FUN_08001494(0x400);
          *(int *)(iVar3 + 0x20) = iVar2;
          if (iVar2 != 0) break;
          FUN_080003f0();
        }
        *(undefined4 *)(iVar3 + 8) = 0x3c;
        *(undefined4 *)(iVar3 + 0xc) = uVar1;
        *(int *)(iVar3 + 0x10) = iVar2 + 0x3fc;
        *(undefined4 *)(iVar3 + 0x24) = 0;
        FUN_08000274(iVar3,param_1);
        return unaff_lr;
      }
      iVar3 = iVar3 + 0x28;
    }
  }
  return unaff_lr;
}

