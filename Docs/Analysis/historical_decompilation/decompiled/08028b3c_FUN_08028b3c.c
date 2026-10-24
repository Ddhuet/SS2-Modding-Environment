
undefined4 FUN_08028b3c(uint param_1,uint param_2,uint param_3,short param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 unaff_lr;
  
  param_2 = param_2 & 0xffff;
  param_3 = param_3 & 0xffff;
  if (param_1 < 0x100001) {
    if (param_1 < 6) {
      if (param_1 == 0) {
        iVar1 = FUN_080020f4();
        iVar1 = iVar1 * 0x154 + DAT_08028df0;
        if (param_4 == 0) {
          *(int *)(iVar1 + 0x94) = param_2 << 8;
          *(uint *)(iVar1 + 0x98) = param_3 << 8;
          *(int *)(iVar1 + 0x9c) = *(int *)(iVar1 + 0x94);
          *(undefined4 *)(iVar1 + 0xa0) = *(undefined4 *)(iVar1 + 0x98);
          FUN_080003f0();
        }
        else {
          uVar5 = 0;
          iVar2 = FUN_080ba8a4(0x400,param_4);
          *(int *)(iVar1 + 0xa4) = param_2 << 8;
          *(int *)(iVar1 + 0xa8) = param_3 << 8;
          puVar3 = (undefined4 *)(iVar1 + 0x94);
          uVar6 = *puVar3;
          uVar8 = *(undefined4 *)(iVar1 + 0x98);
          do {
            FUN_08066020(puVar3,uVar6,*(int *)(iVar1 + 0xa4),uVar5);
            FUN_08066020(iVar1 + 0x98,uVar8,*(int *)(iVar1 + 0xa8),uVar5);
            *(undefined4 *)(iVar1 + 0x9c) = *puVar3;
            *(undefined4 *)(iVar1 + 0xa0) = *(undefined4 *)(iVar1 + 0x98);
            uVar5 = uVar5 + iVar2;
            FUN_080003f0();
          } while (uVar5 <= DAT_08028df4);
          *(undefined4 *)(iVar1 + 0x9c) = *puVar3;
          *(undefined4 *)(iVar1 + 0xa0) = *(undefined4 *)(iVar1 + 0x98);
        }
      }
      else if (param_1 - 1 < 5) {
        iVar1 = *DAT_08028d3c + DAT_08028d40 * (param_1 - 1);
        if (param_4 == 0) {
          *(uint *)(iVar1 + 0x14) = param_2 << 8;
          *(uint *)(iVar1 + 0x18) = param_3 << 8;
          *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x14);
          *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x18);
          FUN_080003f0();
        }
        else {
          uVar5 = 0;
          iVar2 = FUN_080ba8a4(0x400,param_4);
          *(uint *)(iVar1 + 0x24) = param_2 << 8;
          *(uint *)(iVar1 + 0x28) = param_3 << 8;
          uVar6 = *(undefined4 *)(iVar1 + 0x14);
          uVar8 = *(undefined4 *)(iVar1 + 0x18);
          do {
            FUN_08066020(iVar1 + 0x14,uVar6,*(undefined4 *)(iVar1 + 0x24),uVar5);
            FUN_08066020(iVar1 + 0x18,uVar8,*(undefined4 *)(iVar1 + 0x28),uVar5);
            *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x14);
            *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x18);
            uVar5 = uVar5 + iVar2;
            FUN_080003f0();
          } while (uVar5 <= DAT_08028d44);
        }
      }
    }
    else {
      puVar4 = (uint *)(*DAT_08028c88 + param_1 * 0x24 + DAT_08028c8c);
      if (param_4 == 0) {
        FUN_0800a9f4((*puVar4 & 0xffffff) >> 8,(puVar4[1] & 0xffffff) >> 8,
                     *(undefined2 *)((int)puVar4 + 0x1a),(short)puVar4[7],0);
        *puVar4 = param_2 << 8;
        puVar4[1] = param_3 << 8;
        FUN_0800a9f4(param_2,param_3,*(undefined2 *)((int)puVar4 + 0x1a),(short)puVar4[7],1);
        FUN_080003f0();
      }
      else {
        uVar9 = 0;
        iVar1 = FUN_080ba8a4(0x400,param_4);
        uVar5 = *puVar4;
        uVar7 = puVar4[1];
        do {
          FUN_0800a9f4((*puVar4 & 0xffffff) >> 8,(puVar4[1] & 0xffffff) >> 8,
                       *(undefined2 *)((int)puVar4 + 0x1a),(short)puVar4[7],0);
          FUN_08066020(puVar4,uVar5,param_2 << 8,uVar9);
          FUN_08066020(puVar4 + 1,uVar7,param_3 << 8,uVar9);
          FUN_0800a9f4((*puVar4 & 0xffffff) >> 8,(puVar4[1] & 0xffffff) >> 8,
                       *(undefined2 *)((int)puVar4 + 0x1a),(short)puVar4[7],1);
          uVar9 = uVar9 + iVar1;
          FUN_080003f0();
        } while (uVar9 <= DAT_08028c90);
      }
    }
  }
  else {
    puVar4 = (uint *)(*DAT_08028bd8 + DAT_08028bdc);
    uVar5 = 0;
    do {
      if (*puVar4 == param_1) goto LAB_08028b7e;
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 0x1c;
    } while (uVar5 < 0xf);
    FUN_080003f0();
    puVar4 = (uint *)0x0;
LAB_08028b7e:
    if (puVar4 != (uint *)0x0) {
      if (param_4 == 0) {
        puVar4[2] = param_2 << 8;
        puVar4[3] = param_3 << 8;
        FUN_080003f0();
      }
      else {
        uVar9 = 0;
        iVar1 = FUN_080ba8a4(0x400,param_4);
        puVar4[4] = param_2 << 8;
        puVar4[5] = param_3 << 8;
        uVar5 = puVar4[2];
        uVar7 = puVar4[3];
        do {
          FUN_08066020(puVar4 + 2,uVar5,puVar4[4],uVar9);
          FUN_08066020(puVar4 + 3,uVar7,puVar4[5],uVar9);
          uVar9 = uVar9 + iVar1;
          FUN_080003f0();
        } while (uVar9 <= DAT_08028be0);
      }
    }
  }
  return unaff_lr;
}

