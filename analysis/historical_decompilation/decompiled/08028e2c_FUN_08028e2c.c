
undefined4 FUN_08028e2c(uint param_1,int param_2,int param_3,short param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 unaff_lr;
  
  if (param_1 < 0x100001) {
    if (param_1 < 6) {
      if (param_1 == 0) {
        iVar1 = FUN_080020f4();
        iVar1 = iVar1 * 0x154 + DAT_08029138;
        if (param_4 == 0) {
          piVar5 = (int *)(iVar1 + 0x94);
          *piVar5 = *piVar5 + ((param_2 << 0x10) >> 8);
          *(int *)(iVar1 + 0x98) = *(int *)(iVar1 + 0x98) + ((param_3 << 0x10) >> 8);
          *(int *)(iVar1 + 0x9c) = *piVar5;
          *(undefined4 *)(iVar1 + 0xa0) = *(undefined4 *)(iVar1 + 0x98);
          FUN_080003f0();
        }
        else {
          uVar4 = 0;
          iVar2 = FUN_080ba8a4(0x400,param_4);
          piVar5 = (int *)(iVar1 + 0x94);
          *(int *)(iVar1 + 0xa4) = *piVar5 + ((param_2 << 0x10) >> 8);
          *(int *)(iVar1 + 0xa8) = *(int *)(iVar1 + 0x98) + ((param_3 << 0x10) >> 8);
          iVar7 = *piVar5;
          uVar6 = *(undefined4 *)(iVar1 + 0x98);
          do {
            FUN_08066020(piVar5,iVar7,*(int *)(iVar1 + 0xa4),uVar4);
            FUN_08066020((int *)(iVar1 + 0x98),uVar6,*(int *)(iVar1 + 0xa8),uVar4);
            *(int *)(iVar1 + 0x9c) = *piVar5;
            *(undefined4 *)(iVar1 + 0xa0) = *(undefined4 *)(iVar1 + 0x98);
            uVar4 = uVar4 + iVar2;
            FUN_080003f0();
          } while (uVar4 <= DAT_0802913c);
          *(int *)(iVar1 + 0x9c) = *piVar5;
          *(undefined4 *)(iVar1 + 0xa0) = *(undefined4 *)(iVar1 + 0x98);
        }
      }
      else if (param_1 - 1 < 5) {
        iVar1 = *DAT_0802906c + DAT_08029070 * (param_1 - 1);
        if (param_4 == 0) {
          *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + ((param_2 << 0x10) >> 8);
          *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + ((param_3 << 0x10) >> 8);
          *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x14);
          *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x18);
          FUN_080003f0();
        }
        else {
          uVar4 = 0;
          iVar2 = FUN_080ba8a4(0x400,param_4);
          *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x14) + ((param_2 << 0x10) >> 8);
          *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x18) + ((param_3 << 0x10) >> 8);
          uVar6 = *(undefined4 *)(iVar1 + 0x14);
          uVar10 = *(undefined4 *)(iVar1 + 0x18);
          do {
            FUN_08066020(iVar1 + 0x14,uVar6,*(undefined4 *)(iVar1 + 0x24),uVar4);
            FUN_08066020(iVar1 + 0x18,uVar10,*(undefined4 *)(iVar1 + 0x28),uVar4);
            *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x14);
            *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x18);
            uVar4 = uVar4 + iVar2;
            FUN_080003f0();
          } while (uVar4 <= DAT_08029074);
        }
      }
    }
    else {
      puVar3 = (uint *)(*DAT_08028f9c + param_1 * 0x24 + DAT_08028fa0);
      if (param_4 == 0) {
        FUN_0800a9f4((*puVar3 & 0xffffff) >> 8,(puVar3[1] & 0xffffff) >> 8,
                     *(undefined2 *)((int)puVar3 + 0x1a),(short)puVar3[7],0);
        uVar4 = *puVar3 + ((param_2 << 0x10) >> 8);
        *puVar3 = uVar4;
        uVar8 = puVar3[1] + ((param_3 << 0x10) >> 8);
        puVar3[1] = uVar8;
        FUN_0800a9f4((uVar4 & 0xffffff) >> 8,(uVar8 & 0xffffff) >> 8,
                     *(undefined2 *)((int)puVar3 + 0x1a),(short)puVar3[7],1);
        FUN_080003f0();
      }
      else {
        uVar12 = 0;
        iVar1 = FUN_080ba8a4(0x400,param_4);
        uVar4 = *puVar3;
        uVar8 = puVar3[1];
        uVar11 = *puVar3;
        uVar9 = puVar3[1];
        do {
          FUN_0800a9f4((*puVar3 & 0xffffff) >> 8,(puVar3[1] & 0xffffff) >> 8,
                       *(undefined2 *)((int)puVar3 + 0x1a),(short)puVar3[7],0);
          FUN_08066020(puVar3,uVar11,uVar4 + ((param_2 << 0x10) >> 8),uVar12);
          FUN_08066020(puVar3 + 1,uVar9,uVar8 + ((param_3 << 0x10) >> 8),uVar12);
          FUN_0800a9f4((*puVar3 & 0xffffff) >> 8,(puVar3[1] & 0xffffff) >> 8,
                       *(undefined2 *)((int)puVar3 + 0x1a),(short)puVar3[7],1);
          uVar12 = uVar12 + iVar1;
          FUN_080003f0();
        } while (uVar12 <= DAT_08028fa4);
      }
    }
  }
  else {
    puVar3 = (uint *)(*DAT_08028ed4 + DAT_08028ed8);
    uVar4 = 0;
    do {
      if (*puVar3 == param_1) goto LAB_08028e6e;
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 0x1c;
    } while (uVar4 < 0xf);
    FUN_080003f0();
    puVar3 = (uint *)0x0;
LAB_08028e6e:
    if (puVar3 != (uint *)0x0) {
      if (param_4 == 0) {
        puVar3[2] = puVar3[2] + ((param_2 << 0x10) >> 8);
        puVar3[3] = puVar3[3] + ((param_3 << 0x10) >> 8);
        FUN_080003f0();
      }
      else {
        uVar11 = 0;
        iVar1 = FUN_080ba8a4(0x400,param_4);
        puVar3[4] = puVar3[2] + ((param_2 << 0x10) >> 8);
        puVar3[5] = puVar3[3] + ((param_3 << 0x10) >> 8);
        uVar4 = puVar3[2];
        uVar8 = puVar3[3];
        do {
          FUN_08066020(puVar3 + 2,uVar4,puVar3[4],uVar11);
          FUN_08066020(puVar3 + 3,uVar8,puVar3[5],uVar11);
          uVar11 = uVar11 + iVar1;
          FUN_080003f0();
        } while (uVar11 <= DAT_08028edc);
      }
    }
  }
  return unaff_lr;
}

