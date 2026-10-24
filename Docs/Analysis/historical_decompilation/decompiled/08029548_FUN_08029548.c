
undefined4 FUN_08029548(uint param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  int unaff_r9;
  int unaff_r10;
  undefined4 unaff_lr;
  uint *local_2c;
  uint local_28;
  uint local_24;
  
  if (param_1 < 0x100001) {
    if (param_1 == 0) {
      iVar5 = FUN_080020f4();
      unaff_r9 = iVar5 * 0x154 + DAT_08029628;
      local_28 = *(uint *)(unaff_r9 + 0x94);
      local_24 = *(uint *)(unaff_r9 + 0x98);
    }
    else {
      if (4 < param_1 - 1) {
        return unaff_lr;
      }
      unaff_r10 = *DAT_080295c8 + DAT_080295cc * (param_1 - 1);
      local_28 = *(uint *)(unaff_r10 + 0x14);
      local_24 = *(uint *)(unaff_r10 + 0x18);
    }
  }
  else {
    local_2c = (uint *)(*DAT_08029594 + DAT_08029598);
    uVar8 = 0;
    do {
      if (*local_2c == param_1) goto LAB_08029580;
      uVar8 = uVar8 + 1;
      local_2c = local_2c + 0x1c;
    } while (uVar8 < 0xf);
    FUN_080003f0();
    local_2c = (uint *)0x0;
LAB_08029580:
    if (local_2c == (uint *)0x0) {
      return unaff_lr;
    }
    local_28 = local_2c[2];
    local_24 = local_2c[3];
  }
  if (param_2 < 0x100001) {
    if (param_2 == 0) {
      iVar5 = FUN_080020f4();
      iVar5 = iVar5 * 0x154 + DAT_08029684;
      uVar9 = *(uint *)(iVar5 + 0x98);
      uVar8 = *(uint *)(iVar5 + 0x94);
    }
    else {
      if (4 < param_2 - 1) {
        return unaff_lr;
      }
      iVar5 = *DAT_08029654 + DAT_08029658 * (param_2 - 1);
      uVar8 = *(uint *)(iVar5 + 0x14);
      uVar9 = *(uint *)(iVar5 + 0x18);
    }
  }
  else {
    puVar6 = (uint *)(*DAT_0802962c + DAT_08029630);
    uVar8 = 0;
    do {
      if (*puVar6 == param_2) goto LAB_0802961a;
      uVar8 = uVar8 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar8 < 0xf);
    FUN_080003f0();
    puVar6 = (uint *)0x0;
LAB_0802961a:
    if (puVar6 == (uint *)0x0) {
      return unaff_lr;
    }
    uVar8 = puVar6[2];
    uVar9 = puVar6[3];
  }
  if (param_1 < 0x100001) {
    if (param_1 == 0) {
      *(undefined2 *)(unaff_r9 + 0x24) = *(undefined2 *)(unaff_r9 + 0x22);
    }
    else {
      *(undefined2 *)(unaff_r10 + 10) = *(undefined2 *)(unaff_r10 + 8);
    }
  }
  else {
    *(short *)((int)local_2c + 0x26) = (short)local_2c[9];
  }
  iVar5 = FUN_080b9a80((int)((uVar8 - local_28) * 0x100) >> 0x10,
                       (int)((uVar9 - local_24) * 0x100) >> 0x10);
  bVar1 = *(byte *)((iVar5 * 0x10000 + 0x8000000U >> 0x1c) + DAT_080296cc);
  uVar10 = (ushort)bVar1;
  if (param_1 < 0x100001) {
    if (param_1 == 0) {
      sVar3 = *(short *)(unaff_r9 + 0x22);
    }
    else {
      sVar3 = *(short *)(unaff_r10 + 8);
    }
  }
  else {
    sVar3 = (short)local_2c[9];
  }
  iVar5 = (int)(short)(sVar3 - (ushort)bVar1);
  if (iVar5 < 0) {
    uVar7 = DAT_08029730;
    if (iVar5 == -4 || -iVar5 < 4) {
      uVar7 = 1;
    }
  }
  else {
    uVar7 = 1;
    if (iVar5 < 5) {
      uVar7 = DAT_080296f8;
    }
  }
  sVar3 = (short)uVar7;
  if (param_1 < 0x100001) {
    if (param_1 == 0) {
      uVar8 = (uint)*(ushort *)(unaff_r9 + 0x22);
      uVar2 = *(ushort *)(unaff_r9 + 0x22);
      while (uVar2 != uVar10) {
        FUN_0802917c(0,(int)(short)uVar8);
        sVar4 = 2;
        do {
          FUN_080003f0();
          iVar5 = FUN_080021a8();
          if (iVar5 != 0) break;
          sVar4 = sVar4 + -1;
        } while (sVar4 != 0);
        uVar9 = (int)(short)uVar8 + (int)sVar3;
        uVar8 = uVar9 & 0xffff;
        iVar5 = (int)(uVar9 * 0x10000) >> 0x10;
        if (iVar5 < 8) {
          if (iVar5 < 0) {
            uVar8 = 7;
          }
        }
        else {
          uVar8 = 0;
        }
        uVar2 = *(ushort *)(unaff_r9 + 0x22);
      }
    }
    else {
      uVar8 = (uint)*(ushort *)(unaff_r10 + 8);
      uVar2 = *(ushort *)(unaff_r10 + 8);
      while (uVar2 != uVar10) {
        FUN_0802917c(param_1,(int)(short)uVar8);
        sVar4 = 2;
        do {
          FUN_080003f0();
          iVar5 = FUN_080021a8();
          if (iVar5 != 0) break;
          sVar4 = sVar4 + -1;
        } while (sVar4 != 0);
        uVar9 = (int)(short)uVar8 + (int)sVar3;
        uVar8 = uVar9 & 0xffff;
        iVar5 = (int)(uVar9 * 0x10000) >> 0x10;
        if (iVar5 < 8) {
          if (iVar5 < 0) {
            uVar8 = 7;
          }
        }
        else {
          uVar8 = 0;
        }
        uVar2 = *(ushort *)(unaff_r10 + 8);
      }
    }
  }
  else {
    uVar8 = (uint)(ushort)local_2c[9];
    uVar2 = (ushort)local_2c[9];
    while (uVar2 != uVar10) {
      FUN_0802917c(param_1,(int)(short)uVar8);
      sVar4 = 2;
      do {
        FUN_080003f0();
        iVar5 = FUN_080021a8();
        if (iVar5 != 0) break;
        sVar4 = sVar4 + -1;
      } while (sVar4 != 0);
      uVar9 = (int)(short)uVar8 + (int)sVar3;
      uVar8 = uVar9 & 0xffff;
      iVar5 = (int)(uVar9 * 0x10000) >> 0x10;
      if (iVar5 < 8) {
        if (iVar5 < 0) {
          uVar8 = 7;
        }
      }
      else {
        uVar8 = 0;
      }
      uVar2 = (ushort)local_2c[9];
    }
  }
  return unaff_lr;
}

