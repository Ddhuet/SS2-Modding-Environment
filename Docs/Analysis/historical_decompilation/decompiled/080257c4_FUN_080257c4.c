
undefined4 FUN_080257c4(ushort *param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  uint *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  int *piVar15;
  undefined2 *puVar16;
  undefined1 *puVar17;
  int *piVar18;
  int *piVar19;
  undefined1 *puVar20;
  int *piVar21;
  int *piVar22;
  uint uVar23;
  int *piVar24;
  int *piVar25;
  undefined4 unaff_lr;
  undefined4 local_138 [2];
  undefined4 local_130;
  int local_12c;
  undefined1 auStack_11c [5];
  undefined1 local_117;
  undefined1 local_116;
  undefined1 local_115;
  int local_104 [18];
  undefined1 auStack_bc [6];
  undefined1 auStack_b6 [6];
  undefined1 auStack_b0 [8];
  undefined1 local_a8 [6];
  undefined2 local_a2 [3];
  undefined1 local_9c [8];
  undefined2 local_94;
  undefined2 local_92;
  short local_90;
  short local_8e;
  ushort *local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  short *local_64;
  short *local_60;
  undefined1 *local_5c;
  undefined1 *local_58;
  short *local_54;
  short *local_50;
  uint local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  int *local_28;
  int *local_24;
  
  local_80 = (uint)*param_1 << 3;
  local_7c = (uint)param_1[1] << 3;
  local_94 = 0;
  local_92 = 0;
  local_6c = 0;
  local_68 = 0;
  local_8c = param_1;
  local_84 = FUN_08006d98(DAT_08025848);
  iVar3 = FUN_080020f4();
  local_88 = iVar3 * 0x154 + DAT_0802584c;
  FUN_08065784(local_138,DAT_08025850,0xe,0xffffffff,local_68);
  if (*(short *)*DAT_08025854 != 0x15) goto LAB_08025866;
  FUN_08000af0(0x14,local_12c + 0xc0,2);
  local_116 = 4;
  local_115 = 5;
LAB_08025886:
  local_78 = FUN_0800b5ac(local_80,local_7c,0);
  local_78 = local_78 & 0xff;
  local_40 = local_104 + 6;
  piVar11 = local_104;
  piVar5 = local_104 + 0xc;
  piVar22 = local_104 + 9;
  piVar9 = local_104 + 3;
  piVar10 = local_104 + 0xf;
  piVar15 = piVar5;
  piVar19 = piVar22;
  piVar18 = piVar9;
  piVar21 = (int *)0x0;
  piVar24 = piVar10;
  piVar25 = local_40;
  local_48 = piVar11;
  local_44 = piVar9;
  local_3c = piVar22;
  local_38 = piVar5;
  local_34 = piVar10;
  do {
    sVar2 = FUN_0800086c(piVar5,piVar22,piVar9,piVar10);
    iVar8 = (int)sVar2;
    iVar3 = iVar8;
    if (iVar8 < 0) {
      iVar3 = iVar8 + 0x1f;
    }
    *piVar25 = ((iVar8 + (iVar3 >> 5) * -0x20) * 0x10000 >> 0x10) + 0x82;
    uVar4 = FUN_080008c8();
    iVar3 = FUN_080baaf4(uVar4,200);
    *piVar11 = iVar3 + -100;
    uVar4 = FUN_080008c8();
    iVar3 = FUN_080baaf4(uVar4,3);
    *piVar15 = iVar3 + 1;
    sVar2 = FUN_0800086c();
    iVar8 = (int)sVar2;
    iVar3 = iVar8;
    if (iVar8 < 0) {
      iVar3 = iVar8 + 0x1f;
    }
    *piVar19 = ((iVar8 + (iVar3 >> 5) * -0x20) * 0x10000 >> 0x10) + 0x82;
    uVar4 = FUN_080008c8();
    iVar3 = FUN_080baaf4(uVar4,200);
    *piVar18 = iVar3 + -100;
    sVar2 = FUN_0800086c();
    sVar2 = FUN_080ba93c((int)sVar2,3);
    iVar3 = (int)sVar2;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    *piVar24 = iVar3 + 1;
    piVar10 = piVar25 + 1;
    *piVar25 = *piVar25 << 8;
    *piVar19 = *piVar19 << 8;
    piVar19 = piVar19 + 1;
    *piVar15 = *piVar15 << 7;
    piVar15 = piVar15 + 1;
    piVar9 = piVar24 + 1;
    *piVar24 = *piVar24 << 7;
    piVar18 = piVar18 + 1;
    piVar11 = piVar11 + 1;
    piVar5 = (int *)0x1;
    piVar22 = (int *)((int)piVar21 + 1);
    piVar21 = piVar22;
    piVar24 = piVar9;
    piVar25 = piVar10;
  } while (piVar22 < (int *)0x3);
  do {
    if ((*(ushort *)(*DAT_08025a3c + 4) >> 3 & 1) != 0) {
      if (0xe < *(ushort *)(DAT_08025a40 + 0x8c)) {
        FUN_08058ae8(10);
        FUN_08016408();
        FUN_08059ab8(0xd);
      }
      piVar15 = DAT_08025a3c;
      FUN_0805aab4(*(undefined4 *)(*DAT_08025a3c + DAT_08025a44));
      iVar3 = *piVar15;
      break;
    }
    while (iVar3 = FUN_0800c748(), iVar3 != 0) {
      FUN_080003f0();
    }
    iVar3 = FUN_080021a8();
    if (iVar3 != 0) {
      FUN_08026250();
    }
    iVar3 = FUN_0800c4ec();
    if (iVar3 == 0) {
      if ((*(uint *)(local_88 + 0x38) & 0x2000) != 0) {
        FUN_08026250();
      }
    }
    else {
      local_74 = 0;
      puVar12 = (uint *)(DAT_080259c8 + 0x38);
      for (uVar23 = 0; uVar7 = FUN_08002164(), uVar23 < uVar7; uVar23 = uVar23 + 1) {
        if ((*puVar12 & 0x2000) != 0) {
          local_74 = local_74 + 1;
        }
        puVar12 = puVar12 + 0x55;
      }
      iVar3 = FUN_08002164();
      if (local_74 == iVar3) goto LAB_08025858;
    }
    FUN_080003f0();
  } while( true );
LAB_08025f40:
  if ((*(ushort *)(iVar3 + 4) >> 4 & 1) != 0) goto LAB_08025f4e;
  while (iVar3 = FUN_0800c748(), iVar3 != 0) {
    FUN_080003f0();
  }
  iVar3 = FUN_080021a8();
  if (iVar3 != 0) {
    FUN_08026250();
  }
  iVar3 = FUN_0800c5e8();
  if (((iVar3 == 0) && (iVar3 = FUN_0800c6dc(), iVar3 == 0)) && (iVar3 = FUN_0800c61c(), iVar3 == 0)
     ) {
    if (*(short *)*DAT_08025aa0 == 0x15) {
      FUN_08000af0(0x14,local_12c + 0xc0,2);
      local_116 = 4;
      local_115 = 5;
    }
    else {
      FUN_08000af0(0x14,local_12c + 0xa0,3);
      local_117 = 4;
      local_116 = 5;
      local_115 = 6;
    }
  }
  piVar19 = (int *)(local_88 + 0x94);
  iVar3 = *piVar19;
  piVar15 = (int *)(local_88 + 0x98);
  iVar8 = *piVar15;
  iVar6 = FUN_0805a1e4();
  if (((iVar6 == 0) && (iVar6 = FUN_08065cc8(), iVar6 == 0)) && (*(short *)(local_88 + 0x26) != 0xe)
     ) {
    iVar3 = (iVar3 >> 8) - local_80;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (0x17 < iVar3) goto LAB_08025c30;
    iVar3 = (iVar8 >> 8) - local_7c;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (0xf < iVar3) goto LAB_08025c30;
    iVar3 = FUN_0805da4c(*piVar19,*piVar15,*(byte *)(*(int *)(local_88 + 0x150) + 4) & 0x3f);
    if (iVar3 == 0) {
      uVar23 = *(ushort *)(local_88 + 0x26) - 2;
      if (uVar23 < 0xd) {
                    /* WARNING: Could not recover jumptable at 0x08025b46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(uVar23 * 4 + DAT_08025b48))();
        return uVar4;
      }
      if ((*(uint *)(local_88 + 0x38) & 0x400) == 0) {
        *(uint *)(local_88 + 0x38) = *(uint *)(local_88 + 0x38) | 0x800000;
        iVar3 = local_84 + 4;
        sVar2 = FUN_0801a1f4(iVar3);
        FUN_08019f30(iVar3,0xf - sVar2,0x12);
        if ((*(ushort *)(local_88 + 0x1a) & 1) != 0) {
          *(uint *)(local_88 + 0x38) = (*(uint *)(local_88 + 0x38) | DAT_08025be8) & DAT_08025bec;
          FUN_080683b0();
          local_70 = 0;
          *(undefined4 *)(local_88 + 0xe0) = 0;
          *(undefined2 *)(local_88 + 0x2c) = 0;
          *(undefined2 *)(local_88 + 0x2a) = 0;
        }
        local_6c = 1;
      }
      else {
        iVar3 = FUN_0805a1e4();
        if (((iVar3 == 0) &&
            (uVar23 = local_70 + 1, bVar1 = 0x3c < local_70, local_70 = uVar23, bVar1)) &&
           ((*DAT_08025c24 & 2) != 0)) {
          *(uint *)(local_88 + 0x38) = *(uint *)(local_88 + 0x38) & DAT_08025c28;
          FUN_080587ec(0,DAT_08025c2c);
        }
      }
    }
  }
  else {
LAB_08025c30:
    if (local_6c != 0) {
      local_6c = 0;
      FUN_0801a23c(0x12,2);
    }
    *(uint *)(local_88 + 0x38) = *(uint *)(local_88 + 0x38) & DAT_08025c68;
  }
  iVar3 = FUN_08002204();
  if (iVar3 != 0) {
    local_74 = 0;
    piVar15 = (int *)(DAT_08025c6c + 0x150);
    for (uVar23 = 0; uVar7 = FUN_08002164(), uVar23 < uVar7; uVar23 = uVar23 + 1) {
      if ((int)((uint)*(byte *)(*piVar15 + 7) * 0x8000000) < 0) {
        local_74 = local_74 + 1;
      }
      piVar15 = piVar15 + 0x55;
    }
    iVar3 = FUN_08002164();
    if (local_74 == iVar3) {
      local_68 = local_68 + 1 & 0xffff;
    }
    else {
      local_68 = 0;
    }
    if (2 < local_68) {
      *(uint *)(*DAT_08025cc0 + 0x40) = (uint)local_8c[2];
      while (iVar3 = FUN_08068408(), iVar3 == 0) {
        FUN_080003f0();
      }
LAB_08025f4e:
      FUN_08059a8c(0x24);
      local_74 = 1;
      local_58 = auStack_11c;
      do {
        while (iVar3 = FUN_0800c748(), iVar3 != 0) {
          FUN_080003f0();
        }
        iVar3 = FUN_080021a8();
        if (iVar3 != 0) {
          uVar4 = FUN_08026250();
          return uVar4;
        }
        FUN_0806599c(local_138,0,&local_94,&local_92,1);
        uVar23 = 0;
        local_4c = local_74 + 1;
        puVar20 = local_a8;
        local_30 = auStack_b0;
        puVar17 = auStack_b6;
        puVar16 = local_a2;
        puVar13 = auStack_bc;
        local_2c = puVar20;
        do {
          FUN_0806599c(local_138,1,puVar20,puVar13,1);
          FUN_0806599c(local_138,2,puVar16,puVar17,1);
          puVar17 = puVar17 + 2;
          puVar16 = puVar16 + 1;
          puVar13 = puVar13 + 2;
          puVar20 = puVar20 + 2;
          uVar23 = uVar23 + 1;
        } while (uVar23 < 3);
        FUN_0806599c(local_138,3,local_9c,local_30,1);
        iVar3 = FUN_0800c5e8();
        if (((iVar3 == 0) && (iVar3 = FUN_0800c61c(), iVar3 == 0)) &&
           (iVar3 = FUN_0800c6dc(), iVar3 == 0)) {
          FUN_0800b570((int)(short)local_80,(int)(short)local_7c,&local_90,&local_8e,0x30,0);
          if ((*DAT_08026260 & 1) == 0) {
            if (*(short *)*DAT_08026264 != 0x15) {
              FUN_080077f8((int)local_90,(int)local_8e,0,local_94,0,local_58,local_130,local_138[0])
              ;
            }
            FUN_08008978((int)local_90,(int)local_8e,3,*(undefined2 *)(local_2c + 0xc),local_78,
                         auStack_11c,local_130,local_138[0]);
          }
          if (*(short *)*DAT_08026264 != 0x15) {
            uVar23 = 0;
            local_28 = local_3c;
            piVar15 = local_40;
            piVar19 = local_3c;
            piVar18 = local_48;
            piVar21 = local_44;
            local_54 = &local_90;
            local_50 = &local_8e;
            do {
              iVar8 = *piVar15;
              iVar3 = local_38[uVar23];
              *piVar15 = iVar8 - iVar3;
              if (local_7c + (iVar8 - iVar3 >> 8) < -0x40) {
                uVar7 = FUN_080008c8();
                *piVar15 = local_7c + (uVar7 & 0x1f);
                sVar2 = FUN_0800086c();
                sVar2 = FUN_080ba93c((int)sVar2,100);
                *piVar18 = (int)sVar2;
                *piVar15 = *piVar15 << 8;
              }
              iVar8 = *piVar19;
              iVar3 = local_34[uVar23];
              *piVar19 = iVar8 - iVar3;
              if (local_7c + (iVar8 - iVar3 >> 8) < -0x40) {
                uVar7 = FUN_080008c8();
                *piVar19 = local_7c + (uVar7 & 0x1f);
                sVar2 = FUN_0800086c();
                sVar2 = FUN_080ba93c((int)sVar2,100);
                *piVar21 = (int)sVar2;
                *piVar19 = *piVar19 << 8;
              }
              if ((*DAT_08026260 & 1) == 0) {
                FUN_080077f8((int)*local_54 + *piVar18,(int)*local_50 + (*piVar15 >> 8),1,
                             *(undefined2 *)(local_2c + uVar23 * 2),0,local_58,local_130,
                             local_138[0]);
                FUN_080077f8((int)*local_54 + *piVar21,(int)*local_50 + (*local_28 >> 8),2,
                             local_a2[uVar23],0,local_58,local_130,local_138[0]);
              }
              piVar21 = piVar21 + 1;
              piVar15 = piVar15 + 1;
              piVar19 = piVar19 + 1;
              local_28 = local_28 + 1;
              piVar18 = piVar18 + 1;
              uVar23 = uVar23 + 1;
            } while (uVar23 < 3);
          }
        }
        FUN_080003f0();
        uVar23 = local_74;
        piVar15 = DAT_08026264;
        local_74 = local_4c;
      } while (uVar23 < 0x3c);
      uVar23 = 0;
      do {
        uVar7 = 0;
        uVar14 = uVar23 + 1;
        do {
          *(undefined1 *)(*piVar15 + 0x1c8 + uVar7 + uVar23 * 5) = 0;
          uVar7 = uVar7 + 1;
        } while (uVar7 < 5);
        uVar23 = uVar14;
      } while (uVar14 < 0x14);
      *(uint *)(local_88 + 0x38) = *(uint *)(local_88 + 0x38) & DAT_08026268;
      iVar3 = FUN_08058fb8(7);
      if (iVar3 != 0) {
        FUN_08058f2c(0x15);
      }
      FUN_08058fb8(0x15);
      FUN_0805ce60();
      *(undefined2 *)(local_88 + 0x34) = 0;
      FUN_080003f0();
      FUN_0801a23c(0x12,2);
      FUN_08058ae8(3);
      FUN_0800c6fc();
      return unaff_lr;
    }
  }
  FUN_0806599c(local_138,0,&local_94,&local_92,1);
  uVar23 = 0;
  puVar20 = local_a8;
  local_30 = auStack_b0;
  puVar17 = auStack_b6;
  puVar16 = local_a2;
  puVar13 = auStack_bc;
  local_2c = puVar20;
  do {
    FUN_0806599c(local_138,1,puVar20,puVar13,1);
    FUN_0806599c(local_138,2,puVar16,puVar17,1);
    puVar17 = puVar17 + 2;
    puVar16 = puVar16 + 1;
    puVar13 = puVar13 + 2;
    puVar20 = puVar20 + 2;
    uVar23 = uVar23 + 1;
  } while (uVar23 < 3);
  FUN_0806599c(local_138,3,local_9c,local_30,1);
  iVar3 = FUN_0800c5e8();
  if (((iVar3 == 0) && (iVar3 = FUN_0800c61c(), iVar3 == 0)) && (iVar3 = FUN_0800c6dc(), iVar3 == 0)
     ) {
    FUN_0800b570((int)(short)local_80,(int)(short)local_7c,&local_90,&local_8e,0x30,0);
    local_78 = FUN_0800b5ac(local_80,local_7c,0);
    local_78 = local_78 & 0xff;
    if ((*DAT_08025f60 & 1) == 0) {
      if (*(short *)*DAT_08025f64 != 0x15) {
        FUN_080077f8((int)local_90,(int)local_8e,0,local_94,0,auStack_11c,local_130,local_138[0]);
      }
      FUN_08008978((int)local_90,(int)local_8e,3,*(undefined2 *)(local_2c + 0xc),local_78,
                   auStack_11c,local_130,local_138[0]);
    }
    if (*(short *)*DAT_08025f64 != 0x15) {
      uVar23 = 0;
      local_24 = local_3c;
      local_5c = auStack_11c;
      piVar15 = local_40;
      piVar19 = local_3c;
      piVar18 = local_48;
      piVar21 = local_44;
      local_64 = &local_90;
      local_60 = &local_8e;
      do {
        iVar8 = *piVar15;
        iVar3 = local_38[uVar23];
        *piVar15 = iVar8 - iVar3;
        if (local_7c + (iVar8 - iVar3 >> 8) < -0x40) {
          uVar7 = FUN_080008c8();
          *piVar15 = local_7c + (uVar7 & 0x1f);
          sVar2 = FUN_0800086c();
          sVar2 = FUN_080ba93c((int)sVar2,100);
          *piVar18 = (int)sVar2;
          *piVar15 = *piVar15 << 8;
        }
        iVar8 = *piVar19;
        iVar3 = local_34[uVar23];
        *piVar19 = iVar8 - iVar3;
        if (local_7c + (iVar8 - iVar3 >> 8) < -0x40) {
          uVar7 = FUN_080008c8();
          *piVar19 = local_7c + (uVar7 & 0x1f);
          sVar2 = FUN_0800086c();
          sVar2 = FUN_080ba93c((int)sVar2,100);
          *piVar21 = (int)sVar2;
          *piVar19 = *piVar19 << 8;
        }
        if ((*DAT_08025f60 & 1) == 0) {
          FUN_080077f8((int)*local_64 + *piVar18,(int)*local_60 + (*piVar15 >> 8),1,
                       *(undefined2 *)(local_2c + uVar23 * 2),0,local_5c,local_130,local_138[0]);
          FUN_080077f8((int)*local_64 + *piVar21,(int)*local_60 + (*local_24 >> 8),2,
                       local_a2[uVar23],0,local_5c,local_130,local_138[0]);
        }
        piVar21 = piVar21 + 1;
        piVar15 = piVar15 + 1;
        piVar19 = piVar19 + 1;
        local_24 = local_24 + 1;
        piVar18 = piVar18 + 1;
        uVar23 = uVar23 + 1;
      } while (uVar23 < 3);
    }
  }
  FUN_080003f0();
  iVar3 = *DAT_08025f64;
  goto LAB_08025f40;
LAB_08025858:
  *(undefined2 *)(local_88 + 0x26) = 0xc;
  *(undefined2 *)(local_88 + 0x28) = 0;
  FUN_08026250();
LAB_08025866:
  FUN_08000af0(0x14,local_12c + 0xa0,3);
  local_117 = 4;
  local_116 = 5;
  local_115 = 6;
  goto LAB_08025886;
}

