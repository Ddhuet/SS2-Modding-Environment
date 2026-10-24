
/* WARNING: Removing unreachable block (ram,0x08024ba8) */
/* WARNING: Removing unreachable block (ram,0x08024bb4) */

undefined4 FUN_080244ec(ushort *param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  undefined4 unaff_lr;
  bool bVar18;
  undefined4 auStack_f4 [2];
  undefined4 uStack_ec;
  int iStack_e8;
  undefined1 auStack_d8 [24];
  undefined4 auStack_c0 [2];
  undefined4 uStack_b8;
  undefined1 auStack_a4 [24];
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  ushort uStack_88;
  ushort auStack_86 [3];
  ushort *puStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  int iStack_54;
  int iStack_50;
  uint uStack_4c;
  int iStack_48;
  int iStack_44;
  uint uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_2c;
  int iStack_28;
  uint uStack_24;
  
  puStack_80 = param_1;
  iVar4 = FUN_0800048c();
  iStack_54 = ((iVar4 + DAT_0802455c) - *DAT_08024560) * -0x33333333 >> 3;
  iStack_38 = *(int *)(DAT_08024564 + 0xb0);
  iStack_78 = (uint)*puStack_80 << 3;
  iStack_74 = (uint)puStack_80[1] << 3;
  uVar1 = puStack_80[3];
  bVar18 = (uVar1 & 0x80) == 0;
  if (bVar18) {
    uStack_4c = uVar1 >> 4 & 7;
    iStack_68 = iStack_78;
    iStack_64 = iStack_74;
  }
  else {
    uStack_4c = 8;
  }
  uStack_40 = (uint)!bVar18;
  iStack_3c = -((int)-(uVar1 & 4) >> 0x1f);
  uStack_60 = uVar1 & 3;
  uStack_8c = 0;
  uStack_8a = 0;
  iStack_50 = 0;
  iStack_48 = 1;
  uStack_5c = 0;
  iStack_44 = 0;
  *DAT_080245d0 = 0;
  if ((iStack_3c == 0) && ((uVar1 & 3) != 0)) {
    FUN_08065784(auStack_c0,DAT_080245d4,0xc,0xffffffff,0);
  }
  else {
    FUN_08065784(auStack_c0,DAT_0802465c,0xc,0xffffffff,0);
  }
  iStack_7c = FUN_08006d98(DAT_08024660);
  iVar4 = FUN_080020f4();
  iVar8 = iVar4 * 0x154 + DAT_08024664;
  FUN_08065784(auStack_f4,*(undefined4 *)((uint)*(ushort *)*DAT_0802466c * 4 + DAT_08024668),0xe,
               0xffffffff,0);
  iVar4 = FUN_0800c61c();
  if (iVar4 == 0) {
    FUN_08000af0(0x1e,iStack_e8 + uStack_60 * 0x20,1);
  }
  auStack_d8[uStack_60] = 0xe;
  iVar4 = FUN_0800c8d0();
  if (iVar4 == 0) {
    iStack_70 = 0x18;
    iStack_6c = 0x10;
  }
  else {
    iStack_70 = 0xf0;
    iStack_6c = 0x10;
  }
  while (iVar4 = FUN_0800b3d4(), iVar4 == 0) {
    FUN_080003f0();
  }
  if ((uVar1 & 8) != 0) {
    FUN_08024eac();
  }
  FUN_08024e7a();
  do {
    FUN_080003f0();
    iVar4 = FUN_0800c748();
  } while (iVar4 != 0);
  iVar4 = FUN_080021a8();
  if (iVar4 != 0) {
    FUN_080256e8();
  }
  if ((*(ushort *)(*DAT_08024758 + 4) >> 3 & 1) == 0) {
    FUN_0806599c(auStack_f4,uStack_60,&uStack_8c,&uStack_8a,1);
    iVar4 = FUN_0800c5e8();
    if (((iVar4 == 0) && (iVar4 = FUN_0800c61c(), iVar4 == 0)) &&
       (iVar4 = FUN_0800c6dc(), iVar4 == 0)) {
      if (iStack_48 != 0) {
        FUN_08000af0(0x1e,iStack_e8 + uStack_60 * 0x20,1);
        iStack_48 = 0;
      }
      uVar2 = FUN_0800b5ac(iStack_78,iStack_74,0);
      FUN_0800b570((int)(short)iStack_78,(int)(short)iStack_74,&uStack_88,auStack_86,0x30,0);
      if (*(short *)(iStack_38 + 0xe) == 0) {
        FUN_08007378((int)(short)uStack_88,(int)(short)auStack_86[0],uStack_60,uStack_8c,uVar2,
                     auStack_d8,uStack_ec,auStack_f4[0]);
      }
      else {
        FUN_08008978((int)(short)uStack_88,(int)(short)auStack_86[0],uStack_60,uStack_8c,uVar2,
                     auStack_d8,uStack_ec,auStack_f4[0]);
      }
    }
    else {
      iStack_48 = 1;
    }
    iVar4 = FUN_0800c710();
    if (iVar4 != 0) {
      iVar4 = 0;
      uStack_24 = 0;
      puVar13 = (uint *)(DAT_08024798 + 0x38);
      while (uVar11 = FUN_08002164(), uStack_24 < uVar11) {
        if ((*puVar13 & 0x2000) != 0) {
          iVar4 = iVar4 + 1;
        }
        puVar13 = puVar13 + 0x55;
        uStack_24 = uStack_24 + 1;
      }
      iVar7 = FUN_08002164();
      if (iVar4 == iVar7) {
        FUN_08025634();
      }
    }
    *DAT_080247d4 = 0;
  }
  else {
    if ((iStack_44 == 0) && (iVar4 = FUN_0800c61c(), iVar4 == 0)) {
      if (uStack_60 == 0) {
        if (iStack_3c == 0) {
          FUN_08059fa8(0x3e,99,0x40);
          FUN_0800c950();
        }
        else {
          FUN_08059a8c(0x3e);
        }
      }
      else {
        FUN_08059a8c(0x5d);
        iVar4 = FUN_0800c710();
        if (iVar4 == 0) {
          FUN_08009e48(*(undefined2 *)(DAT_080248e4 + 0x8c),0,1);
        }
        else {
          FUN_0800c6fc();
          FUN_08009e48(*(undefined2 *)(DAT_08024830 + 0x8c),0,1);
          FUN_0800c6ec();
        }
      }
      iStack_44 = 1;
    }
    if (uStack_40 == 0) {
      if (((*DAT_08024a78 == 0) && (*(short *)(DAT_08024a7c + 0x8c) != 0)) &&
         (iVar4 = FUN_0800c61c(), iVar4 == 0)) {
        if (uStack_4c < 8) {
                    /* WARNING: Could not recover jumptable at 0x08024a76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (**(code **)(uStack_4c * 4 + DAT_08024a80))();
          return uVar5;
        }
        uVar5 = 1;
        puVar9 = DAT_08024b50;
      }
      else {
        iVar4 = FUN_0800c61c();
        if (iVar4 == 0) goto LAB_08024b62;
        uVar5 = 0;
        puVar9 = DAT_08024b80;
      }
      *puVar9 = uVar5;
    }
    else {
      uStack_88 = (ushort)((uint)*(undefined4 *)(iVar8 + 0x94) >> 8);
      auStack_86[0] = (ushort)((uint)*(undefined4 *)(iVar8 + 0x98) >> 8);
      iVar4 = FUN_0800c61c();
      if (((iVar4 == 0) && (iVar4 = FUN_08065cc8(), iVar4 == 0)) &&
         (*(short *)(iVar8 + 0x26) != 0xe)) {
        iVar4 = (short)uStack_88 - iStack_78;
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        if (iVar4 < iStack_70) {
          iVar4 = (short)auStack_86[0] - iStack_74;
          if (iVar4 < 0) {
            iVar4 = -iVar4;
          }
          if (iVar4 < iStack_6c) {
            iVar4 = FUN_0805da4c(*(undefined4 *)(iVar8 + 0x94),*(undefined4 *)(iVar8 + 0x98),
                                 *(byte *)(*(int *)(iVar8 + 0x150) + 4) & 0x3f);
            if (iVar4 == 0) {
              uVar11 = *(ushort *)(iVar8 + 0x26) - 2;
              if (uVar11 < 0xd) {
                    /* WARNING: Could not recover jumptable at 0x080248e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar5 = (**(code **)(uVar11 * 4 + DAT_080248e8))();
                return uVar5;
              }
              uVar11 = *(uint *)(iVar8 + 0x38);
              if ((uVar11 & 0x400) == 0) {
                if (iStack_54 == 0) {
                  *(uint *)(iVar8 + 0x38) = uVar11 | 0x800000;
                }
                else {
                  *(uint *)(iVar8 + 0x38) = uVar11 | 0x1000000;
                }
                iVar4 = FUN_0805fa94();
                if (iVar4 == 0) {
                  iVar4 = iStack_7c + 4;
                  sVar3 = FUN_0801a1f4(iVar4);
                  FUN_08019f30(iVar4,0xf - sVar3,0x12);
                }
                if ((*(ushort *)(iVar8 + 0x1a) & 1) != 0) {
                  uVar11 = *(uint *)(iVar8 + 0x38) | DAT_0802498c;
                  *(uint *)(iVar8 + 0x38) = uVar11;
                  if (iStack_54 == 0) {
                    *(uint *)(iVar8 + 0x38) = uVar11 & DAT_080249c0;
                  }
                  else {
                    *(uint *)(iVar8 + 0x38) = uVar11 & DAT_08024990;
                  }
                  FUN_080683b0();
                  *(undefined4 *)(iVar8 + 0xe0) = 0;
                  *(undefined2 *)(iVar8 + 0x2c) = 0;
                  *(undefined2 *)(iVar8 + 0x2a) = 0;
                  *(undefined2 *)(iVar8 + 0xd6) = 0;
                  *(undefined2 *)(iVar8 + 0x26) = 0;
                }
                iStack_50 = 1;
                uStack_58 = 0;
              }
              else {
                uVar11 = uStack_58 + 1;
                bVar18 = 0x3c < uStack_58;
                uStack_58 = uVar11;
                if (((bVar18) && (iVar4 = FUN_0805a1e4(), iVar4 == 0)) && ((*DAT_08024a00 & 2) != 0)
                   ) {
                  *(uint *)(iVar8 + 0x38) = *(uint *)(iVar8 + 0x38) & DAT_08024a04;
                  FUN_080587ec(iStack_54,DAT_08024a08);
                }
              }
            }
            goto LAB_08024b62;
          }
        }
      }
      if (iStack_50 != 0) {
        iStack_50 = 0;
        FUN_0801a23c(0x12,2);
      }
      if (iStack_54 == 0) {
        *(uint *)(iVar8 + 0x38) = *(uint *)(iVar8 + 0x38) & DAT_08024a44;
      }
      else {
        *(uint *)(iVar8 + 0x38) = *(uint *)(iVar8 + 0x38) & DAT_08024a34;
      }
    }
LAB_08024b62:
    iVar4 = FUN_08002204();
    if (iVar4 != 0) {
      iVar7 = 0;
      iVar17 = 0;
      iVar4 = 0;
      uStack_24 = 0;
      iStack_2c = 0;
      piVar16 = DAT_08024b84;
      while (uVar11 = FUN_08002164(), uStack_24 < uVar11) {
        uStack_88 = *(ushort *)*piVar16 >> 4;
        auStack_86[0] = ((ushort *)*piVar16)[1] & 0xfff;
        iStack_28 = DAT_08024bf0;
        iVar6 = FUN_0800c4ec();
        if (iVar6 == 0) {
          iVar6 = (short)uStack_88 - iStack_78;
          if (iVar6 < 0) {
            iVar6 = -iVar6;
          }
          iVar14 = iStack_28;
          if (iVar6 < iStack_70 + 0x20) {
            iVar6 = (short)auStack_86[0] - iStack_74;
            if (iVar6 < 0) {
              iVar6 = -iVar6;
            }
            if ((iVar6 < iStack_6c + 0x20) &&
               ((*(uint *)(iStack_2c + iStack_28 + 0x38) & 0x400) != 0)) goto LAB_08024c9e;
          }
LAB_08024ca0:
          if (((((byte *)*piVar16)[4] & 0x20) != 0) && ((*(byte *)*piVar16 & 0xf) != 0xc)) {
            iVar17 = iVar17 + 1;
          }
        }
        else {
          iVar6 = FUN_0800c8d0();
          iVar14 = iStack_28;
          if (iVar6 != 0) {
            if (((int)((uint)*(byte *)(*piVar16 + 7) * 0x8000000) < 0) ||
               ((*(byte *)(*piVar16 + 4) & 0x3f) == 0)) {
              iVar4 = iVar4 + 1;
            }
            goto LAB_08024ca0;
          }
          iVar6 = (short)uStack_88 - iStack_78;
          if (iVar6 < 0) {
            iVar6 = -iVar6;
          }
          if (iVar6 < iStack_70 + 0x20) {
            iVar6 = (short)auStack_86[0] - iStack_74;
            if (iVar6 < 0) {
              iVar6 = -iVar6;
            }
            if (iStack_6c + 0x20 <= iVar6) goto LAB_08024c22;
LAB_08024c34:
            pbVar10 = (byte *)*piVar16;
            if (-1 < (int)((uint)pbVar10[7] * 0x8000000)) {
              if ((pbVar10[4] & 0x20) == 0) goto LAB_08024cbe;
              if ((*pbVar10 & 0xf) == 0xc) goto LAB_08024ca0;
            }
LAB_08024c9e:
            iVar4 = iVar4 + 1;
            goto LAB_08024ca0;
          }
LAB_08024c22:
          iVar14 = DAT_08024c58;
          if ((*(byte *)(*piVar16 + 4) & 0x20) != 0) goto LAB_08024c34;
        }
LAB_08024cbe:
        if ((*(uint *)(iStack_2c + iVar14 + 0x38) & 0x2000) != 0) {
          iVar7 = iVar7 + 1;
        }
        iVar6 = FUN_0800c8d0();
        if (iVar6 != 0) {
          iVar7 = 0;
        }
        iStack_2c = iStack_2c + 0x154;
        piVar16 = piVar16 + 0x55;
        uStack_24 = uStack_24 + 1;
      }
      iVar6 = FUN_08002164();
      if ((iVar4 == iVar6) && (iVar4 = FUN_08002164(), iVar17 != iVar4)) {
        if ((uStack_60 == 0) || (iStack_3c != 0)) {
          if ((iVar17 == 0) && (iVar4 = FUN_08002164(), iVar7 != iVar4)) {
            uStack_5c = uStack_5c + 1;
          }
        }
        else {
          uStack_5c = uStack_5c + 1;
        }
      }
      else {
        uStack_5c = 0;
      }
      piVar16 = DAT_08024d78;
      if (2 < uStack_5c) {
        *(uint *)(*DAT_08024d78 + 0x40) = (uint)puStack_80[2];
        if (((*(short *)(DAT_08024d7c + 0x8c) == 10) && (*(short *)(DAT_08024d7c + 0x90) == 0x10))
           && (iVar4 = FUN_0800c780(), iVar4 != 0)) {
          *(undefined4 *)(*piVar16 + 0x40) = 0x12;
        }
        while (iVar4 = FUN_08068408(), iVar4 == 0) {
          FUN_080003f0();
        }
        goto LAB_08024e8e;
      }
    }
    uVar11 = uStack_4c;
    FUN_0806599c(auStack_c0,uStack_4c,&uStack_8c,&uStack_8a,1);
    iVar4 = FUN_0800c684();
    if (((iVar4 == 0) && (iVar4 = FUN_0800c5e8(), iVar4 == 0)) &&
       ((iVar4 = FUN_0800c61c(), iVar4 == 0 && (iVar4 = FUN_0800c6dc(), iVar4 == 0)))) {
      uVar2 = FUN_0800b5ac(iStack_78,iStack_74,0);
      FUN_0800b570((int)(short)iStack_78,(int)(short)iStack_74,&uStack_88,auStack_86,0x30,0);
      if ((*DAT_08024e2c & 1) != 0) {
        if (uStack_4c == 2) {
          FUN_08007378((short)uStack_88 + 0x10,(int)(short)auStack_86[0],2,uStack_8c,uVar2,
                       auStack_a4,uStack_b8,auStack_c0[0]);
        }
        else {
          if (uStack_4c == 6) {
            iVar4 = (short)uStack_88 + -0x10;
            uVar11 = 6;
          }
          else {
            iVar4 = (int)(short)uStack_88;
          }
          FUN_08007378(iVar4,(int)(short)auStack_86[0],uVar11,uStack_8c,uVar2,auStack_a4,uStack_b8,
                       auStack_c0[0]);
        }
      }
    }
  }
  FUN_080003f0();
  if ((*(ushort *)(*DAT_08024ea8 + 4) >> 4 & 1) == 0) {
    FUN_08024696();
  }
LAB_08024e8e:
  if ((*(ushort *)(*DAT_08024ea8 + 4) >> 3 & 1) != 0) {
    FUN_08059a8c(0x24);
  }
  if (puStack_80[3] == 0) {
    *(undefined4 *)(*DAT_080256f8 + 0x44) = 0;
  }
  else {
    *(uint *)(*DAT_08025630 + 0x44) = (uint)(puStack_80[3] >> 8);
  }
  if (uStack_60 == 0) {
    iVar7 = FUN_080020f4();
    iVar4 = DAT_080256fc;
    FUN_0801e07c(iVar7 * 0x154 + DAT_080256fc,6);
    iVar7 = FUN_080020f4();
    FUN_0801e07c(iVar7 * 0x154 + iVar4,7);
  }
  *(uint *)(iVar8 + 0x38) = *(uint *)(iVar8 + 0x38) & DAT_08025700;
  piVar16 = DAT_08025704;
  iVar4 = *DAT_08025704;
  while (iVar4 != 0) {
    FUN_080003f0();
    iVar4 = *piVar16;
  }
  FUN_0800c964();
  piVar16 = DAT_080256f8;
  uVar11 = 0;
  do {
    uVar12 = 0;
    uVar15 = uVar11 + 1;
    do {
      *(undefined1 *)(*piVar16 + 0x1c8 + uVar12 + uVar11 * 5) = 0;
      uVar12 = uVar12 + 1;
    } while (uVar12 < 5);
    uVar11 = uVar15;
  } while (uVar15 < 0x14);
  FUN_080003f0();
  FUN_0801a23c(0x12,2);
  FUN_08058ae8(3);
  return unaff_lr;
}

