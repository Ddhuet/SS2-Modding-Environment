
void FUN_08009090(uint param_1,short param_2,short param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ushort *puVar12;
  int iVar13;
  ushort *puVar14;
  int local_30;
  int local_2c;
  int local_24;
  
  iVar3 = DAT_080090e0;
  param_1 = param_1 & 0xffff;
  puVar14 = (ushort *)(param_1 * 0x18 + DAT_080090e4);
  if (puVar14[0xb] == 0) {
    uVar4 = puVar14[4];
    uVar8 = (uint)puVar14[5];
  }
  else {
    uVar4 = param_2 + puVar14[4];
    uVar8 = (int)param_3 + (uint)puVar14[5] & 0xffff;
  }
  if (*(int *)(puVar14 + 6) == 0) {
    return;
  }
  uVar1 = *(ushort *)(DAT_080090e4 + 0x8c);
  if (uVar1 == 8) {
    if ((param_1 == 3) && (uVar5 = *(ushort *)(DAT_080090e4 + 0x90) - 2, uVar5 < 0xd)) {
                    /* WARNING: Could not recover jumptable at 0x0800913a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar5 * 4 + DAT_0800913c))();
      return;
    }
  }
  else if (uVar1 < 9) {
    if (uVar1 == 5) {
      uVar5 = -(*(ushort *)(DAT_080090e4 + 0x90) ^ 0xd) >> 0x1f;
    }
    else {
LAB_080091be:
      uVar5 = 1;
    }
    iVar7 = DAT_080090e4;
    if (uVar5 == 0) goto LAB_080093ca;
  }
  else {
    if (uVar1 != 10) goto LAB_080091be;
    if ((param_1 - 1 & 0xffff) < 2) {
      iVar7 = (int)(short)uVar8;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 7;
      }
      iVar7 = (int)(((iVar7 >> 3) - (uint)puVar14[1]) * 0x10000) >> 0x10;
      if (iVar7 < -0x1d) {
        puVar14[1] = 0x15;
      }
      else if (0x1d < iVar7) {
        puVar14[1] = 0x14;
      }
    }
  }
  iVar10 = (int)(short)uVar4;
  iVar7 = iVar10;
  if (iVar10 < 0) {
    iVar7 = iVar10 + 7;
  }
  iVar9 = (int)(uVar8 * 0x10000) >> 0x10;
  iVar6 = iVar9;
  if (iVar9 < 0) {
    iVar6 = iVar9 + 7;
  }
  uVar1 = puVar14[1];
  iVar7 = ((iVar7 >> 3) - (uint)*puVar14) * 0x10000;
  iVar13 = iVar7 >> 0x10;
  if (iVar13 < 1) {
    if (iVar13 < 0) {
      iVar13 = (iVar10 + -8) * 0x10000;
      FUN_08008ee0(puVar14,iVar13 >> 0x10,iVar9);
      uVar5 = 0;
      iVar10 = (int)(short)-(short)((uint)iVar7 >> 0x10);
      if (0 < iVar10) {
        do {
          FUN_08008ee0(puVar14,((int)(short)((short)((uint)iVar13 >> 0x10) + 8) + (short)uVar5 * 8)
                               * 0x10000 >> 0x10,iVar9);
          uVar11 = (int)(short)uVar5 + 1;
          uVar5 = uVar11 & 0xffff;
        } while ((int)(uVar11 * 0x10000) >> 0x10 < iVar10);
      }
    }
  }
  else {
    iVar10 = (iVar10 + 0xf1) * 0x10000;
    FUN_08008ee0(puVar14,iVar10 >> 0x10,iVar9);
    uVar5 = 0;
    if (0 < iVar13) {
      do {
        FUN_08008ee0(puVar14,((int)(short)((short)((uint)iVar10 >> 0x10) + -8) + (short)uVar5 * -8)
                             * 0x10000 >> 0x10,iVar9);
        uVar11 = (int)(short)uVar5 + 1;
        uVar5 = uVar11 & 0xffff;
      } while ((int)(uVar11 * 0x10000) >> 0x10 < iVar13);
    }
  }
  local_24 = ((iVar6 >> 3) - (uint)uVar1) * 0x10000;
  local_30 = param_1 * 2;
  local_2c = (uint)uVar4 * 0x10000;
  iVar10 = local_24 >> 0x10;
  if (iVar10 < 1) {
    if (iVar10 < 0) {
      iVar10 = local_2c + DAT_0800941c >> 0x10;
      FUN_08008fc8(puVar14,iVar10,iVar9);
      uVar5 = 0;
      iVar6 = (int)(short)-(short)((uint)local_24 >> 0x10);
      if (0 < iVar6) {
        do {
          FUN_08008fc8(puVar14,iVar10,((short)uVar5 * 8 + iVar9) * 0x10000 >> 0x10);
          uVar11 = (int)(short)uVar5 + 1;
          uVar5 = uVar11 & 0xffff;
        } while ((int)(uVar11 * 0x10000) >> 0x10 < iVar6);
      }
    }
  }
  else {
    iVar6 = local_2c + DAT_08009308 >> 0x10;
    iVar13 = (int)(uVar8 * 0x10000 + 0xa10000) >> 0x10;
    FUN_08008fc8(puVar14,iVar6,iVar13);
    uVar5 = 0;
    if (0 < iVar10) {
      do {
        FUN_08008fc8(puVar14,iVar6,(iVar13 + (short)uVar5 * -8) * 0x10000 >> 0x10);
        uVar11 = (int)(short)uVar5 + 1;
        uVar5 = uVar11 & 0xffff;
      } while ((int)(uVar11 * 0x10000) >> 0x10 < iVar10);
    }
  }
  if (((iVar7 != 0) || (local_24 != 0)) || (param_4 != 0)) {
    FUN_08001348(*(undefined4 *)(param_1 * 4 + DAT_08009424),
                 (*(ushort *)(local_30 + DAT_08009420) >> 8 & 0x1f) * 0x800 + 0x6000000,0x800);
  }
  if ((iVar7 != 0) || (param_4 != 0)) {
    local_2c = local_2c >> 0x10;
    if (local_2c < 0) {
      local_2c = local_2c + 7;
    }
    *puVar14 = (ushort)(local_2c >> 3);
  }
  if ((local_24 != 0) || (iVar7 = DAT_08009428, param_4 != 0)) {
    if (iVar9 < 0) {
      iVar9 = iVar9 + 7;
    }
    puVar14[1] = (ushort)(iVar9 >> 3);
    iVar7 = DAT_08009428;
  }
LAB_080093ca:
  uVar1 = *(ushort *)(iVar7 + 0x86);
  uVar2 = puVar14[3];
  puVar12 = (ushort *)(iVar3 + (uint)puVar14[10] * 4);
  *puVar12 = (ushort)((((int)(((int)(short)uVar4 + (uint)*(ushort *)(iVar7 + 0x84)) * 0x10000) >>
                       0x10) + (uint)puVar14[2]) * 0x10000 >> 0x10) & 0xff;
  puVar12[1] = (ushort)((((int)(((int)(short)uVar8 + (uint)uVar1) * 0x10000) >> 0x10) + (uint)uVar2)
                        * 0x10000 >> 0x10) & 0xff;
  return;
}

