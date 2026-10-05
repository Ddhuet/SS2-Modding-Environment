
undefined8 FUN_0805c884(ushort *param_1,uint param_2)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  ushort *puVar11;
  bool bVar12;
  bool bVar13;
  undefined4 unaff_lr;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  bVar13 = false;
  bVar1 = false;
  bVar12 = false;
  uVar2 = *param_1;
  if (uVar2 == 3) {
    uVar3 = FUN_08006d98(param_1[1] | 0xc0000);
    bVar12 = false;
    puVar11 = DAT_0805c994;
    local_24 = uVar3;
  }
  else if (uVar2 < 4) {
    if (uVar2 != 2) {
LAB_0805c9b4:
      uVar3 = 1;
      goto LAB_0805cb94;
    }
    local_30 = FUN_08006d98(param_1[1] | 0xb0000);
    puVar11 = DAT_0805c908;
    puVar10 = DAT_0805c8ec;
    if (*(short *)(local_30 + 0x174) == 9) {
      uVar3 = FUN_080008c8();
      puVar11 = puVar10;
      if ((uVar3 & 0xf) < 8) {
        bVar1 = true;
        bVar12 = true;
        goto LAB_0805c9b8;
      }
    }
    else {
      uVar3 = FUN_080008c8();
      if (2 < (uVar3 & 0xf)) {
        if ((uVar3 & 0xf) < 8) {
          uVar3 = FUN_080008c8();
          if ((uVar3 & 0xf) < 5) {
            bVar1 = true;
LAB_0805c940:
            bVar12 = true;
          }
          else {
            if (10 < (uVar3 & 0xf)) goto LAB_0805c92e;
            bVar12 = true;
            bVar13 = true;
          }
        }
        else {
          uVar3 = FUN_080008c8();
          if ((uVar3 & 0xf) < 5) goto LAB_0805c940;
          if ((uVar3 & 0xf) < 10) goto LAB_0805c930;
          bVar13 = true;
        }
        goto LAB_0805c9b8;
      }
      bVar12 = true;
LAB_0805c92e:
      bVar13 = true;
    }
LAB_0805c930:
    bVar1 = true;
  }
  else if (uVar2 == 4) {
    uVar3 = FUN_08006d98(param_1[1] | 0xd0000);
    bVar12 = false;
    puVar11 = DAT_0805c9b0;
    local_28 = uVar3;
  }
  else {
    if (uVar2 != 5) goto LAB_0805c9b4;
    uVar3 = FUN_08006d98(param_1[1] | 0xe0000);
    puVar11 = DAT_0805c974;
    if (*(int *)(uVar3 + 0x17c) != 0) {
      puVar11 = DAT_0805c978;
    }
    bVar12 = false;
    local_2c = uVar3;
  }
LAB_0805c9b8:
  if ((*param_1 < 6) && (2 < *param_1)) {
    uVar3 = FUN_080008c8();
    if (7 < (uVar3 & 0xf)) {
      bVar1 = true;
      bVar13 = true;
      goto LAB_0805c9e8;
    }
    uVar3 = FUN_080008c8();
    if (7 < (uVar3 & 0xf)) {
      bVar13 = true;
      goto LAB_0805c9e8;
    }
LAB_0805c9ec:
    uVar2 = *puVar11;
    uVar4 = FUN_080008c8();
    uVar3 = FUN_080baaf4(uVar4,puVar11[1],uVar4);
    uVar9 = 0;
    if (uVar2 != 0) {
      uVar8 = (uint)puVar11[3];
      puVar11 = puVar11 + 2;
      while (uVar8 < uVar3) {
        do {
          uVar9 = uVar9 + 1;
          puVar10 = puVar11 + 2;
          if (uVar2 <= uVar9) goto LAB_0805ca22;
          bVar1 = uVar3 < uVar8;
          uVar8 = (uint)puVar11[3];
          puVar11 = puVar10;
        } while (bVar1);
      }
      param_1[2] = *puVar11;
    }
  }
  else {
LAB_0805c9e8:
    if (bVar1) goto LAB_0805c9ec;
  }
LAB_0805ca22:
  puVar11 = DAT_0805ca78;
  if (bVar12) {
    uVar2 = *DAT_0805ca78;
    uVar4 = FUN_080008c8();
    uVar3 = FUN_080baaf4(uVar4,puVar11[1] + 1,uVar4);
    uVar9 = 0;
    if (uVar2 != 0xffffffff) {
      uVar8 = (uint)puVar11[3];
      puVar11 = puVar11 + 2;
      while (uVar8 < uVar3) {
        do {
          uVar9 = uVar9 + 1;
          uVar6 = uVar8 + 1;
          puVar10 = puVar11 + 2;
          if (uVar2 + 1 <= uVar9) goto LAB_0805ca64;
          uVar8 = (uint)puVar11[3];
          puVar11 = puVar10;
        } while (uVar3 < uVar6);
      }
      *(char *)((int)param_1 + 7) = (char)*puVar11;
    }
  }
LAB_0805ca64:
  if (bVar13) {
    puVar11 = DAT_0805ca7c;
    if (((param_2 & 1) == 0) && (iVar5 = FUN_0800c780(), puVar11 = DAT_0805cad8, iVar5 != 0)) {
      puVar11 = DAT_0805cadc;
    }
    uVar2 = *puVar11;
    uVar4 = FUN_080008c8();
    uVar3 = FUN_080baaf4(uVar4,puVar11[1] + 1,uVar4);
    uVar9 = 0;
    if (uVar2 != 0xffffffff) {
      uVar8 = (uint)puVar11[3];
      puVar11 = puVar11 + 2;
      while (uVar8 < uVar3) {
        do {
          uVar9 = uVar9 + 1;
          uVar6 = uVar8 + 1;
          puVar10 = puVar11 + 2;
          if (uVar2 + 1 <= uVar9) goto LAB_0805cac6;
          uVar8 = (uint)puVar11[3];
          puVar11 = puVar10;
        } while (uVar3 < uVar6);
      }
      *(char *)(param_1 + 3) = (char)*puVar11;
    }
  }
LAB_0805cac6:
  uVar2 = *param_1;
  if (uVar2 == 3) {
    uVar9 = 0;
    psVar7 = (short *)(local_24 + 0x180);
    do {
      if (*psVar7 != 0) {
        param_1[2] = 0;
        *(undefined1 *)(param_1 + 3) = 0;
        *(undefined1 *)((int)param_1 + 7) = 0;
        param_2 = 1;
        break;
      }
      psVar7 = psVar7 + 2;
      uVar9 = uVar9 + 1;
    } while (uVar9 < 3);
  }
  else if (uVar2 < 4) {
    if (uVar2 == 2) {
      uVar9 = 0;
      psVar7 = (short *)(local_30 + 0x188);
      do {
        if (*psVar7 != 0) goto LAB_0805cb58;
        psVar7 = psVar7 + 2;
        uVar9 = uVar9 + 1;
      } while (uVar9 < 3);
    }
  }
  else if (uVar2 == 4) {
    uVar9 = 0;
    psVar7 = (short *)(local_28 + 0x180);
    do {
      if (*psVar7 != 0) {
        param_1[2] = 0;
        *(undefined1 *)(param_1 + 3) = 0;
        *(undefined1 *)((int)param_1 + 7) = 0;
        param_2 = 1;
        break;
      }
      psVar7 = psVar7 + 2;
      uVar9 = uVar9 + 1;
    } while (uVar9 < 3);
  }
  else if (uVar2 == 5) {
    uVar9 = 0;
    psVar7 = (short *)(local_2c + 0x184);
    do {
      if (*psVar7 != 0) goto LAB_0805cb58;
      psVar7 = psVar7 + 2;
      uVar9 = uVar9 + 1;
    } while (uVar9 < 3);
  }
  goto LAB_0805cb80;
LAB_0805cb58:
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 7) = 0;
  param_2 = 1;
LAB_0805cb80:
  if (*(int *)(param_1 + 2) != 0) {
    *(bool *)(param_1 + 4) = (param_2 & 1) == 0;
  }
LAB_0805cb94:
  return CONCAT44(unaff_lr,uVar3);
}

