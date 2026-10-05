
/* WARNING: Removing unreachable block (ram,0x08024ba8) */
/* WARNING: Removing unreachable block (ram,0x08024bb4) */

undefined4 FUN_08024696(void)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int unaff_r8;
  int iVar15;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  undefined4 in_stack_00000044;
  undefined4 in_stack_0000004c;
  undefined2 in_stack_00000078;
  ushort uStack0000007c;
  ushort uStack0000007e;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_00000098;
  int in_stack_000000a4;
  uint in_stack_000000a8;
  uint in_stack_000000ac;
  int in_stack_000000b0;
  int in_stack_000000b4;
  uint in_stack_000000b8;
  int in_stack_000000bc;
  int in_stack_000000c0;
  int in_stack_000000c4;
  int in_stack_000000c8;
  int in_stack_000000cc;
  int in_stack_000000d8;
  int in_stack_000000dc;
  uint in_stack_000000e0;
  undefined4 in_stack_00000100;
  
  while (iVar3 = FUN_0800c748(), iVar3 != 0) {
    FUN_080003f0();
  }
  iVar3 = FUN_080021a8();
  if (iVar3 != 0) {
    FUN_080256e8();
  }
  if ((*(ushort *)(*DAT_08024758 + 4) >> 3 & 1) == 0) {
    FUN_0806599c(&stack0x00000010,in_stack_000000a4,&stack0x00000078,&stack0x0000007a);
    iVar3 = FUN_0800c5e8();
    if (((iVar3 == 0) && (iVar3 = FUN_0800c61c(), iVar3 == 0)) &&
       (iVar3 = FUN_0800c6dc(), iVar3 == 0)) {
      if (in_stack_000000bc != 0) {
        FUN_08000af0(0x1e,in_stack_0000001c + in_stack_000000a4 * 0x20,1);
        in_stack_000000bc = 0;
      }
      FUN_0800b5ac(in_stack_0000008c,in_stack_00000090,0);
      FUN_0800b570((int)(short)in_stack_0000008c,(int)(short)in_stack_00000090,&stack0x0000007c,
                   (int)&stack0x0000007c + 2);
      if (*(short *)(in_stack_000000cc + 0xe) == 0) {
        FUN_08007378((int)(short)uStack0000007c,(int)(short)uStack0000007e,in_stack_000000a4,
                     in_stack_00000078);
      }
      else {
        FUN_08008978((int)(short)uStack0000007c,(int)(short)uStack0000007e,in_stack_000000a4,
                     in_stack_00000078);
      }
    }
    else {
      in_stack_000000bc = 1;
    }
    iVar3 = FUN_0800c710();
    if (iVar3 != 0) {
      iVar3 = 0;
      in_stack_000000e0 = 0;
      puVar11 = (uint *)(DAT_08024798 + 0x38);
      while (uVar9 = FUN_08002164(), in_stack_000000e0 < uVar9) {
        if ((*puVar11 & 0x2000) != 0) {
          iVar3 = iVar3 + 1;
        }
        puVar11 = puVar11 + 0x55;
        in_stack_000000e0 = in_stack_000000e0 + 1;
      }
      iVar6 = FUN_08002164();
      if (iVar3 == iVar6) {
        FUN_08025634();
      }
    }
    *DAT_080247d4 = 0;
  }
  else {
    if ((in_stack_000000c0 == 0) && (iVar3 = FUN_0800c61c(), iVar3 == 0)) {
      if (in_stack_000000a4 == 0) {
        if (in_stack_000000c8 == 0) {
          FUN_08059fa8(0x3e,99,0x40);
          FUN_0800c950();
        }
        else {
          FUN_08059a8c(0x3e);
        }
      }
      else {
        FUN_08059a8c(0x5d);
        iVar3 = FUN_0800c710();
        if (iVar3 == 0) {
          FUN_08009e48(*(undefined2 *)(DAT_080248e4 + 0x8c),0,1);
        }
        else {
          FUN_0800c6fc();
          FUN_08009e48(*(undefined2 *)(DAT_08024830 + 0x8c),0,1);
          FUN_0800c6ec();
        }
      }
      in_stack_000000c0 = 1;
    }
    if (in_stack_000000c4 == 0) {
      if (((*DAT_08024a78 == 0) && (*(short *)(DAT_08024a7c + 0x8c) != 0)) &&
         (iVar3 = FUN_0800c61c(), iVar3 == 0)) {
        if (in_stack_000000b8 < 8) {
                    /* WARNING: Could not recover jumptable at 0x08024a76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (**(code **)(in_stack_000000b8 * 4 + DAT_08024a80))();
          return uVar4;
        }
        uVar4 = 1;
        puVar7 = DAT_08024b50;
      }
      else {
        iVar3 = FUN_0800c61c();
        if (iVar3 == 0) goto LAB_08024b62;
        uVar4 = 0;
        puVar7 = DAT_08024b80;
      }
      *puVar7 = uVar4;
    }
    else {
      uStack0000007c = (ushort)((uint)*(undefined4 *)(unaff_r8 + 0x94) >> 8);
      uStack0000007e = (ushort)((uint)*(undefined4 *)(unaff_r8 + 0x98) >> 8);
      iVar3 = FUN_0800c61c();
      if (((iVar3 == 0) && (iVar3 = FUN_08065cc8(), iVar3 == 0)) &&
         (*(short *)(unaff_r8 + 0x26) != 0xe)) {
        iVar3 = (short)uStack0000007c - in_stack_0000008c;
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        if (iVar3 < in_stack_00000094) {
          iVar3 = (short)uStack0000007e - in_stack_00000090;
          if (iVar3 < 0) {
            iVar3 = -iVar3;
          }
          if (iVar3 < in_stack_00000098) {
            iVar3 = FUN_0805da4c(*(undefined4 *)(unaff_r8 + 0x94),*(undefined4 *)(unaff_r8 + 0x98),
                                 *(byte *)(*(int *)(unaff_r8 + 0x150) + 4) & 0x3f);
            if (iVar3 == 0) {
              uVar9 = *(ushort *)(unaff_r8 + 0x26) - 2;
              if (uVar9 < 0xd) {
                    /* WARNING: Could not recover jumptable at 0x080248e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar4 = (**(code **)(uVar9 * 4 + DAT_080248e8))();
                return uVar4;
              }
              uVar9 = *(uint *)(unaff_r8 + 0x38);
              if ((uVar9 & 0x400) == 0) {
                if (in_stack_000000b0 == 0) {
                  *(uint *)(unaff_r8 + 0x38) = uVar9 | 0x800000;
                }
                else {
                  *(uint *)(unaff_r8 + 0x38) = uVar9 | 0x1000000;
                }
                iVar3 = FUN_0805fa94();
                if (iVar3 == 0) {
                  iVar3 = in_stack_00000088 + 4;
                  sVar2 = FUN_0801a1f4(iVar3);
                  FUN_08019f30(iVar3,0xf - sVar2,0x12);
                }
                if ((*(ushort *)(unaff_r8 + 0x1a) & 1) != 0) {
                  uVar9 = *(uint *)(unaff_r8 + 0x38) | DAT_0802498c;
                  *(uint *)(unaff_r8 + 0x38) = uVar9;
                  if (in_stack_000000b0 == 0) {
                    *(uint *)(unaff_r8 + 0x38) = uVar9 & DAT_080249c0;
                  }
                  else {
                    *(uint *)(unaff_r8 + 0x38) = uVar9 & DAT_08024990;
                  }
                  FUN_080683b0();
                  *(undefined4 *)(unaff_r8 + 0xe0) = 0;
                  *(undefined2 *)(unaff_r8 + 0x2c) = 0;
                  *(undefined2 *)(unaff_r8 + 0x2a) = 0;
                  *(undefined2 *)(unaff_r8 + 0xd6) = 0;
                  *(undefined2 *)(unaff_r8 + 0x26) = 0;
                }
                in_stack_000000b4 = 1;
                in_stack_000000ac = 0;
              }
              else {
                uVar9 = in_stack_000000ac + 1;
                bVar1 = 0x3c < in_stack_000000ac;
                in_stack_000000ac = uVar9;
                if (((bVar1) && (iVar3 = FUN_0805a1e4(), iVar3 == 0)) && ((*DAT_08024a00 & 2) != 0))
                {
                  *(uint *)(unaff_r8 + 0x38) = *(uint *)(unaff_r8 + 0x38) & DAT_08024a04;
                  FUN_080587ec(in_stack_000000b0,DAT_08024a08);
                }
              }
            }
            goto LAB_08024b62;
          }
        }
      }
      if (in_stack_000000b4 != 0) {
        in_stack_000000b4 = 0;
        FUN_0801a23c(0x12,2);
      }
      if (in_stack_000000b0 == 0) {
        *(uint *)(unaff_r8 + 0x38) = *(uint *)(unaff_r8 + 0x38) & DAT_08024a44;
      }
      else {
        *(uint *)(unaff_r8 + 0x38) = *(uint *)(unaff_r8 + 0x38) & DAT_08024a34;
      }
    }
LAB_08024b62:
    iVar3 = FUN_08002204();
    if (iVar3 != 0) {
      iVar6 = 0;
      iVar15 = 0;
      iVar3 = 0;
      in_stack_000000e0 = 0;
      in_stack_000000d8 = 0;
      piVar14 = DAT_08024b84;
      while (uVar9 = FUN_08002164(), in_stack_000000e0 < uVar9) {
        uStack0000007c = *(ushort *)*piVar14 >> 4;
        uStack0000007e = ((ushort *)*piVar14)[1] & 0xfff;
        in_stack_000000dc = DAT_08024bf0;
        iVar5 = FUN_0800c4ec();
        if (iVar5 == 0) {
          iVar5 = (short)uStack0000007c - in_stack_0000008c;
          if (iVar5 < 0) {
            iVar5 = -iVar5;
          }
          iVar12 = in_stack_000000dc;
          if (iVar5 < in_stack_00000094 + 0x20) {
            iVar5 = (short)uStack0000007e - in_stack_00000090;
            if (iVar5 < 0) {
              iVar5 = -iVar5;
            }
            if ((iVar5 < in_stack_00000098 + 0x20) &&
               ((*(uint *)(in_stack_000000d8 + in_stack_000000dc + 0x38) & 0x400) != 0))
            goto LAB_08024c9e;
          }
LAB_08024ca0:
          if (((((byte *)*piVar14)[4] & 0x20) != 0) && ((*(byte *)*piVar14 & 0xf) != 0xc)) {
            iVar15 = iVar15 + 1;
          }
        }
        else {
          iVar5 = FUN_0800c8d0();
          iVar12 = in_stack_000000dc;
          if (iVar5 != 0) {
            if (((int)((uint)*(byte *)(*piVar14 + 7) * 0x8000000) < 0) ||
               ((*(byte *)(*piVar14 + 4) & 0x3f) == 0)) {
              iVar3 = iVar3 + 1;
            }
            goto LAB_08024ca0;
          }
          iVar5 = (short)uStack0000007c - in_stack_0000008c;
          if (iVar5 < 0) {
            iVar5 = -iVar5;
          }
          if (iVar5 < in_stack_00000094 + 0x20) {
            iVar5 = (short)uStack0000007e - in_stack_00000090;
            if (iVar5 < 0) {
              iVar5 = -iVar5;
            }
            if (in_stack_00000098 + 0x20 <= iVar5) goto LAB_08024c22;
LAB_08024c34:
            pbVar8 = (byte *)*piVar14;
            if (-1 < (int)((uint)pbVar8[7] * 0x8000000)) {
              if ((pbVar8[4] & 0x20) == 0) goto LAB_08024cbe;
              if ((*pbVar8 & 0xf) == 0xc) goto LAB_08024ca0;
            }
LAB_08024c9e:
            iVar3 = iVar3 + 1;
            goto LAB_08024ca0;
          }
LAB_08024c22:
          iVar12 = DAT_08024c58;
          if ((*(byte *)(*piVar14 + 4) & 0x20) != 0) goto LAB_08024c34;
        }
LAB_08024cbe:
        if ((*(uint *)(in_stack_000000d8 + iVar12 + 0x38) & 0x2000) != 0) {
          iVar6 = iVar6 + 1;
        }
        iVar5 = FUN_0800c8d0();
        if (iVar5 != 0) {
          iVar6 = 0;
        }
        in_stack_000000d8 = in_stack_000000d8 + 0x154;
        piVar14 = piVar14 + 0x55;
        in_stack_000000e0 = in_stack_000000e0 + 1;
      }
      iVar5 = FUN_08002164();
      if ((iVar3 == iVar5) && (iVar3 = FUN_08002164(), iVar15 != iVar3)) {
        if ((in_stack_000000a4 == 0) || (in_stack_000000c8 != 0)) {
          if ((iVar15 == 0) && (iVar3 = FUN_08002164(), iVar6 != iVar3)) {
            in_stack_000000a8 = in_stack_000000a8 + 1;
          }
        }
        else {
          in_stack_000000a8 = in_stack_000000a8 + 1;
        }
      }
      else {
        in_stack_000000a8 = 0;
      }
      piVar14 = DAT_08024d78;
      if (2 < in_stack_000000a8) {
        *(uint *)(*DAT_08024d78 + 0x40) = (uint)*(ushort *)(in_stack_00000084 + 4);
        if (((*(short *)(DAT_08024d7c + 0x8c) == 10) && (*(short *)(DAT_08024d7c + 0x90) == 0x10))
           && (iVar3 = FUN_0800c780(), iVar3 != 0)) {
          *(undefined4 *)(*piVar14 + 0x40) = 0x12;
        }
        while (iVar3 = FUN_08068408(), iVar3 == 0) {
          FUN_080003f0();
        }
        goto LAB_08024e8e;
      }
    }
    uVar9 = in_stack_000000b8;
    FUN_0806599c(&stack0x00000044,in_stack_000000b8,&stack0x00000078,&stack0x0000007a);
    iVar3 = FUN_0800c684();
    if (((iVar3 == 0) && (iVar3 = FUN_0800c5e8(), iVar3 == 0)) &&
       ((iVar3 = FUN_0800c61c(), iVar3 == 0 && (iVar3 = FUN_0800c6dc(), iVar3 == 0)))) {
      FUN_0800b5ac(in_stack_0000008c,in_stack_00000090,0);
      FUN_0800b570((int)(short)in_stack_0000008c,(int)(short)in_stack_00000090,&stack0x0000007c,
                   (int)&stack0x0000007c + 2);
      if ((*DAT_08024e2c & 1) != 0) {
        if (in_stack_000000b8 == 2) {
          FUN_08007378((short)uStack0000007c + 0x10,(int)(short)uStack0000007e,2,in_stack_00000078);
        }
        else {
          if (in_stack_000000b8 == 6) {
            iVar3 = (short)uStack0000007c + -0x10;
            uVar9 = 6;
          }
          else {
            iVar3 = (int)(short)uStack0000007c;
          }
          FUN_08007378(iVar3,(int)(short)uStack0000007e,uVar9,in_stack_00000078);
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
  if (*(ushort *)(in_stack_00000084 + 6) == 0) {
    *(undefined4 *)(*DAT_080256f8 + 0x44) = 0;
  }
  else {
    *(uint *)(*DAT_08025630 + 0x44) = (uint)(*(ushort *)(in_stack_00000084 + 6) >> 8);
  }
  if (in_stack_000000a4 == 0) {
    iVar6 = FUN_080020f4();
    iVar3 = DAT_080256fc;
    FUN_0801e07c(iVar6 * 0x154 + DAT_080256fc,6);
    iVar6 = FUN_080020f4();
    FUN_0801e07c(iVar6 * 0x154 + iVar3,7);
  }
  *(uint *)(unaff_r8 + 0x38) = *(uint *)(unaff_r8 + 0x38) & DAT_08025700;
  piVar14 = DAT_08025704;
  iVar3 = *DAT_08025704;
  while (iVar3 != 0) {
    FUN_080003f0();
    iVar3 = *piVar14;
  }
  FUN_0800c964();
  piVar14 = DAT_080256f8;
  uVar9 = 0;
  do {
    uVar10 = 0;
    uVar13 = uVar9 + 1;
    do {
      *(undefined1 *)(*piVar14 + 0x1c8 + uVar10 + uVar9 * 5) = 0;
      uVar10 = uVar10 + 1;
    } while (uVar10 < 5);
    uVar9 = uVar13;
  } while (uVar13 < 0x14);
  FUN_080003f0();
  FUN_0801a23c(0x12,2);
  FUN_08058ae8(3);
  return in_stack_00000100;
}

