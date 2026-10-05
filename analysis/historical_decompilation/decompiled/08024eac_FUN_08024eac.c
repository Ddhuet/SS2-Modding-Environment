
/* WARNING: Removing unreachable block (ram,0x0802502c) */
/* WARNING: Removing unreachable block (ram,0x08025038) */

undefined4 FUN_08024eac(void)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
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
  undefined2 in_stack_00000080;
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
  int in_stack_000000bc;
  int in_stack_000000c8;
  int in_stack_000000cc;
  int in_stack_000000d0;
  int in_stack_000000d4;
  int in_stack_000000dc;
  uint in_stack_000000e0;
  undefined4 in_stack_00000100;
  
  uVar2 = *(ushort *)(*DAT_08024ecc + 4);
  while (((uVar2 >> 3 & 1) == 0 && ((uVar2 >> 4 & 1) == 0))) {
    while (iVar4 = FUN_0800c748(), iVar4 != 0) {
      FUN_080003f0();
    }
    iVar4 = FUN_080021a8();
    if (iVar4 != 0) {
      FUN_080256e8();
    }
    iVar4 = FUN_0800c710();
    if (iVar4 != 0) {
      iVar4 = 0;
      in_stack_000000e0 = 0;
      puVar11 = (uint *)(DAT_08024efc + 0x38);
      while (uVar5 = FUN_08002164(), in_stack_000000e0 < uVar5) {
        if ((*puVar11 & 0x2000) != 0) {
          iVar4 = iVar4 + 1;
        }
        puVar11 = puVar11 + 0x55;
        in_stack_000000e0 = in_stack_000000e0 + 1;
      }
      iVar6 = FUN_08002164();
      if (iVar4 == iVar6) {
        *(undefined2 *)(unaff_r8 + 0x26) = 0xc;
        *(undefined2 *)(unaff_r8 + 0x28) = 0;
        uVar8 = FUN_080256e8();
        return uVar8;
      }
    }
    FUN_080003f0();
    uVar2 = *(ushort *)(*DAT_08024f80 + 4);
  }
  in_stack_00000094 = 0x10;
  in_stack_00000098 = 0xc;
  if ((*(ushort *)(*DAT_08024f80 + 4) >> 4 & 1) == 0) {
    iVar4 = FUN_0800c61c();
    if (iVar4 == 0) {
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
        iVar4 = FUN_0800c710();
        if (iVar4 == 0) {
          FUN_08009e48(*(undefined2 *)(DAT_08024fd0 + 0x8c),0,1);
        }
        else {
          FUN_0800c6fc();
          FUN_08009e48(*(undefined2 *)(DAT_08024fbc + 0x8c),0,1);
          FUN_0800c6ec();
        }
      }
    }
    while ((*(ushort *)(*DAT_080255e0 + 4) >> 4 & 1) == 0) {
      while (iVar4 = FUN_0800c748(), iVar4 != 0) {
        FUN_080003f0();
      }
      iVar4 = FUN_080021a8();
      if (iVar4 != 0) {
        uVar8 = FUN_080256e8();
        return uVar8;
      }
      iVar4 = FUN_08002204();
      if (iVar4 != 0) {
        iVar4 = 0;
        iVar6 = 0;
        iVar15 = 0;
        in_stack_000000e0 = 0;
        in_stack_000000d4 = 0;
        piVar14 = DAT_08025008;
        while (uVar5 = FUN_08002164(), in_stack_000000e0 < uVar5) {
          uStack0000007c = *(ushort *)*piVar14 >> 4;
          uStack0000007e = ((ushort *)*piVar14)[1] & 0xfff;
          in_stack_000000dc = DAT_08025074;
          iVar7 = FUN_0800c4ec();
          if (iVar7 == 0) {
            iVar7 = (short)uStack0000007c - in_stack_0000008c;
            if (iVar7 < 0) {
              iVar7 = -iVar7;
            }
            iVar12 = in_stack_000000dc;
            if (iVar7 < in_stack_00000094 + 0x20) {
              iVar7 = (short)uStack0000007e - in_stack_00000090;
              if (iVar7 < 0) {
                iVar7 = -iVar7;
              }
              if ((iVar7 < in_stack_00000098 + 0x20) &&
                 ((*(uint *)(in_stack_000000d4 + in_stack_000000dc + 0x38) & 0x400) != 0))
              goto LAB_08025122;
            }
LAB_08025124:
            if ((*(byte *)(*piVar14 + 4) & 0x20) != 0) {
              iVar15 = iVar15 + 1;
            }
          }
          else {
            iVar7 = FUN_0800c8d0();
            iVar12 = in_stack_000000dc;
            if (iVar7 != 0) {
              if (((int)((uint)*(byte *)(*piVar14 + 7) * 0x8000000) < 0) ||
                 ((*(byte *)(*piVar14 + 4) & 0x3f) == 0)) {
                iVar4 = iVar4 + 1;
              }
              goto LAB_08025124;
            }
            iVar7 = (short)uStack0000007c - in_stack_0000008c;
            if (iVar7 < 0) {
              iVar7 = -iVar7;
            }
            if (iVar7 < in_stack_00000094 + 0x20) {
              iVar7 = (short)uStack0000007e - in_stack_00000090;
              if (iVar7 < 0) {
                iVar7 = -iVar7;
              }
              if (in_stack_00000098 + 0x20 <= iVar7) goto LAB_080250a6;
LAB_080250b8:
              pbVar9 = (byte *)*piVar14;
              if (-1 < (int)((uint)pbVar9[7] * 0x8000000)) {
                if ((pbVar9[4] & 0x20) == 0) goto LAB_08025138;
                if ((*pbVar9 & 0xf) == 0xc) goto LAB_08025124;
              }
LAB_08025122:
              iVar4 = iVar4 + 1;
              goto LAB_08025124;
            }
LAB_080250a6:
            iVar12 = DAT_080250dc;
            if ((*(byte *)(*piVar14 + 4) & 0x20) != 0) goto LAB_080250b8;
          }
LAB_08025138:
          if ((*(uint *)(in_stack_000000d4 + iVar12 + 0x38) & 0x2000) != 0) {
            iVar6 = iVar6 + 1;
          }
          iVar7 = FUN_0800c8d0();
          if (iVar7 != 0) {
            iVar6 = 0;
          }
          in_stack_000000d4 = in_stack_000000d4 + 0x154;
          piVar14 = piVar14 + 0x55;
          in_stack_000000e0 = in_stack_000000e0 + 1;
        }
        iVar7 = FUN_08002164();
        if ((iVar4 == iVar7) && (iVar4 = FUN_08002164(), iVar15 != iVar4)) {
          if ((in_stack_000000a4 == 0) || (in_stack_000000c8 != 0)) {
            if ((iVar15 == 0) && (iVar4 = FUN_08002164(), iVar6 != iVar4)) {
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
        if (2 < in_stack_000000a8) {
          *(uint *)(*DAT_080251cc + 0x40) = (uint)*(ushort *)(in_stack_00000084 + 4);
          while (iVar4 = FUN_08068408(), iVar4 == 0) {
            FUN_080003f0();
          }
          break;
        }
      }
      uStack0000007c = (ushort)((uint)*(undefined4 *)(unaff_r8 + 0x94) >> 8);
      uStack0000007e = (ushort)((uint)*(undefined4 *)(unaff_r8 + 0x98) >> 8);
      iVar4 = FUN_0805a1e4();
      if ((((iVar4 == 0) && (iVar4 = FUN_0800c61c(), iVar4 == 0)) &&
          (iVar4 = FUN_08065cc8(), iVar4 == 0)) && (*(short *)(unaff_r8 + 0x26) != 0xe)) {
        iVar4 = (short)uStack0000007c - in_stack_0000008c;
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        if (in_stack_00000094 <= iVar4) goto LAB_08025394;
        iVar4 = (short)uStack0000007e - in_stack_00000090;
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        if (in_stack_00000098 <= iVar4) goto LAB_08025394;
        iVar4 = FUN_0805da4c(*(undefined4 *)(unaff_r8 + 0x94),*(undefined4 *)(unaff_r8 + 0x98),
                             *(byte *)(*(int *)(unaff_r8 + 0x150) + 4) & 0x3f);
        if (iVar4 == 0) {
          uVar5 = *(ushort *)(unaff_r8 + 0x26) - 2;
          if (uVar5 < 0xd) {
                    /* WARNING: Could not recover jumptable at 0x08025280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar8 = (**(code **)(uVar5 * 4 + DAT_08025284))();
            return uVar8;
          }
          uVar5 = *(uint *)(unaff_r8 + 0x38);
          if ((uVar5 & 0x400) == 0) {
            if (in_stack_000000b0 == 0) {
              *(uint *)(unaff_r8 + 0x38) = uVar5 | 0x800000;
            }
            else {
              *(uint *)(unaff_r8 + 0x38) = uVar5 | 0x1000000;
            }
            iVar4 = FUN_0805fa94();
            if (iVar4 == 0) {
              iVar4 = in_stack_00000088 + 4;
              sVar3 = FUN_0801a1f4(iVar4);
              FUN_08019f30(iVar4,0xf - sVar3,0x12);
            }
            if ((*(ushort *)(unaff_r8 + 0x1a) & 1) != 0) {
              *(uint *)(unaff_r8 + 0x38) = *(uint *)(unaff_r8 + 0x38) | DAT_0802533c;
              FUN_080683b0();
              *(undefined4 *)(unaff_r8 + 0xe0) = 0;
              *(undefined2 *)(unaff_r8 + 0x26) = 0;
              *(undefined2 *)(unaff_r8 + 0x2c) = 0;
              *(undefined2 *)(unaff_r8 + 0x2a) = 0;
              *(undefined2 *)(unaff_r8 + 0xd6) = 0;
            }
            in_stack_000000b4 = 1;
            in_stack_000000ac = 0;
          }
          else {
            *(uint *)(unaff_r8 + 0x38) = uVar5 | 1;
            *(undefined2 *)(unaff_r8 + 0x26) = 0;
            uVar5 = in_stack_000000ac + 1;
            bVar1 = 0x3c < in_stack_000000ac;
            in_stack_000000ac = uVar5;
            if (((bVar1) && (in_stack_000000a8 == 0)) &&
               ((iVar4 = FUN_0805a1e4(), iVar4 == 0 && ((*DAT_08025388 & 2) != 0)))) {
              *(uint *)(unaff_r8 + 0x38) = *(uint *)(unaff_r8 + 0x38) & DAT_0802538c;
              FUN_080587ec(in_stack_000000b0,DAT_08025390);
            }
          }
        }
      }
      else {
LAB_08025394:
        if (in_stack_000000b4 != 0) {
          in_stack_000000b4 = 0;
          FUN_0801a23c(0x12,2);
        }
        if (in_stack_000000b0 == 0) {
          *(uint *)(unaff_r8 + 0x38) = *(uint *)(unaff_r8 + 0x38) & DAT_080254d8;
        }
        else {
          *(uint *)(unaff_r8 + 0x38) = *(uint *)(unaff_r8 + 0x38) & DAT_080253b8;
        }
      }
      FUN_0806599c(&stack0x00000010,in_stack_000000a4,&stack0x00000078,&stack0x0000007a);
      FUN_0806599c(&stack0x00000044,8,&stack0x00000080,&stack0x00000082);
      iVar4 = FUN_0800c684();
      if (((iVar4 == 0) && (iVar4 = FUN_0800c5e8(), iVar4 == 0)) &&
         ((iVar4 = FUN_0800c61c(), iVar4 == 0 && (iVar4 = FUN_0800c6dc(), iVar4 == 0)))) {
        FUN_0800b5ac(in_stack_0000008c,in_stack_00000090,0);
        in_stack_000000d0 = (int)(short)in_stack_0000008c;
        sVar3 = (short)in_stack_00000090;
        FUN_0800b570(in_stack_000000d0,(int)sVar3,&stack0x0000007c,(int)&stack0x0000007c + 2);
        if ((*DAT_080254dc & 1) != 0) {
          FUN_08007378((int)(short)uStack0000007c,(int)(short)uStack0000007e,8,in_stack_00000080);
        }
        if (in_stack_000000bc != 0) {
          FUN_08000af0(0x1e,in_stack_0000001c + in_stack_000000a4 * 0x20,1);
          in_stack_000000bc = 0;
        }
        FUN_0800b5ac(in_stack_0000008c,in_stack_00000090,0);
        FUN_0800b570(in_stack_000000d0,(int)sVar3,&stack0x0000007c,(int)&stack0x0000007c + 2);
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
      FUN_080003f0();
    }
  }
  if ((*(ushort *)(*DAT_080255e0 + 4) >> 3 & 1) != 0) {
    FUN_08059a8c(0x24);
  }
  FUN_0801a23c(0x12,2);
  in_stack_000000a8 = 9;
  sVar3 = (short)in_stack_0000008c;
  do {
    FUN_0806599c(&stack0x00000010,in_stack_000000a4,&stack0x00000078,&stack0x0000007a);
    iVar4 = FUN_0800c5e8();
    if ((iVar4 == 0) && (iVar4 = FUN_0800c61c(), iVar4 == 0)) {
      if (in_stack_000000bc != 0) {
        FUN_08000af0(0x1e,in_stack_0000001c + in_stack_000000a4 * 0x20,1);
        in_stack_000000bc = 0;
      }
      FUN_0800b570((int)sVar3,(int)(short)in_stack_00000090,&stack0x0000007c,
                   (int)&stack0x0000007c + 2);
      FUN_0800b5ac(in_stack_0000008c,in_stack_00000090,0);
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
    FUN_080003f0();
    in_stack_000000a8 = in_stack_000000a8 + -1;
  } while (in_stack_000000a8 != -1);
  if (*(ushort *)(in_stack_00000084 + 6) == 0) {
    *(undefined4 *)(*DAT_080256f8 + 0x44) = 0;
  }
  else {
    *(uint *)(*DAT_08025630 + 0x44) = (uint)(*(ushort *)(in_stack_00000084 + 6) >> 8);
  }
  if (in_stack_000000a4 == 0) {
    iVar6 = FUN_080020f4();
    iVar4 = DAT_080256fc;
    FUN_0801e07c(iVar6 * 0x154 + DAT_080256fc,6);
    iVar6 = FUN_080020f4();
    FUN_0801e07c(iVar6 * 0x154 + iVar4,7);
  }
  *(uint *)(unaff_r8 + 0x38) = *(uint *)(unaff_r8 + 0x38) & DAT_08025700;
  piVar14 = DAT_08025704;
  iVar4 = *DAT_08025704;
  while (iVar4 != 0) {
    FUN_080003f0();
    iVar4 = *piVar14;
  }
  FUN_0800c964();
  piVar14 = DAT_080256f8;
  uVar5 = 0;
  do {
    uVar10 = 0;
    uVar13 = uVar5 + 1;
    do {
      *(undefined1 *)(*piVar14 + 0x1c8 + uVar10 + uVar5 * 5) = 0;
      uVar10 = uVar10 + 1;
    } while (uVar10 < 5);
    uVar5 = uVar13;
  } while (uVar13 < 0x14);
  FUN_080003f0();
  FUN_0801a23c(0x12,2);
  FUN_08058ae8(3);
  return in_stack_00000100;
}

