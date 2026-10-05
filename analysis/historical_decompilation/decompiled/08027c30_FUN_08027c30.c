
/* WARNING: Removing unreachable block (ram,0x08027fc8) */

undefined4 FUN_08027c30(short *param_1)

{
  short *psVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  undefined2 *puVar6;
  short sVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ushort *puVar17;
  uint *puVar18;
  int iVar19;
  ushort *puVar20;
  int iVar21;
  int *piVar22;
  uint *puVar23;
  uint uVar24;
  ushort *unaff_r9;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  uint *puVar30;
  undefined4 *puVar31;
  int *piVar32;
  undefined4 *puVar33;
  undefined4 *puVar34;
  uint *puVar35;
  
  iVar10 = DAT_08027cd8;
  iVar5 = DAT_08027c64;
  puVar25 = (undefined4 *)(&stack0xffffffe0 + DAT_08027c64);
  puVar26 = (undefined4 *)(&stack0xffffffe0 + DAT_08027c64);
  puVar27 = (undefined4 *)(&stack0xffffffe0 + DAT_08027c64);
  puVar28 = (undefined4 *)(&stack0xffffffe0 + DAT_08027c64);
  puVar29 = (undefined4 *)(&stack0xffffffe0 + DAT_08027c64);
  puVar30 = (uint *)(&stack0xffffffe0 + DAT_08027c64);
  puVar31 = (undefined4 *)(&stack0xffffffe0 + DAT_08027c64);
  piVar32 = (int *)(&stack0xffffffe0 + DAT_08027c64);
  puVar33 = (undefined4 *)(&stack0xffffffe0 + DAT_08027c64);
  puVar34 = (undefined4 *)(&stack0xffffffe0 + DAT_08027c64);
  puVar35 = (uint *)(&stack0xffffffe0 + DAT_08027c64);
  iVar19 = DAT_08027c64 + -0x20;
  *(undefined4 *)(&stack0x00000210 + DAT_08027c64) = 0;
  *(undefined4 *)(&stack0x00000214 + DAT_08027c64) = 0;
  *(undefined4 *)(&stack0x0000021c + DAT_08027c64) = 0;
  sVar7 = *param_1;
  while (sVar7 != 0) {
    if (*param_1 == 8) {
      unaff_r9 = (ushort *)(param_1 + 2);
      *(uint *)(&stack0x00000210 + DAT_08027c64) = (uint)(ushort)param_1[1];
    }
    else if (*param_1 == 9) {
      *(short **)(&stack0x00000220 + DAT_08027c64) = param_1 + 2;
      *(uint *)(&stack0x00000214 + DAT_08027c64) = (uint)(ushort)param_1[1];
    }
    param_1 = param_1 + 0x92;
    sVar7 = *param_1;
  }
  piVar22 = (int *)(*DAT_08027c68 + DAT_08027cd4);
  iVar21 = 0;
  uVar24 = 0;
  piVar12 = DAT_08027c68;
  if (*(int *)(&stack0x00000210 + DAT_08027c64) != 0) {
    do {
      uVar14 = 0;
      uVar24 = uVar24 + 1;
      *(ushort **)(&stack0x00000228 + iVar5) = unaff_r9 + 0x12;
      do {
        if (unaff_r9[2] != 0) {
          piVar12 = (int *)(*DAT_08027cdc + 0x160 + iVar21 * 8);
          if (*piVar12 == 0) {
            *piVar22 = (uint)*unaff_r9 << 0xb;
            piVar22[1] = (uint)unaff_r9[1] << 0xb;
          }
          else {
            iVar9 = piVar12[1];
            *piVar22 = *piVar12;
            piVar22[1] = iVar9;
          }
          iVar9 = (uint)unaff_r9[2] * 0x194 + DAT_08027d34;
          piVar22[8] = iVar9;
          *(short *)(piVar22 + 4) = *(short *)(iVar9 + 0x174) * 3;
          *(ushort *)((int)piVar22 + 0x16) = unaff_r9[3];
          puVar20 = (ushort *)(iVar9 + 0x17c);
          if (*puVar20 < 2) {
            uVar13 = *(undefined4 *)((uint)*puVar20 * 0x10 + iVar10);
            *puVar26 = 0;
            FUN_08065784(&stack0xfffffff0 + iVar21 * 0x34 + iVar5,uVar13,0xd,0xffffffff);
          }
          else {
            uVar13 = *(undefined4 *)((uint)*puVar20 * 0x10 + iVar10);
            *puVar25 = 0;
            FUN_08065784(&stack0xfffffff0 + iVar21 * 0x34 + iVar5,uVar13,0xd,1);
          }
          *(ushort *)(piVar22 + 5) = (ushort)*(byte *)(*DAT_08027e30 + 0x22c + iVar21);
          puVar20 = (ushort *)(piVar22[8] + 0x17c);
          *(short *)(piVar22 + 2) = (short)*(undefined4 *)((uint)*puVar20 * 0x10 + iVar10 + 4);
          *(undefined2 *)((int)piVar22 + 10) = 0;
          *(undefined2 *)(piVar22 + 3) = 0;
          *(undefined2 *)((int)piVar22 + 0xe) = 0;
          *(undefined2 *)(piVar22 + 6) = 1;
          *(short *)((int)piVar22 + 0x1a) =
               (short)*(undefined4 *)((uint)*puVar20 * 0x10 + iVar10 + 8);
          *(short *)(piVar22 + 7) = (short)*(undefined4 *)((uint)*puVar20 * 0x10 + DAT_08027e34);
          if (*(short *)((int)piVar22 + 0x16) != 0) {
            *(int *)(&stack0x0000021c + iVar5) = *(int *)(&stack0x0000021c + iVar5) + 1;
          }
          piVar22 = piVar22 + 9;
          iVar21 = iVar21 + 1;
          iVar9 = FUN_0800c710();
          if ((iVar9 != 0) && (iVar9 = FUN_08002164(), iVar21 == iVar9)) break;
        }
        unaff_r9 = unaff_r9 + 4;
        uVar14 = uVar14 + 1;
      } while (uVar14 < 4);
      unaff_r9 = *(ushort **)(&stack0x00000228 + iVar5);
      piVar12 = DAT_08027e30;
    } while (uVar24 < *(uint *)(&stack0x00000210 + iVar5));
  }
  iVar10 = DAT_08027e38;
  if (*(int *)(&stack0x00000214 + iVar5) != 0) {
    puVar20 = (ushort *)
              (*(int *)(&stack0x00000220 + iVar5) +
              (*(ushort *)(*piVar12 + 0x34) - 1 & 0xffff) * 0x24);
    *(ushort **)(&stack0x00000220 + iVar5) = puVar20;
    iVar9 = DAT_08027e38 + 0xc;
    do {
      if (puVar20[2] != 0) {
        piVar12 = (int *)(*DAT_08027e30 + 0x160 + iVar21 * 8);
        if (*piVar12 == 0) {
          *piVar22 = (uint)*puVar20 << 0xb;
          piVar22[1] = (uint)puVar20[1] << 0xb;
        }
        else {
          iVar16 = piVar12[1];
          *piVar22 = *piVar12;
          piVar22[1] = iVar16;
        }
        iVar16 = (uint)puVar20[2] * 0x194 + DAT_08027e90;
        piVar22[8] = iVar16;
        *(short *)(piVar22 + 4) = *(short *)(iVar16 + 0x174) * 3;
        *(ushort *)((int)piVar22 + 0x16) = puVar20[3];
        puVar17 = (ushort *)(iVar16 + 0x17c);
        if (*puVar17 < 2) {
          uVar13 = *(undefined4 *)((uint)*puVar17 * 0x10 + iVar10);
          *puVar28 = 0;
          FUN_08065784(&stack0xfffffff0 + iVar21 * 0x34 + iVar5,uVar13,0xd,0xffffffff);
        }
        else {
          uVar13 = *(undefined4 *)((uint)*puVar17 * 0x10 + iVar10);
          *puVar27 = 0;
          FUN_08065784(&stack0xfffffff0 + iVar21 * 0x34 + iVar5,uVar13,0xd,1);
        }
        piVar12 = DAT_08027f80;
        *(ushort *)(piVar22 + 5) = (ushort)*(byte *)(*DAT_08027f80 + 0x22c + iVar21);
        puVar17 = (ushort *)(piVar22[8] + 0x17c);
        *(short *)(piVar22 + 2) = (short)*(undefined4 *)((uint)*puVar17 * 0x10 + iVar10 + 4);
        *(undefined2 *)((int)piVar22 + 10) = 0;
        *(undefined2 *)(piVar22 + 3) = 0;
        *(undefined2 *)((int)piVar22 + 0xe) = 0;
        *(undefined2 *)(piVar22 + 6) = 1;
        *(short *)((int)piVar22 + 0x1a) = (short)*(undefined4 *)((uint)*puVar17 * 0x10 + iVar10 + 8)
        ;
        *(short *)(piVar22 + 7) = (short)*(undefined4 *)((uint)*puVar17 * 0x10 + iVar9);
        if (*(short *)((int)piVar22 + 0x16) != 0) {
          *(int *)(&stack0x0000021c + iVar5) = *(int *)(&stack0x0000021c + iVar5) + 1;
        }
        piVar22 = piVar22 + 9;
        iVar21 = iVar21 + 1;
      }
      puVar20 = puVar20 + 4;
    } while (puVar20 <= (ushort *)(*(int *)(&stack0x00000220 + iVar5) + 0x18));
  }
  iVar10 = *piVar12;
  *(int *)(&stack0x00000218 + iVar5) = iVar21;
  *(int *)(iVar10 + 0x48) = iVar21;
  *(undefined4 *)(iVar10 + DAT_08027f84) = 0;
  iVar21 = DAT_08027f8c;
  iVar10 = DAT_08027f88;
  uVar24 = 0;
  do {
    *(undefined1 *)(*piVar12 + uVar24 * 4 + iVar10) = 0;
    *(undefined2 *)(*piVar12 + uVar24 * 4 + iVar21) = 0;
    uVar24 = uVar24 + 1;
  } while (uVar24 < 4);
  if (*(int *)(&stack0x0000021c + iVar5) != 0) {
    FUN_08058490();
  }
  piVar12 = DAT_08027f80;
  if ((*(ushort *)(*DAT_08027f80 + 4) >> 4 & 1) == 0) {
    iVar10 = *(int *)(&stack0x00000218 + iVar5);
    while (iVar10 != 0) {
      puVar23 = (uint *)(*piVar12 + DAT_08027f90);
      *(undefined4 *)(&stack0x0000020c + iVar5) = 0;
      for (uVar24 = 0; uVar24 < *(uint *)(&stack0x00000218 + iVar5); uVar24 = uVar24 + 1) {
        iVar10 = *piVar12;
        puVar18 = (uint *)(iVar10 + 0x160 + uVar24 * 8);
        uVar14 = puVar23[1];
        *puVar18 = *puVar23;
        puVar18[1] = uVar14;
        *(char *)(iVar10 + 0x22c + uVar24) = (char)(short)puVar23[5];
        uVar3 = (ushort)puVar23[5];
        if (uVar3 == 0) {
          *(short *)(puVar23 + 2) =
               (short)*(undefined4 *)((uint)*(ushort *)(puVar23[8] + 0x17c) * 0x10 + DAT_08028004);
          *(undefined4 *)(&stack0x00000224 + iVar5) = 1;
LAB_08028230:
          uVar14 = puVar23[2];
          *piVar32 = (int)(short)*(undefined4 *)(&stack0x00000224 + iVar5);
          uVar8 = FUN_0806599c(&stack0xfffffff0 + uVar24 * 0x34 + iVar5,(short)uVar14,
                               (int)puVar23 + 10,puVar23 + 3);
          *(undefined2 *)((int)puVar23 + 0xe) = uVar8;
          iVar10 = FUN_0800c5e8();
          if ((((iVar10 == 0) && (iVar10 = FUN_0800c61c(), iVar10 == 0)) &&
              (iVar10 = FUN_0800c6dc(), iVar10 == 0)) && (iVar10 = FUN_0800b3d4(), iVar10 != 0)) {
            if ((short)puVar23[6] != 0) {
              uVar11 = *puVar23;
              uVar15 = puVar23[1];
              uVar8 = *(undefined2 *)((int)puVar23 + 0x1a);
              uVar14 = puVar23[7];
              *puVar33 = 1;
              FUN_0800a9f4((uVar11 & 0xffffff) >> 8,(uVar15 & 0xffffff) >> 8,uVar8,(short)uVar14);
              *(undefined2 *)(puVar23 + 6) = 0;
            }
            if ((*(int *)(&stack0x0000020c + iVar5) == 0) && (5 < *(ushort *)(puVar23[8] + 0x17c)))
            {
              *(undefined4 *)(&stack0x0000020c + iVar5) = 1;
              FUN_08000af0(0x1d,*(int *)(&stack0xfffffffc + uVar24 * 0x34 + iVar5) + 0x1a0);
            }
            else {
              *(undefined4 *)(&stack0x0000020c + iVar5) = 0;
            }
            uVar11 = FUN_0800b5ac((int)*puVar23 >> 8,(int)puVar23[1] >> 8,0);
            uVar14 = *puVar23;
            uVar15 = puVar23[1];
            iVar10 = DAT_08028330 + iVar5;
            *puVar34 = 0x30;
            *(undefined4 *)(&stack0xffffffe4 + iVar5) = 0;
            FUN_0800b570((int)(uVar14 << 8) >> 0x10,(int)(uVar15 << 8) >> 0x10,
                         &stack0x00000208 + iVar5,&stack0xffffffe0 + iVar10);
            sVar7 = *(short *)(&stack0x00000208 + iVar5);
            sVar4 = *(short *)(&stack0xffffffe0 + iVar10);
            uVar14 = puVar23[2];
            uVar8 = *(undefined2 *)((int)puVar23 + 10);
            *puVar35 = uVar11 & 0xff;
            iVar10 = uVar24 * 0x34 + iVar19;
            *(undefined1 **)(&stack0xffffffe4 + iVar5) = &stack0x0000000c + iVar10 + 0x20;
            *(undefined4 *)(&stack0xffffffe8 + iVar5) =
                 *(undefined4 *)(&stack0xfffffff8 + uVar24 * 0x34 + iVar5);
            *(undefined4 *)(&stack0xffffffec + iVar5) =
                 *(undefined4 *)(&stack0xfffffff0 + iVar10 + 0x20);
            FUN_08007378((int)sVar7,(int)sVar4,(short)uVar14,uVar8);
          }
          else {
LAB_08028334:
            *(undefined2 *)(puVar23 + 6) = 1;
          }
        }
        else {
          if (uVar3 == 10) {
            *(short *)(puVar23 + 2) =
                 (short)*(undefined4 *)((uint)*(ushort *)(puVar23[8] + 0x17c) * 0x10 + DAT_0802803c)
                 + 1;
            *(undefined4 *)(&stack0x00000224 + iVar5) = 0;
            if (*(short *)((int)puVar23 + 0xe) != 0) {
              if ((short)puVar23[4] == 0) {
                if (*(short *)((int)puVar23 + 0x16) != 0) {
                  while (iVar10 = FUN_08068bf4(), iVar10 == 0) {
                    FUN_080003f0();
                  }
                  *(ushort *)(*piVar12 + 4) = *(ushort *)(*piVar12 + 4) | 8;
                }
                uVar11 = *puVar23;
                uVar15 = puVar23[1];
                uVar8 = *(undefined2 *)((int)puVar23 + 0x1a);
                uVar14 = puVar23[7];
                *puVar29 = 0;
                FUN_0800a9f4((uVar11 & 0xffffff) >> 8,(uVar15 & 0xffffff) >> 8,uVar8,(short)uVar14);
                *(undefined2 *)(puVar23 + 6) = 0;
                *(undefined2 *)(puVar23 + 5) = 0xc;
                *(undefined2 *)((int)puVar23 + 10) = 0;
                *(undefined2 *)(puVar23 + 3) = 0;
                iVar10 = FUN_0800c61c();
                if (iVar10 == 0) {
                  bVar2 = *(byte *)(puVar23[8] + DAT_0802809c);
                  if (bVar2 == 1) {
                    FUN_08059a8c(0x23);
                  }
                  else if (bVar2 < 2) {
                    if (bVar2 == 0) {
                      FUN_08059a8c(0x22);
                    }
                  }
                  else if (bVar2 == 2) {
                    FUN_08059a8c(0x2b);
                  }
                }
                iVar10 = FUN_08002204();
                if (iVar10 != 0) {
                  if (*(short *)*piVar12 == 0xb) {
                    while (iVar10 = FUN_08066a74(*puVar23,puVar23[1],*piVar12 + 0x5c), iVar10 == 0)
                    {
                      FUN_080003f0();
                    }
                  }
                  else {
                    iVar10 = FUN_0800c780();
                    if (iVar10 == 0) {
                      uVar14 = puVar23[8];
                      uVar11 = (uint)*(ushort *)(uVar14 + 0x184);
                    }
                    else {
                      uVar14 = puVar23[8];
                      uVar11 = *(ushort *)(uVar14 + 0x184) + 0x32;
                    }
                    if (*(short *)(uVar14 + 0x184) == 0) {
                      uVar11 = 0;
                    }
                    psVar1 = (short *)(&stack0x000001f8 + iVar5);
                    iVar10 = FUN_0805cba4(psVar1,uVar11,*(undefined2 *)((int)puVar23 + 0x12));
                    if (iVar10 != 0) {
                      if ((10 < *(ushort *)(DAT_08028138 + 0x8c)) && (*psVar1 == 9)) {
                        *psVar1 = 1;
                        *(undefined2 *)(&stack0x000001fa + iVar5) = 1;
                      }
                      iVar21 = FUN_0800c61c();
                      puVar6 = DAT_08028170;
                      iVar10 = DAT_0802813c;
                      if (iVar21 == 0) {
                        while (iVar10 = FUN_08066b04(*puVar23,puVar23[1],*puVar6,
                                                     &stack0x000001f8 + iVar5), iVar10 == 0) {
                          FUN_080003f0();
                        }
                      }
                      else {
                        while( true ) {
                          uVar14 = *puVar23;
                          uVar11 = puVar23[1];
                          iVar21 = FUN_080020f4();
                          iVar21 = FUN_08066b04(uVar14,uVar11,
                                                *(undefined2 *)(iVar21 * 0x154 + iVar10 + 0x32),
                                                &stack0x000001f8 + iVar5);
                          if (iVar21 != 0) break;
                          FUN_080003f0();
                        }
                      }
                    }
                  }
                }
              }
              else {
                *(undefined2 *)(puVar23 + 5) = *(undefined2 *)(&stack0x00000224 + iVar5);
              }
            }
            goto LAB_08028230;
          }
          if (uVar3 < 10) goto LAB_08028230;
          if (uVar3 != 0xb) {
            if (uVar3 == 0xc) {
              bVar2 = *(byte *)(puVar23[8] + 0x17a);
              if ((bVar2 & 0x80) == 0) {
                *puVar30 = bVar2 & 0x80;
                FUN_08065784(&stack0xfffffff0 + uVar24 * 0x34 + iVar5,DAT_0802820c,0xd,0xffffffff);
                sVar7 = 6;
              }
              else {
                sVar7 = (short)*(undefined4 *)
                                ((uint)*(ushort *)(puVar23[8] + 0x17c) * 0x10 + DAT_080281d4) + 2;
              }
              *(short *)(puVar23 + 2) = sVar7;
              *(undefined4 *)(&stack0x00000224 + iVar5) = 0;
              if (*(short *)((int)puVar23 + 0xe) != 0) {
                *(undefined2 *)(puVar23 + 5) = 0xb;
              }
            }
            goto LAB_08028230;
          }
          if ((short)puVar23[6] == 0) {
            uVar11 = *puVar23;
            uVar15 = puVar23[1];
            uVar8 = *(undefined2 *)((int)puVar23 + 0x1a);
            uVar14 = puVar23[7];
            *puVar31 = 0;
            FUN_0800a9f4((uVar11 & 0xffffff) >> 8,(uVar15 & 0xffffff) >> 8,uVar8,(short)uVar14);
            goto LAB_08028334;
          }
        }
        puVar23 = puVar23 + 9;
      }
      FUN_080669e8();
      *(undefined4 *)(*piVar12 + DAT_080283e0) = 0;
      iVar21 = DAT_080283ec;
      iVar10 = DAT_080283e8;
      piVar22 = DAT_080283e4;
      uVar24 = 0;
      do {
        *(undefined1 *)(*piVar22 + uVar24 * 4 + iVar10) = 0;
        *(undefined2 *)(*piVar22 + uVar24 * 4 + iVar21) = 0;
        uVar24 = uVar24 + 1;
      } while (uVar24 < 4);
      FUN_080003f0();
      if ((*(ushort *)(*piVar12 + 4) >> 4 & 1) != 0) break;
      iVar10 = *(int *)(&stack0x00000218 + iVar5);
    }
  }
  piVar12 = DAT_080283e4;
  uVar24 = 0;
  do {
    *(undefined1 *)(*piVar12 + 0x22c + uVar24) = 0;
    iVar19 = *piVar12;
    *(undefined4 *)(iVar19 + 0x160 + uVar24 * 8) = 0;
    *(undefined4 *)(iVar19 + 0x164 + uVar24 * 8) = 0;
    uVar24 = uVar24 + 1;
  } while (uVar24 < 10);
  FUN_080584a4();
  return *(undefined4 *)(&stack0x00000248 + iVar5);
}

