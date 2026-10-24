
undefined8 FUN_0805cba4(ushort *param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  short sVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  undefined4 unaff_lr;
  undefined4 local_1c;
  
  local_1c = 0;
  FUN_080b9a88(&local_1c,param_1,DAT_0805cbcc);
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    uVar5 = 0;
  }
  else {
    uVar3 = FUN_080008c8();
    uVar6 = FUN_080baaf4(uVar3,100);
    iVar9 = (param_2 + -1) * 0x24;
    uVar1 = *(ushort *)(iVar9 + DAT_0805cc6c);
    if (param_3 == 8) {
      param_3 = 6;
    }
    puVar12 = *(ushort **)(param_3 * 4 + iVar9 + DAT_0805cc6c + 4);
    uVar2 = *puVar12;
    uVar5 = FUN_080008c8();
    uVar7 = FUN_080baaf4(uVar5,puVar12[1] + 1);
    uVar11 = 0;
    uVar10 = 0;
    if (uVar2 != 0) {
      do {
        if ((uVar11 <= uVar7) && (uVar7 <= puVar12[6])) {
          uVar2 = puVar12[4];
          *param_1 = uVar2;
          param_1[1] = puVar12[5];
          if (uVar2 == 10) {
            *(uint *)(param_1 + 2) = uVar7;
            uVar5 = FUN_080008c8();
            uVar2 = puVar12[5];
            uVar8 = FUN_080baa7c((uint)uVar2 * 0xf,10);
            uVar7 = FUN_080baaf4(uVar5,uVar8);
            uVar10 = (uint)(uVar2 >> 1);
            if (uVar7 < uVar10) {
              uVar7 = uVar10;
            }
            *(uint *)(param_1 + 2) = uVar7;
          }
          break;
        }
        uVar10 = uVar10 + 1;
        uVar11 = puVar12[6] + 1;
        puVar12 = puVar12 + 4;
      } while (uVar10 < uVar2);
    }
    if (uVar6 <= uVar1) {
      FUN_0805c884(param_1,0);
    }
    if (*param_1 == 9) {
      uVar5 = FUN_080008c8();
      sVar4 = FUN_080baaf4(uVar5,10);
      param_1[2] = sVar4 + *(short *)(DAT_0805ccc4 + 0x8c) * 10;
      iVar9 = FUN_0800c780();
      if (iVar9 != 0) {
        param_1[2] = param_1[2] + 100;
      }
    }
    uVar5 = 1;
  }
  return CONCAT44(unaff_lr,uVar5);
}

