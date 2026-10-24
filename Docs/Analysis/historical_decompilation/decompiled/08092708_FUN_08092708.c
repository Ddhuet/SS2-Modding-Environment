
undefined4 FUN_08092708(uint param_1,uint param_2)

{
  bool bVar1;
  undefined2 *puVar2;
  short *psVar3;
  short *psVar4;
  undefined2 *puVar5;
  ushort *puVar6;
  char cVar7;
  short sVar8;
  ushort uVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  ushort *puVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  undefined4 unaff_lr;
  undefined4 local_158 [2];
  undefined4 local_150;
  int local_14c;
  undefined1 auStack_13c [7];
  undefined1 local_135;
  undefined4 local_124 [2];
  undefined4 local_11c;
  int local_118;
  undefined1 auStack_108 [8];
  undefined1 local_100;
  int local_f0 [11];
  int local_c4 [11];
  short local_98 [12];
  undefined1 local_80 [24];
  short local_68 [12];
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  undefined1 *local_2c;
  int *local_28;
  int *local_24;
  
  local_50 = param_1 & 0xff;
  local_4c = param_2 & 0xff;
  FUN_08065784(local_158,DAT_08092784,7,0xffffffff,1);
  FUN_08065784(local_124,DAT_08092788,8,0xffffffff,1);
  puVar2 = DAT_0809278c;
  local_135 = 0;
  local_100 = 1;
  local_44 = 0xd4;
  *DAT_0809278c = 8;
  puVar2[1] = 0;
  puVar2[2] = 8;
  puVar2[3] = 0;
  puVar2 = DAT_08092790;
  *DAT_08092794 = 8;
  *puVar2 = 8;
  *DAT_08092798 = 0xfff4;
  *DAT_0809279c = 0xc;
  local_3c = 3;
  FUN_0801a74c(6);
  while (iVar12 = FUN_0801a6dc(), iVar12 == 0) {
    FUN_080003f0();
  }
  FUN_08059a8c(0xf7);
  uVar19 = 0x3c;
  FUN_08093134(6);
  FUN_08093128(0x3c);
  uVar17 = DAT_08092850;
  iVar12 = DAT_0809284c;
  do {
    sVar8 = FUN_08093140();
    iVar13 = FUN_0800c61c();
    if (((iVar13 == 0) && (iVar13 = FUN_0800c5e8(), iVar13 == 0)) &&
       (iVar13 = FUN_0800c684(), iVar13 == 0)) {
      *(short *)(iVar12 + 2) = sVar8 + *DAT_08092854;
      *(short *)(iVar12 + 6) = sVar8 + *DAT_08092858;
    }
    FUN_080003f0();
    iVar14 = FUN_080021a8();
    iVar13 = DAT_0809284c;
    if (iVar14 == 1) goto LAB_08092f5e;
    uVar19 = uVar19 - 1 & 0xffff;
  } while (uVar19 != uVar17);
  *DAT_08092854 = *(short *)(DAT_0809284c + 2);
  *DAT_08092858 = *(short *)(iVar13 + 6);
  uVar17 = 0;
  local_24 = local_c4;
  local_28 = local_f0;
  do {
    if ((uVar17 & 1) == 0) {
      iVar12 = uVar17 * -0x10;
    }
    else {
      iVar12 = uVar17 * 0x10;
    }
    local_24[uVar17] = (iVar12 + 0x70) * 0x100;
    local_28[uVar17] = uVar17 * 0x3c + 0x1e;
    uVar17 = uVar17 + 1 & 0xffff;
  } while (uVar17 < 4);
  uVar9 = 0;
  local_48 = 0;
  uVar17 = 0xf0;
  FUN_08093134(4);
  psVar3 = DAT_080928f4;
  do {
    sVar8 = FUN_08093140();
    uVar19 = local_48 * 0x10000 + 0x20000;
    local_48 = uVar19 >> 0x10;
    iVar12 = (uint)*DAT_080928f8 - ((int)uVar19 >> 0x18);
    *DAT_080928f8 = (ushort)iVar12;
    *psVar3 = *psVar3 + (short)(char)(uVar19 >> 0x18);
    if (iVar12 * 0x10000 >> 0x10 < -0xf) {
      *DAT_080928f8 = 0xfff0;
    }
    if (0x1f < *psVar3) {
      *psVar3 = 0x20;
    }
    if (uVar17 < 0x78) {
      bVar1 = 0xf < uVar9;
      if (bVar1) {
        uVar9 = 0x10;
      }
      else {
        uVar9 = uVar9 + 1;
      }
      FUN_08008b40(0,0x22,1,uVar9,0x10,0);
      FUN_08000af0(0x11,local_118 + 0x100,1);
      iVar12 = FUN_0800c61c();
      if (((iVar12 == 0) && (iVar12 = FUN_0800c5e8(), iVar12 == 0)) &&
         (iVar12 = FUN_0800c684(), iVar12 == 0)) {
        uVar19 = 0;
        do {
          iVar12 = local_24[uVar19] + DAT_08092af4;
          local_24[uVar19] = iVar12;
          FUN_080082b0(local_28[uVar19],iVar12 >> 8,uVar19 + 7 & 0xffff,0,local_3c,auStack_108,
                       local_11c,local_124[0],!bVar1);
          uVar19 = uVar19 + 1 & 0xffff;
        } while (uVar19 < 4);
      }
    }
    iVar12 = FUN_0800c61c();
    if (((iVar12 == 0) && (iVar12 = FUN_0800c5e8(), iVar12 == 0)) &&
       (iVar12 = FUN_0800c684(), psVar4 = DAT_08092afc, iVar12 == 0)) {
      *DAT_08092afc = sVar8 + *DAT_08092af8;
      psVar4[1] = *DAT_08092b00;
      psVar4[2] = *DAT_08092b04 - sVar8;
      psVar4[3] = *psVar3;
    }
    FUN_080003f0();
    iVar12 = FUN_080021a8();
    psVar4 = DAT_08092afc;
    if (iVar12 == 1) goto LAB_08092f5e;
    uVar17 = uVar17 - 1 & 0xffff;
  } while (uVar17 != DAT_08092b08);
  uVar17 = 0x78;
  do {
    sVar8 = FUN_08093140();
    uVar19 = local_44 * 0x10000 + DAT_08092b0c;
    local_44 = uVar19 >> 0x10;
    if ((int)uVar19 >> 0x10 < -0x38) {
      local_44 = DAT_08092b10;
    }
    iVar12 = FUN_0800c61c();
    if (((iVar12 == 0) && (iVar12 = FUN_0800c5e8(), iVar12 == 0)) &&
       (iVar12 = FUN_0800c684(), iVar12 == 0)) {
      FUN_08000af0(0x10,local_14c + 0xe0,1);
      FUN_08007378(0x7c,(int)(short)local_44,0,0,local_3c,auStack_13c,local_150,local_158[0]);
      FUN_08000af0(0x11,local_118 + 0x100,1);
      uVar19 = 0;
      do {
        iVar12 = local_24[uVar19] + DAT_08092af4;
        local_24[uVar19] = iVar12;
        FUN_08007378(local_28[uVar19],iVar12 >> 8,uVar19 + 7 & 0xffff,0,local_3c,auStack_108,
                     local_11c,local_124[0]);
        uVar19 = uVar19 + 1 & 0xffff;
      } while (uVar19 < 4);
      *psVar4 = sVar8 + *DAT_08092af8;
      psVar4[2] = *DAT_08092b04 - sVar8;
    }
    FUN_080003f0();
    iVar12 = FUN_080021a8();
    if (iVar12 == 1) goto LAB_08092f5e;
    uVar17 = uVar17 - 1 & 0xffff;
  } while (uVar17 != DAT_08092b08);
  FUN_0800c548(1);
  FUN_08059a8c(0xf8);
  cVar7 = (char)local_4c;
  if (cVar7 == '\x02') {
    local_40 = 0x70;
    uVar15 = DAT_08092b38;
  }
  else if (cVar7 < '\x03') {
    if (cVar7 != '\x01') goto LAB_08092b6e;
    local_40 = 0x86;
    uVar15 = DAT_08092b2c;
  }
  else {
    if (cVar7 != '\x03') {
      if (cVar7 == '\x04') {
        local_40 = 99;
        FUN_08065784(local_158,DAT_08092e28,7,0xffffffff,1);
      }
      goto LAB_08092b6e;
    }
    local_40 = 0x6b;
    uVar15 = DAT_08092b54;
  }
  FUN_08065784(local_158,uVar15,7,0xffffffff,1);
LAB_08092b6e:
  local_135 = 0;
  local_3c = 0;
  local_44 = 0xff00;
  do {
    local_44 = local_44 * 0x10000 + 0x80000 >> 0x10;
    iVar12 = FUN_0800c61c();
    if (((iVar12 == 0) && (iVar12 = FUN_0800c5e8(), iVar12 == 0)) &&
       (iVar12 = FUN_0800c684(), iVar12 == 0)) {
      FUN_08000af0(0x10,local_14c + 0xe0,1);
      FUN_08007378(0x7c,(int)(short)local_44,0,0,local_3c,auStack_13c,local_150,local_158[0]);
    }
    FUN_080003f0();
    iVar12 = FUN_080021a8();
    if (iVar12 == 1) goto LAB_08092f5e;
  } while (local_40 * 0x10000 + local_44 * -0x10000 != 0 &&
           (int)(local_44 * 0x10000) <= (int)(local_40 * 0x10000));
  local_44 = local_40 & 0xffff;
  FUN_08059a8c(0xf9);
  FUN_08093134(8);
  puVar2 = DAT_08092e30;
  iVar12 = DAT_08092e2c;
  local_48 = 0;
  uVar17 = 0xb4;
  local_30 = 0x7c0000;
  sVar8 = (short)local_44;
  do {
    sVar10 = FUN_08093140();
    iVar13 = FUN_0800c61c();
    if (((iVar13 == 0) && (iVar13 = FUN_0800c5e8(), iVar13 == 0)) &&
       (iVar13 = FUN_0800c684(), iVar13 == 0)) {
      FUN_08000af0(0x10,local_14c + 0xe0,1);
      FUN_08007378(local_30 >> 0x10,(int)sVar8,0,0,local_3c,auStack_13c,local_150,local_158[0]);
      puVar16 = DAT_08092e34;
      uVar19 = local_48 * 0x10000 + 0x40000;
      local_48 = uVar19 >> 0x10;
      iVar13 = (int)uVar19 >> 0x18;
      iVar14 = (uint)*DAT_08092e34 - iVar13;
      *DAT_08092e34 = (ushort)iVar14;
      puVar6 = DAT_08092e38;
      iVar13 = (uint)*DAT_08092e38 + iVar13;
      *DAT_08092e38 = (ushort)iVar13;
      iVar14 = iVar14 * 0x10000;
      if (iVar14 - iVar12 == 0 || iVar14 < iVar12) {
        *puVar16 = (ushort)((uint)iVar12 >> 0x10);
      }
      if (0x31 < iVar13 * 0x10000 >> 0x10) {
        *puVar6 = 0x32;
      }
      *puVar2 = *DAT_08092e3c;
      puVar2[1] = sVar10 + *puVar16;
      puVar2[2] = *DAT_08092e40;
      puVar2[3] = *puVar6 - sVar10;
    }
    if (uVar17 == 0x3c) {
      FUN_08059a8c(0xf7);
    }
    FUN_080003f0();
    iVar13 = FUN_080021a8();
    puVar5 = DAT_08092e30;
    if (iVar13 == 1) goto LAB_08092f5e;
    uVar17 = uVar17 - 1 & 0xffff;
  } while (uVar17 != DAT_08092e44);
  sVar8 = 0x10;
  sVar10 = (short)local_44;
  do {
    sVar8 = sVar8 + -1;
    iVar12 = FUN_0800c61c();
    if (((iVar12 == 0) && (iVar12 = FUN_0800c5e8(), iVar12 == 0)) &&
       (iVar12 = FUN_0800c684(), iVar12 == 0)) {
      FUN_08008b40(0,0x22,1,sVar8,0x10,0);
      sVar11 = FUN_08093140();
      puVar5[1] = sVar11 + *DAT_08092e34;
      puVar5[3] = *DAT_08092e38 - sVar11;
      FUN_08000af0(0x10,local_14c + 0xe0,1);
      FUN_080082b0(0x7c,(int)sVar10,0,0,local_3c,auStack_13c,local_150,local_158[0],1);
    }
    FUN_080003f0();
    iVar12 = FUN_080021a8();
    if (iVar12 == 1) goto LAB_08092f5e;
  } while (sVar8 != 0);
  local_34 = (uint)((int)(local_50 << 0x18) >> 7) >> 0x10;
  FUN_08093134(6);
  local_38 = 0;
  if (local_34 != 0) {
    local_2c = local_80;
    do {
      uVar17 = 0;
      do {
        sVar8 = FUN_0800086c();
        piVar18 = local_24 + uVar17;
        sVar8 = FUN_080ba93c((int)sVar8,0x78);
        iVar12 = (int)sVar8;
        if (iVar12 < 0) {
          iVar12 = -iVar12;
        }
        *piVar18 = (iVar12 + -0x8c) * 0x100;
        local_28[uVar17] = (uVar17 + 1) * 0x1000;
        *(undefined2 *)(local_2c + uVar17 * 2) = 0;
        sVar8 = FUN_0800086c();
        iVar13 = (int)sVar8;
        iVar12 = iVar13;
        if (iVar13 < 0) {
          iVar12 = iVar13 + 3;
        }
        iVar12 = (iVar13 + (iVar12 >> 2) * -4) * 0x10000 >> 0x10;
        if (iVar12 < 0) {
          iVar12 = -iVar12;
        }
        local_68[uVar17] = (short)iVar12;
        if (local_38 == 0) {
          sVar8 = FUN_0800086c();
          uVar15 = 0x78;
        }
        else {
          sVar8 = FUN_0800086c();
          uVar15 = 0x18;
        }
        sVar8 = FUN_080ba93c((int)sVar8,uVar15);
        if (sVar8 < 0) {
          sVar8 = -sVar8;
        }
        local_98[uVar17] = sVar8;
        uVar17 = uVar17 + 1 & 0xffff;
      } while (uVar17 < 0xb);
      sVar8 = 0xb;
      do {
        iVar12 = FUN_0800c61c();
        if (((iVar12 == 0) && (iVar12 = FUN_0800c5e8(), iVar12 == 0)) &&
           (iVar12 = FUN_0800c684(), iVar12 == 0)) {
          FUN_08000af0(0x18,local_118 + 0x100,1);
          uVar17 = 0;
          do {
            sVar10 = local_98[uVar17];
            if (sVar10 == 0) {
              piVar18 = local_24 + uVar17;
              if (*piVar18 <= DAT_08092f68) {
                puVar16 = (ushort *)(local_2c + uVar17 * 2);
                *puVar16 = *puVar16 + 4 + local_68[uVar17];
                uVar9 = *puVar16;
                iVar12 = *piVar18;
                *piVar18 = iVar12 + (uint)uVar9;
                FUN_08007378(local_28[uVar17] >> 8,(int)(iVar12 + (uint)uVar9) >> 8,uVar17,0,
                             local_3c,auStack_108,local_11c,local_124[0]);
                if (DAT_08092f68 < *piVar18) {
                  sVar8 = sVar8 + -1;
                }
              }
              local_68[uVar17] = local_68[uVar17] + 1;
            }
            else {
              local_98[uVar17] = sVar10 + -1;
            }
            uVar17 = uVar17 + 1 & 0xffff;
          } while (uVar17 < 0xb);
        }
        sVar10 = FUN_08093140();
        iVar12 = DAT_08092f70;
        *(short *)(DAT_08092f70 + 2) = sVar10 + *DAT_08092f6c;
        *(short *)(iVar12 + 6) = *DAT_08092f74 - sVar10;
        FUN_080003f0();
        iVar12 = FUN_080021a8();
        if (iVar12 == 1) goto LAB_08092f5e;
      } while (sVar8 != 0);
      local_38 = local_38 + 1 & 0xffff;
    } while (local_38 < local_34);
  }
LAB_08092f5e:
  FUN_0801a7e4(6);
  while (iVar12 = FUN_0801a6dc(), iVar12 == 0) {
    FUN_080003f0();
  }
  FUN_08008b40(0,0,0,0,0,0);
  FUN_080930c4();
  FUN_08059aac(0xf7);
  FUN_08059b00(3);
  FUN_080930fc();
  FUN_0800c568();
  FUN_0800c5b8();
  FUN_0809833c();
  return unaff_lr;
}

