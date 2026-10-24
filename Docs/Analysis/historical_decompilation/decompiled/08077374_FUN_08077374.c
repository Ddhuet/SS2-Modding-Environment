
undefined4 FUN_08077374(undefined4 *param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  ushort *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined2 *puVar19;
  ushort *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  uint *puVar23;
  
  iVar9 = DAT_08077450;
  puVar21 = (undefined4 *)(&stack0xffffffe0 + DAT_08077450);
  puVar22 = (undefined4 *)(&stack0xffffffe0 + DAT_08077450);
  puVar23 = (uint *)(&stack0xffffffe0 + DAT_08077450);
  uVar10 = FUN_080020f4();
  *(uint *)(&stack0x00000200 + iVar9) = uVar10 & 0xffff;
  *puVar21 = 0;
  FUN_08065784(&stack0xfffffff0 + iVar9,DAT_08077454,0,0x80000000);
  *(uint *)(&stack0x000001e0 + iVar9) = (uint)*(ushort *)(param_1 + 2);
  *(undefined4 *)(&stack0x00000208 + iVar9) = *param_1;
  *(undefined4 *)(&stack0x00000204 + iVar9) = param_1[1];
  uVar10 = param_1[5];
  *(uint *)(&stack0x000001ec + iVar9) = (uint)*(ushort *)(param_1 + 5);
  uVar18 = (uint)*(ushort *)((int)param_1 + 0x12);
  *(uint *)(&stack0x0000020c + iVar9) = -(uVar10 & 0x8000) >> 0x1f;
  if (uVar18 != 0) {
    uVar18 = uVar18 - 1;
    *(undefined4 *)(&stack0x000001e0 + iVar9) = 0xff;
  }
  puVar20 = (ushort *)(*(int *)(&stack0x00000208 + iVar9) * 0x154 + DAT_08077458);
  puVar16 = *(ushort **)(puVar20 + 0xa8);
  *(uint *)(&stack0x000001f0 + iVar9) = (uint)(*puVar16 >> 4) << 8;
  *(uint *)(&stack0x000001f4 + iVar9) = (puVar16[1] & 0xfff) << 8;
  *(uint *)(&stack0x000001e4 + iVar9) = (byte)*puVar16 & 0xf;
  *(int *)(&stack0x00000220 + iVar9) = *(int *)(&stack0x00000208 + iVar9) * 4;
  if (*(int *)(&stack0x00000208 + iVar9) == *(int *)(&stack0x00000200 + iVar9)) {
    *(uint *)(&stack0x000001e8 + iVar9) = (uint)puVar20[0x72];
    uVar11 = FUN_0805b314();
    FUN_080babb4(&stack0x00000024 + iVar9,uVar11,0x19c);
    if (*(ushort *)(&stack0x000001b8 + iVar9) == 0) {
      *(ushort *)(&stack0x000001b8 + iVar9) =
           (ushort)*(byte *)(*DAT_0807745c + (uint)*(ushort *)(*DAT_0807745c + 0x70) * 0x10 + 0x7f);
    }
    if (*(int *)(&stack0x000001ec + iVar9) == 0) {
      *(int *)(&stack0x00000210 + iVar9) = (int)(short)puVar20[0x21];
    }
    else {
      *(int *)(&stack0x00000210 + iVar9) = (short)puVar20[0x21] * 3;
    }
  }
  if (3 < *(uint *)(&stack0x000001e0 + iVar9)) {
    uVar10 = 0;
    if ((((*DAT_08077554 & 1) == 0) ||
        (iVar12 = *DAT_08077558, *(int *)(&stack0x000001dc + iVar9) = iVar12,
        *(short *)(iVar12 + 0xc) == 0xb)) ||
       ((uint)*(ushort *)(*(int *)(&stack0x000001dc + iVar9) + 2) !=
        *(uint *)(&stack0x000001e0 + iVar9))) {
      do {
        uVar13 = uVar10 + 1;
        uVar10 = uVar13 & 0xffff;
        if (4 < uVar10) goto LAB_080774dc;
      } while ((((*DAT_08077554 & 1 << (uVar13 & 0xff)) == 0) ||
               (iVar12 = *DAT_08077558 + DAT_0807755c * uVar10,
               *(int *)(&stack0x000001dc + iVar9) = iVar12, *(short *)(iVar12 + 0xc) == 0xb)) ||
              ((uint)*(ushort *)(*(int *)(&stack0x000001dc + iVar9) + 2) !=
               *(uint *)(&stack0x000001e0 + iVar9)));
    }
    if (4 < uVar10) {
LAB_080774dc:
      *(undefined4 *)(&stack0x000001e0 + iVar9) = 0xff;
    }
  }
  if (*(uint *)(&stack0x000001e0 + iVar9) == 0xff) {
    uVar10 = (uint)*(ushort *)
                    ((uint)(*(byte *)(*(int *)(puVar20 + 0xa8) + 3) >> 4) * 2 + DAT_08077614);
    if (uVar18 == 1) {
      uVar10 = uVar10 * 0x10000 + 0x80000;
LAB_0807763a:
      uVar10 = uVar10 >> 0x10;
    }
    else if (uVar18 == 2) {
      uVar10 = uVar10 * 0x10000 + DAT_08077710;
      goto LAB_0807763a;
    }
    if (0x100 < (short)uVar10) {
      uVar10 = (short)uVar10 + DAT_08077714 & 0xffff;
    }
    if (-1 < (short)uVar10) goto LAB_0807765e;
    uVar10 = (int)(short)uVar10 + 0x100;
  }
  else if (*(uint *)(&stack0x000001e0 + iVar9) < 4) {
    piVar14 = (int *)(*(int *)(&stack0x000001e0 + iVar9) * 0x154 + DAT_080775ec + 0x150);
    *(ushort *)(&stack0x000001c0 + iVar9) =
         (*(ushort *)*piVar14 >> 4) - (short)((uint)*(undefined4 *)(&stack0x000001f0 + iVar9) >> 8);
    sVar3 = (*(ushort *)(*piVar14 + 2) & 0xfff) -
            (short)((uint)*(undefined4 *)(&stack0x000001f4 + iVar9) >> 8);
    *(short *)(&stack0x000001c2 + iVar9) = sVar3;
    uVar10 = FUN_080b9a80((int)*(short *)(&stack0x000001c0 + iVar9),(int)sVar3);
    uVar10 = (uVar10 & 0xffff) >> 8;
    if (0x80 < uVar10) {
      uVar10 = uVar10 + DAT_080775f0 & 0xffff;
    }
    if ((short)uVar10 < 0) {
      uVar10 = (int)(short)uVar10 + 0x100U & 0xffff;
    }
    if ((short)uVar10 < 0x101) goto LAB_0807765e;
    uVar10 = (short)uVar10 + DAT_080775f0;
  }
  else {
    *(short *)(&stack0x000001c0 + iVar9) =
         (short)((uint)(*(int *)(*(int *)(&stack0x000001dc + iVar9) + 0x14) -
                       *(int *)(&stack0x000001f0 + iVar9)) >> 8);
    sVar3 = (short)((uint)(*(int *)(*(int *)(&stack0x000001dc + iVar9) + 0x18) -
                          *(int *)(&stack0x000001f4 + iVar9)) >> 8);
    *(short *)(&stack0x000001c2 + iVar9) = sVar3;
    uVar10 = FUN_080b9a80((int)*(short *)(&stack0x000001c0 + iVar9),(int)sVar3);
    uVar10 = (uVar10 & 0xffff) >> 8;
    if (0x80 < uVar10) {
      uVar10 = uVar10 + DAT_08077560 & 0xffff;
    }
    if ((short)uVar10 < 0) {
      uVar10 = (int)(short)uVar10 + 0x100U & 0xffff;
    }
    if ((short)uVar10 < 0x101) goto LAB_0807765e;
    uVar10 = (short)uVar10 + DAT_08077560;
  }
  uVar10 = uVar10 & 0xffff;
LAB_0807765e:
  if (*(int *)(&stack0x000001e0 + iVar9) == 0xff) {
    *(uint *)(&stack0x000001e0 + iVar9) = (uint)*(ushort *)(param_1 + 2);
  }
  iVar12 = (int)(uVar10 << 0x10) >> 0x10;
  *(int *)(&stack0x000001f0 + iVar9) =
       *(int *)(&stack0x000001f0 + iVar9) + *(short *)((iVar12 + 0x40) * 2 + DAT_08077718) * 10;
  *(int *)(&stack0x000001f4 + iVar9) =
       *(int *)(&stack0x000001f4 + iVar9) + *(short *)(iVar12 * 2 + DAT_08077718) * 10;
  uVar1 = puVar20[0x5d];
  *(uint *)(&stack0x0000021c + iVar9) = uVar10 << 0x10;
  while (uVar1 < 2) {
    if (puVar20[0x13] == 10) {
      puVar17 = (uint *)(*(int *)(&stack0x00000220 + iVar9) + DAT_08077630);
      uVar10 = *(uint *)(&stack0x00000204 + iVar9);
      goto LAB_08077c42;
    }
    FUN_080003f0();
    uVar1 = puVar20[0x5d];
  }
  *(undefined4 *)(&stack0x000001f8 + iVar9) = 10;
  if (((puVar20[0x13] != 0xd) && (iVar12 = FUN_0800c61c(), iVar12 == 0)) &&
     (iVar12 = FUN_0800c684(), iVar12 == 0)) {
    FUN_08059a8c(0x1d);
  }
  if (*(int *)(&stack0x00000208 + iVar9) == *(int *)(&stack0x00000200 + iVar9)) {
    FUN_0801fba8((*(int *)(&stack0x00000220 + iVar9) + *(int *)(&stack0x00000208 + iVar9)) * 0x44 +
                 DAT_0807771c);
  }
  *(uint *)(&stack0x000001fc + iVar9) = (uint)(*(byte *)(*(int *)(puVar20 + 0xa6) + 3) >> 4);
  *(undefined1 **)(&stack0x00000214 + iVar9) = &stack0x000001d4 + iVar9;
  *(undefined1 **)(&stack0x00000218 + iVar9) = &stack0x000001d8 + iVar9;
  while ((((iVar12 = *(int *)(&stack0x000001f8 + iVar9),
           *(int *)(&stack0x000001f8 + iVar9) = iVar12 + -1, iVar12 != 0 &&
           (iVar12 = FUN_08058354(), iVar12 == 0)) && (puVar20[0x13] != 0xb)) &&
         ((puVar20[0x13] != 0xc &&
          (iVar12 = FUN_0800ca6c(), uVar18 = DAT_08077764, uVar10 = DAT_08077760, iVar12 == 0))))) {
    bVar8 = false;
    *(undefined4 *)(&stack0x000001c4 + iVar9) = *(undefined4 *)(&stack0x000001f0 + iVar9);
    *(undefined4 *)(&stack0x000001c8 + iVar9) = *(undefined4 *)(&stack0x000001f4 + iVar9);
    **(undefined4 **)(&stack0x00000214 + iVar9) = DAT_08077768;
    if (*(uint *)(&stack0x000001e0 + iVar9) < 4) {
      **(uint **)(&stack0x00000218 + iVar9) =
           (**(uint **)(&stack0x00000218 + iVar9) & uVar10 | 0x10) & uVar18 | 0x100000;
      uVar10 = FUN_08002164();
      uVar18 = 0;
      while ((uVar18 < uVar10 && (iVar12 = FUN_0800c748(), iVar12 == 0))) {
        if ((*(uint *)(&stack0x00000208 + iVar9) != uVar18) &&
           (puVar19 = (undefined2 *)(uVar18 * 0x154 + DAT_08077878),
           *(char *)(puVar19 + 0x38) != (char)puVar20[0x38])) {
          puVar16 = *(ushort **)(puVar19 + 0xa8);
          if ((*puVar16 & 0xf) != 0xe) {
            *(uint *)(&stack0x000001cc + iVar9) = (uint)(*puVar16 >> 4) << 8;
            *(uint *)(&stack0x000001d0 + iVar9) =
                 (*(ushort *)(*(int *)(puVar19 + 0xa8) + 2) & 0xfff) << 8;
            iVar12 = FUN_08021ef0(&stack0x000001c4 + iVar9,&stack0x000001cc + iVar9,
                                  &stack0x000001d4 + iVar9,&stack0x000001d8 + iVar9);
            if (iVar12 != 0) {
              bVar7 = false;
              if (((puVar19[0x13] != 0xb) &&
                  (*(int *)((int)puVar19 + *(int *)(&stack0x00000220 + iVar9) + 0x100) !=
                   *(int *)(&stack0x000001e8 + iVar9))) &&
                 ((*(uint *)(puVar19 + 0x1c) & 0x2000) == 0)) {
                bVar7 = true;
              }
              if (bVar7) {
                iVar12 = FUN_080222b4(*(undefined4 *)(&stack0x00000210 + iVar9),
                                      (int)(short)puVar19[0x21]);
                if (iVar12 == 0) {
                  uVar13 = FUN_0800086c();
                  if ((uVar13 & 1) == 0) {
                    iVar12 = FUN_080020f4();
                    if (*(int *)(&stack0x00000208 + iVar9) == iVar12) {
                      uVar1 = puVar20[0x13];
                      puVar20[0x13] = *(ushort *)(&stack0x000001e4 + iVar9);
                      uVar2 = puVar20[0x16];
                      puVar20[0x16] = *(ushort *)(&stack0x000001ec + iVar9);
                      FUN_0801f584(puVar20,puVar19,&stack0x00000024 + iVar9,1);
                      puVar20[0x13] = uVar1;
                      puVar20[0x16] = uVar2;
                      *(undefined4 *)(puVar19 + (uint)*puVar20 * 2 + 0x80) =
                           *(undefined4 *)(&stack0x000001e8 + iVar9);
                    }
                  }
                  else {
                    iVar12 = FUN_080020f4();
                    if (*(int *)(&stack0x00000208 + iVar9) == iVar12) {
                      FUN_08022304(**(ushort **)(puVar19 + 0xa8) >> 4,
                                   (*(ushort **)(puVar19 + 0xa8))[1] & 0xfff);
                      *(undefined4 *)(puVar19 + (uint)*puVar20 * 2 + 0x80) =
                           *(undefined4 *)(&stack0x000001e8 + iVar9);
                      iVar12 = FUN_0800c61c();
                      if ((iVar12 == 0) && (iVar12 = FUN_0800c684(), iVar12 == 0)) {
                        FUN_08059a8c(0x55);
                      }
                    }
                  }
                }
                else {
                  if (*(int *)(&stack0x0000020c + iVar9) != 0) {
                    (&stack0xffffffe0)[DAT_0807787c + iVar9] =
                         (&stack0xffffffe0)[DAT_0807787c + iVar9] + '\x18';
                    FUN_08022010(*puVar19);
                    *(uint *)(puVar20 + 0x1c) = *(uint *)(puVar20 + 0x1c) | 0x200000;
                  }
                  iVar12 = FUN_080020f4();
                  if (*(int *)(&stack0x00000208 + iVar9) == iVar12) {
                    uVar1 = puVar20[0x13];
                    puVar20[0x13] = *(ushort *)(&stack0x000001e4 + iVar9);
                    uVar2 = puVar20[0x16];
                    puVar20[0x16] = *(ushort *)(&stack0x000001ec + iVar9);
                    FUN_0801f584(puVar20,puVar19,&stack0x00000024 + iVar9,0);
                    puVar20[0x13] = uVar1;
                    puVar20[0x16] = uVar2;
                    *(undefined4 *)(puVar19 + (uint)*puVar20 * 2 + 0x80) =
                         *(undefined4 *)(&stack0x000001e8 + iVar9);
                  }
                  if (*(int *)(&stack0x0000020c + iVar9) != 0) {
                    *(uint *)(puVar20 + 0x1c) = *(uint *)(puVar20 + 0x1c) & DAT_08077880;
                  }
                }
                bVar8 = true;
              }
            }
          }
        }
        uVar18 = uVar18 + 1 & 0xffff;
      }
    }
    else {
      uVar10 = 0;
      while (((uVar10 < 5 && (!bVar8)) && (iVar12 = FUN_0800c748(), iVar12 == 0))) {
        if ((*DAT_08077a5c & 1 << (uVar10 & 0xff)) != 0) {
          iVar12 = *DAT_08077a60 + DAT_08077a64 * uVar10;
          if ((*(char *)(iVar12 + 0x1dc) != (char)puVar20[0x38]) &&
             (*(char *)(iVar12 + 0x1dc) != '\0')) {
            *(ushort *)(&stack0x000001d8 + iVar9) = (ushort)*(byte *)(iVar12 + DAT_08077a68);
            *(ushort *)(&stack0x000001da + iVar9) = (ushort)*(byte *)(iVar12 + DAT_08077a6c);
            iVar15 = FUN_08021ef0(&stack0x000001c4 + iVar9,iVar12 + 0x14,&stack0x000001d4 + iVar9,
                                  &stack0x000001d8 + iVar9);
            if (iVar15 != 0) {
              uVar18 = 0;
              if ((*(short *)(iVar12 + 0xc) != 0xb) &&
                 (*(int *)(iVar12 + 0x54) != *(int *)(&stack0x000001e8 + iVar9))) {
                if (((int)*(short *)(iVar12 + 0x5c) - (uint)*(ushort *)(iVar12 + 0x4a) & 0x8000) ==
                    0) {
                  uVar18 = (int)*(short *)(iVar12 + 0x5c) ^ (uint)*(ushort *)(iVar12 + 0x4a);
                  uVar18 = (-uVar18 | uVar18) >> 0x1f;
                }
              }
              if (uVar18 != 0) {
                iVar15 = FUN_080222b4(*(undefined4 *)(&stack0x00000210 + iVar9),
                                      (int)*(short *)(iVar12 + DAT_08077a70));
                if (iVar15 == 0) {
                  uVar18 = FUN_0800086c();
                  if ((uVar18 & 1) == 0) {
                    uVar1 = puVar20[0x13];
                    puVar20[0x13] = *(ushort *)(&stack0x000001e4 + iVar9);
                    uVar2 = puVar20[0x16];
                    puVar20[0x16] = *(ushort *)(&stack0x000001ec + iVar9);
                    FUN_0801f150(puVar20,iVar12,&stack0x00000024 + iVar9,1);
                    puVar20[0x13] = uVar1;
                    puVar20[0x16] = uVar2;
                    *(undefined2 *)(iVar12 + 0x58) = *(undefined2 *)(&stack0x00000200 + iVar9);
                    *(ushort *)(iVar12 + 0x5a) =
                         (ushort)(1 << (*(uint *)(&stack0x00000200 + iVar9) & 0xff)) |
                         *(ushort *)(iVar12 + 0x5a);
                  }
                  else {
                    FUN_08022304(*(undefined4 *)(iVar12 + 0x14),*(undefined4 *)(iVar12 + 0x18));
                    *(undefined4 *)(iVar12 + 0x54) = *(undefined4 *)(&stack0x000001e8 + iVar9);
                    iVar12 = FUN_0800c61c();
                    if ((iVar12 == 0) && (iVar12 = FUN_0800c684(), iVar12 == 0)) {
                      FUN_08059a8c(0x55);
                    }
                  }
                }
                else {
                  if (*(int *)(&stack0x0000020c + iVar9) != 0) {
                    (&stack0xffffffe0)[DAT_08077a74 + iVar9] =
                         (&stack0xffffffe0)[DAT_08077a74 + iVar9] + '\x18';
                    FUN_08022010(**(ushort **)(&stack0x000001dc + iVar9) + 4);
                    *(uint *)(puVar20 + 0x1c) = *(uint *)(puVar20 + 0x1c) | 0x200000;
                  }
                  if (*(int *)(&stack0x00000208 + iVar9) == *(int *)(&stack0x00000200 + iVar9)) {
                    uVar1 = puVar20[0x13];
                    puVar20[0x13] = *(ushort *)(&stack0x000001e4 + iVar9);
                    uVar2 = puVar20[0x16];
                    puVar20[0x16] = *(ushort *)(&stack0x000001ec + iVar9);
                    FUN_0801f150(puVar20,iVar12,&stack0x00000024 + iVar9,0);
                    puVar20[0x13] = uVar1;
                    puVar20[0x16] = uVar2;
                    *(undefined2 *)(iVar12 + 0x58) = *(undefined2 *)(&stack0x00000208 + iVar9);
                    *(ushort *)(iVar12 + 0x5a) =
                         (ushort)(1 << (*(uint *)(&stack0x00000208 + iVar9) & 0xff)) |
                         *(ushort *)(iVar12 + 0x5a);
                  }
                  if (*(int *)(&stack0x0000020c + iVar9) != 0) {
                    *(uint *)(puVar20 + 0x1c) = *(uint *)(puVar20 + 0x1c) & DAT_08077a78;
                  }
                }
                bVar8 = true;
              }
            }
          }
        }
        uVar10 = uVar10 + 1 & 0xffff;
      }
    }
    if ((*(int *)(&stack0x00000208 + iVar9) == *(int *)(&stack0x00000200 + iVar9)) &&
       (iVar12 = FUN_0801f78c(&stack0x000001c4 + iVar9,&stack0x000001d4 + iVar9), iVar12 != 0)) {
      bVar8 = true;
    }
    if ((bVar8) ||
       ((uVar10 = FUN_0800a950(*(undefined4 *)(&stack0x000001f0 + iVar9),
                               *(undefined4 *)(&stack0x000001f4 + iVar9),0), (uVar10 & 0xf) != 0 &&
        ((uVar10 & 0x10) == 0)))) break;
    iVar15 = *(int *)(&stack0x000001f0 + iVar9) +
             *(short *)(((*(int *)(&stack0x0000021c + iVar9) >> 0x10) + 0x40) * 2 + DAT_08077c5c) *
             5;
    *(int *)(&stack0x000001f0 + iVar9) = iVar15;
    *(int *)(&stack0x000001f4 + iVar9) =
         *(int *)(&stack0x000001f4 + iVar9) +
         *(short *)((*(int *)(&stack0x0000021c + iVar9) >> 0x10) * 2 + DAT_08077c5c) * 5;
    iVar12 = FUN_0800c5e8();
    if (((iVar12 == 0) && (iVar12 = FUN_0800c6dc(), iVar12 == 0)) &&
       (iVar12 = FUN_0800c61c(), iVar12 == 0)) {
      iVar12 = *(int *)(&stack0x000001f4 + iVar9);
      *puVar22 = 0x30;
      *(undefined4 *)(&stack0xffffffe4 + iVar9) = 0;
      FUN_0800b570((int)(short)((uint)iVar15 >> 8),(int)(short)((uint)iVar12 >> 8),
                   &stack0x000001c0 + iVar9,&stack0x000001c2 + iVar9);
      uVar10 = FUN_0800b5ac(iVar15 >> 8,iVar12 >> 8,0);
      uVar10 = uVar10 & 0xff;
      uVar18 = *(uint *)(&stack0x000001fc + iVar9);
      if ((*(short *)(DAT_08077c60 + 0x8c) == 4) && (iVar12 = FUN_0800c710(), iVar12 != 0)) {
        uVar10 = 0;
      }
      sVar3 = *(short *)(&stack0x000001c0 + iVar9);
      iVar12 = (int)(uVar18 << 0x10) >> 0xe;
      sVar4 = *(short *)(iVar12 + DAT_08077c64);
      sVar5 = *(short *)(&stack0x000001c2 + iVar9);
      sVar6 = *(short *)(iVar12 + DAT_08077c64 + 2);
      *puVar23 = uVar10;
      *(undefined1 **)(&stack0xffffffe4 + iVar9) = &stack0x0000000c + iVar9;
      *(undefined4 *)(&stack0xffffffe8 + iVar9) = *(undefined4 *)(&stack0xfffffff8 + iVar9);
      *(undefined4 *)(&stack0xffffffec + iVar9) = *(undefined4 *)(&stack0xfffffff0 + iVar9);
      FUN_08007378((int)sVar3 + (int)sVar4,(int)sVar5 + (int)sVar6,uVar18 & 0xffff,0);
    }
    FUN_080003f0();
  }
  puVar17 = (uint *)(*(int *)(&stack0x00000220 + iVar9) + DAT_08077c68);
  uVar10 = *(uint *)(&stack0x00000204 + iVar9);
LAB_08077c42:
  *puVar17 = *puVar17 & ~(1 << (uVar10 & 0xff));
  return *(undefined4 *)(&stack0x00000240 + iVar9);
}

