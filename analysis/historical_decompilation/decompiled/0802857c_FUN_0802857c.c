
undefined4 FUN_0802857c(undefined4 *param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  short *psVar8;
  int iVar9;
  ushort *puVar10;
  undefined4 unaff_lr;
  undefined4 auStack_a8 [2];
  undefined4 uStack_a0;
  int iStack_9c;
  undefined1 auStack_8c [24];
  undefined1 auStack_74 [52];
  short sStack_40;
  short sStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  
  param_1[0xf] = 2;
  param_1[0x11] = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((int)param_1 + 0x2e) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  uVar4 = (undefined2)((uint)param_1[1] >> 0x10);
  *(undefined2 *)(param_1 + 9) = uVar4;
  *(undefined2 *)(param_1 + 0xb) = uVar4;
  *(undefined2 *)(param_1 + 0xd) = 1;
  uVar2 = DAT_0802862c;
  param_1[1] = param_1[1] & DAT_0802862c;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  *(undefined2 *)((int)param_1 + 0x42) = 0;
  uStack_30 = (uStack_30 & DAT_08028630 | 0x10) & uVar2 | 0x100000;
  iVar5 = FUN_080020f4();
  iVar6 = DAT_08028638;
  iVar5 = iVar5 * 0x154 + DAT_08028634;
  iStack_2c = 0;
  uStack_3a = 0;
  uStack_3c = 0;
  FUN_08065784(auStack_a8,*(undefined4 *)(param_1[1] * 8 + DAT_08028638),4,0xffffffff,0);
  if (*(int *)(param_1[1] * 8 + iVar6 + 4) == 3) {
    *(undefined2 *)(param_1 + 0x10) = (undefined2)iStack_2c;
    puStack_28 = auStack_8c;
    puStack_24 = auStack_74;
  }
  else {
    puStack_28 = auStack_8c;
    puStack_24 = auStack_74;
    while( true ) {
      iVar6 = FUN_0802844c(100,*(undefined2 *)(param_1[1] * 8 + DAT_08028660 + 4));
      *(short *)(param_1 + 0x10) = (short)iVar6;
      if (iVar6 * 0x10000 - DAT_08028664 != 0) break;
      FUN_080003f0();
    }
  }
  puVar10 = (ushort *)(param_1 + 0x10);
  puStack_28[*(int *)(param_1[1] * 8 + DAT_080286ac + 4)] = (char)*puVar10;
  FUN_08065784(puStack_24,DAT_080286b0,*puVar10,0xffffffff,0);
  while (*(short *)((int)param_1 + 0x36) != 4) {
    if (((((*(uint *)(iVar5 + 0x38) & 0x2000) == 0) && ((*(ushort *)(iVar5 + 0x1a) & 1) != 0)) &&
        ((*(ushort *)(*DAT_08028870 + 4) >> 7 & 1) == 0)) && (param_1[0x11] != 0)) {
      iStack_38 = *(short *)(*(short *)(*(short *)(iVar5 + 0x22) * 2 + DAT_08028874) * 0x20 + 0x80 +
                            DAT_08028878) * 0x10 + *(int *)(iVar5 + 0x94);
      iStack_34 = *(short *)(*(short *)(*(short *)(iVar5 + 0x22) * 2 + DAT_08028874) * 0x20 +
                            DAT_08028878) * 0x10 + *(int *)(iVar5 + 0x98);
      iVar6 = FUN_08021ef0(param_1 + 2,&iStack_38,param_1 + 6,&uStack_30);
      if (iVar6 != 0) {
        FUN_0805ab84(*param_1,param_1[0x11]);
      }
    }
    uVar1 = *(ushort *)((int)param_1 + 0x36);
    if (((uVar1 != 2) && (2 < uVar1)) && (uVar1 == 3)) {
      *(undefined2 *)((int)param_1 + 0x36) = 0;
      *(short *)(param_1 + 0xb) = *(short *)(param_1 + 9) + *(short *)(param_1 + 0xe);
    }
    if ((*(ushort *)(*DAT_08028870 + 4) & 0x200) == 0) {
      uVar4 = FUN_0806599c(auStack_a8,*(undefined2 *)(param_1 + 0xb),(int)param_1 + 0x2e,
                           param_1 + 0xc,*(undefined2 *)(param_1 + 0xd));
      *(undefined2 *)((int)param_1 + 0x32) = uVar4;
    }
    iVar9 = param_1[2];
    iVar6 = param_1[3];
    uVar7 = FUN_0800c61c();
    uVar3 = FUN_0800b5ac(iVar9 >> 8,iVar6 >> 8,uVar7);
    uVar7 = FUN_0800c61c();
    FUN_0800b570((int)(param_1[2] << 8) >> 0x10,(int)(param_1[3] << 8) >> 0x10,&sStack_40,&sStack_3e
                 ,0x30,uVar7);
    iVar6 = FUN_0800c5e8();
    if ((iVar6 == 0) && (iVar6 = FUN_0800c684(), iVar6 == 0)) {
      iVar6 = *(int *)(param_1[1] * 8 + DAT_0802887c + 4);
      if ((iVar6 != 3) && ((*(ushort *)(*DAT_08028870 + 4) & 0x200) == 0)) {
        FUN_08000af0(*puVar10 + 0x10,iStack_9c + iVar6 * 0x20,1);
      }
      FUN_08007378((int)sStack_40,(int)sStack_3e,*(undefined2 *)(param_1 + 0xb),
                   *(undefined2 *)((int)param_1 + 0x2e),uVar3,puStack_28,uStack_a0,auStack_a8[0]);
      psVar8 = (short *)((int)param_1 + 0x42);
      if (*psVar8 != 0) {
        if (iStack_2c != 0) {
          iStack_2c = 0;
        }
        iVar6 = FUN_0806599c(puStack_24,*psVar8,&uStack_3c,&uStack_3a,0);
        if (iVar6 == 0) {
          FUN_0806585c(puStack_24,(int)sStack_40,sStack_3e + -0x20,*psVar8,uStack_3c);
        }
        else {
          *psVar8 = 0;
          uStack_3c = 0;
          uStack_3a = 0;
          iStack_2c = 1;
        }
      }
    }
    FUN_080003f0();
  }
  *param_1 = 0;
  return unaff_lr;
}

