
void FUN_0807093c(void)

{
  bool bVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined2 *puVar12;
  ushort *puVar13;
  uint unaff_r10;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined2 uStack00000044;
  undefined2 uStack00000046;
  short sStack00000048;
  short sStack0000004a;
  int in_stack_0000004c;
  undefined2 *in_stack_00000050;
  int in_stack_00000054;
  short *in_stack_00000058;
  int in_stack_0000005c;
  uint in_stack_00000060;
  int in_stack_00000064;
  uint in_stack_00000068;
  int in_stack_0000006c;
  uint in_stack_00000070;
  uint in_stack_00000074;
  uint in_stack_00000078;
  uint in_stack_0000007c;
  int in_stack_00000080;
  uint in_stack_00000084;
  uint in_stack_00000088;
  uint uStack0000008c;
  int iStack00000090;
  uint *puStack00000094;
  short *in_stack_00000098;
  int in_stack_0000009c;
  uint in_stack_000000a0;
  int in_stack_000000a4;
  undefined4 *in_stack_000000a8;
  uint *in_stack_000000ac;
  uint in_stack_000000b0;
  int in_stack_000000b4;
  int in_stack_000000b8;
  undefined4 in_stack_000000bc;
  code *UNRECOVERED_JUMPTABLE;
  
  uStack0000008c = unaff_r10 & 1;
  iStack00000090 = (in_stack_000000b4 + unaff_r10) * 0x44;
  puStack00000094 = (uint *)(iStack00000090 + DAT_080709dc + 0x38);
LAB_08070958:
  if (unaff_r10 == in_stack_0000007c) {
    iVar7 = FUN_0805a1e4();
    if (iVar7 != 0) {
      FUN_08071780();
    }
    iVar7 = FUN_0801dd8c();
    if (iVar7 != 0) {
      FUN_08071780();
    }
    uVar8 = (uint)*(ushort *)(in_stack_00000054 + 0x26);
    if (uVar8 == 0xb) {
      uVar8 = FUN_08071780();
    }
    if (uVar8 == 0xc) {
      FUN_08071780();
    }
    iVar7 = FUN_0800ca6c();
    if (iVar7 != 0) {
      FUN_08071780();
    }
  }
  if (unaff_r10 < 4) {
    iVar7 = (uint)(**(ushort **)(in_stack_00000054 + 0x150) >> 4) << 8;
    iVar9 = ((*(ushort **)(in_stack_00000054 + 0x150))[1] & 0xfff) << 8;
    if (unaff_r10 == in_stack_0000007c) {
      if ((*DAT_080709e0 & 1) == uStack0000008c) {
        in_stack_00000060 = FUN_08074664(0x20,100);
LAB_08070a5c:
        in_stack_00000060 = in_stack_00000060 & 0xffff;
        if (in_stack_00000060 != 0xff) goto LAB_08070bec;
      }
    }
    else if ((*DAT_08070a04 & 1) == uStack0000008c) {
      in_stack_00000060 = FUN_080748d0(iStack00000090 + DAT_08070a08,0x20,100);
      goto LAB_08070a5c;
    }
  }
  else {
    iVar7 = *(int *)(in_stack_00000058 + 10);
    iVar9 = *(int *)(in_stack_00000058 + 0xc);
    if (3 < in_stack_00000060) {
      in_stack_00000060 = FUN_08074b24(*in_stack_00000058 + 4,0xff,iVar7,iVar9);
      goto LAB_08070a5c;
    }
    if ((*(byte *)(*(int *)(in_stack_00000060 * 0x154 + DAT_08070a40) + 4) & 0x20) == 0)
    goto LAB_08070bec;
  }
  iVar11 = (int)(short)in_stack_00000074;
  iVar7 = iVar7 + *(short *)((iVar11 + 0x40) * 2 + DAT_08070bd8) * 0x10;
  iVar9 = iVar9 + *(short *)(iVar11 * 2 + DAT_08070bd8) * 8 + DAT_08070bdc;
  in_stack_00000074 = ((iVar11 + 8) * 0x10000 & 0xff0000U) >> 0x10;
  if ((*(ushort *)(*DAT_08070be0 + 4) & 4) == 0) {
    FUN_0806599c(&stack0x00000010,in_stack_00000064,&stack0x00000044,(int)&stack0x00000044 + 2);
    iVar11 = FUN_0800c5e8();
    if (((iVar11 == 0) && (iVar11 = FUN_0800c6dc(), iVar11 == 0)) &&
       (iVar11 = FUN_0800c61c(), iVar11 == 0)) {
      if ((*DAT_08070be4 & 1) == 0) {
        FUN_08000af0(0x17,in_stack_0000001c,2);
      }
      FUN_0800b570((int)(short)((uint)iVar7 >> 8),(int)(short)((uint)iVar9 >> 8),&stack0x00000048,
                   (int)&stack0x00000048 + 2);
      FUN_0800b5ac(iVar7 >> 8,iVar9 >> 8,0);
      if (*(short *)(DAT_08070be8 + 0x8c) == 4) {
        FUN_0800c710();
      }
      if ((*DAT_08070be4 & 1) == uStack0000008c) {
        FUN_08007378((int)sStack00000048,(int)sStack0000004a,in_stack_00000064,uStack00000044);
      }
    }
  }
  FUN_080003f0();
  iVar7 = FUN_08058354();
  if (iVar7 != 0) {
    FUN_08071780();
  }
  if ((unaff_r10 < 4) && ((*puStack00000094 & 2) != 0)) {
    FUN_08071780();
  }
  if ((**(byte **)(in_stack_00000054 + 0x150) & 0xf) == 0xc) {
    FUN_08071780();
  }
  iVar7 = FUN_0805a1e4();
  if (iVar7 != 0) {
    FUN_08071780();
  }
  if ((*puStack00000094 & 0x2400) != 0) {
    FUN_08071780();
  }
  iVar7 = FUN_0800c860();
  if (iVar7 != 0) {
    FUN_08071780();
  }
  iVar7 = FUN_0800ca6c();
  if (iVar7 != 0) {
    FUN_08071780();
  }
  goto LAB_08070958;
LAB_08070bec:
  if (in_stack_00000060 < 4) {
    in_stack_0000005c = in_stack_00000060 * 0x154 + DAT_08070c04;
    puVar12 = in_stack_00000050;
  }
  else {
    uVar8 = 0;
    if ((*DAT_08070e4c & 1) == 0) goto LAB_08070c24;
    puVar12 = (undefined2 *)*DAT_08070e50;
    uVar5 = puVar12[1];
    while (uVar5 != in_stack_00000060) {
LAB_08070c24:
      do {
        uVar10 = uVar8 + 1;
        uVar8 = uVar10 & 0xffff;
        puVar12 = in_stack_00000050;
        if (4 < uVar8) goto LAB_08070c4e;
      } while ((*DAT_08070e4c & 1 << (uVar10 & 0xff)) == 0);
      puVar12 = (undefined2 *)(uVar8 * DAT_08070e54 + *DAT_08070e50);
      uVar5 = puVar12[1];
    }
  }
LAB_08070c4e:
  in_stack_00000050 = puVar12;
  in_stack_00000088 = 0;
  in_stack_00000098 = &stack0x00000048;
  do {
    if (unaff_r10 == in_stack_0000007c) {
      iVar11 = FUN_0805a1e4();
      if (iVar11 != 0) {
        FUN_08071780();
      }
      iVar11 = FUN_0801dd8c();
      if (iVar11 != 0) {
        FUN_08071780();
      }
      uVar8 = (uint)*(ushort *)(in_stack_00000054 + 0x26);
      if (uVar8 == 0xb) {
        uVar8 = FUN_08071780();
      }
      if (uVar8 == 0xc) {
        FUN_08071780();
      }
      iVar11 = FUN_0800ca6c();
      if (iVar11 != 0) {
        FUN_08071780();
      }
    }
    bVar1 = false;
    sVar6 = (short)((uint)iVar7 >> 8);
    sVar4 = (short)((uint)iVar9 >> 8);
    if (in_stack_00000060 != 0xff) {
      if (3 < in_stack_00000060) {
        uVar8 = 0;
        do {
          if (((1 << (uVar8 & 0xff) & *DAT_08070e4c) != 0) &&
             (iVar11 = *DAT_08070e50 + DAT_08070e54 * uVar8, *(char *)(iVar11 + 0x1dc) != '\0')) {
            sStack00000048 = (short)((uint)(*(int *)(iVar11 + 0x14) - iVar7) >> 8);
            sStack0000004a = (short)((uint)(*(int *)(iVar11 + 0x18) - iVar9) >> 8);
            iVar11 = (int)sStack00000048;
            if (iVar11 < 0) {
              iVar11 = -iVar11;
            }
            if (iVar11 < 8) {
              iVar11 = (int)sStack0000004a;
              if (iVar11 < 0) {
                iVar11 = -iVar11;
              }
              if (iVar11 < 8) {
                bVar1 = true;
              }
            }
          }
          uVar8 = uVar8 + 1 & 0xffff;
        } while (uVar8 < 5);
      }
      if (in_stack_00000060 == 0xff) goto LAB_08070d8c;
      if (!bVar1) {
        if ((((in_stack_00000060 < 4) &&
             (*(char *)(in_stack_0000005c + 0x70) != *(char *)(in_stack_00000054 + 0x70))) &&
            (puVar13 = *(ushort **)(in_stack_0000005c + 0x150), (*puVar13 & 0xf) != 0xe)) &&
           (*(char *)(in_stack_0000005c + 0x70) != '\0')) {
          *in_stack_00000098 = (*puVar13 >> 4) - sVar6;
          sStack0000004a = (puVar13[1] & 0xfff) - sVar4;
          iVar11 = (int)*in_stack_00000098;
          if (iVar11 < 0) {
            iVar11 = -iVar11;
          }
          if (iVar11 < 0x10) {
            iVar11 = (int)sStack0000004a;
            if (iVar11 < 0) {
              iVar11 = -iVar11;
            }
            if (iVar11 < 0x10) {
              bVar1 = true;
            }
          }
        }
        goto LAB_08070d8c;
      }
LAB_08071084:
      in_stack_00000080 = 0x46;
      if ((short)in_stack_00000078 < 4) {
        in_stack_00000080 = 0x3f;
      }
      in_stack_000000a0 = unaff_r10 & 1;
      in_stack_000000a4 = 1 << (unaff_r10 & 0xff);
      in_stack_0000009c = iVar7 >> 8;
      break;
    }
LAB_08070d8c:
    if (bVar1) goto LAB_08071084;
    iVar11 = FUN_08058354();
    if (iVar11 != 0) {
      FUN_08071780();
    }
    if ((unaff_r10 < 4) &&
       ((*(uint *)((in_stack_000000b4 + unaff_r10) * 0x44 + DAT_08070e58) & 2) != 0)) {
      FUN_08071780();
    }
    if ((**(byte **)(in_stack_00000054 + 0x150) & 0xf) == 0xc) {
      FUN_08071780();
    }
    iVar11 = FUN_0805a1e4();
    if (iVar11 != 0) {
      FUN_08071780();
    }
    if ((*(uint *)((in_stack_000000b4 + unaff_r10) * 0x44 + DAT_08070e58) & 0x2400) != 0) {
      FUN_08071780();
    }
    iVar11 = FUN_0800c860();
    if (iVar11 != 0) {
      FUN_08071780();
    }
    iVar11 = FUN_0800ca6c();
    if (iVar11 != 0) {
      FUN_08071780();
    }
    if (in_stack_00000060 < 4) {
      puVar13 = *(ushort **)(in_stack_0000005c + 0x150);
      *in_stack_00000098 = (*puVar13 >> 4) - sVar6;
      sStack0000004a = (puVar13[1] & 0xfff) - sVar4;
    }
    else {
      *in_stack_00000098 = (short)((uint)(*(int *)(in_stack_00000050 + 10) - iVar7) >> 8);
      sStack0000004a = (short)((uint)(*(int *)(in_stack_00000050 + 0xc) - iVar9) >> 8);
    }
    uVar5 = FUN_080b9a9c((int)sStack00000048 * (int)sStack00000048 +
                         (int)sStack0000004a * (int)sStack0000004a);
    if (uVar5 < 8) goto LAB_08071084;
    uVar8 = FUN_080b9a80((int)sStack00000048,(int)sStack0000004a);
    uVar8 = (uVar8 & 0xffff) >> 8;
    sVar6 = (short)in_stack_00000070;
    if ((int)(uVar8 - (int)sVar6) < 0x81) {
      if ((int)(uVar8 - (int)sVar6) < -0x80) {
        uVar8 = uVar8 | 0x100;
      }
    }
    else {
      uVar8 = uVar8 + DAT_08070ecc & 0xffff;
    }
    in_stack_00000070 = (int)sVar6 + (((int)(short)uVar8 - (int)sVar6) * 0x10000 >> 0x10);
    iVar11 = (int)(in_stack_00000070 * 0x10000) >> 0x10;
    if (iVar11 < 0) {
      in_stack_00000070 = iVar11 + 0x100;
    }
    if (0x100 < (short)in_stack_00000070) {
      in_stack_00000070 = (short)in_stack_00000070 + DAT_08070f7c;
    }
    in_stack_00000070 = in_stack_00000070 & 0xff;
    iVar11 = (int)(in_stack_00000070 << 0x10) >> 0x10;
    in_stack_00000078 = (uint)*(byte *)(((int)(in_stack_00000070 << 0x10) >> 0x14) + DAT_08070f80);
    uVar8 = FUN_0800a950(iVar7,iVar9,0);
    if (((uVar8 & 0xf) == 0) || ((uVar8 & 0x10) != 0)) {
      iVar7 = iVar7 + *(short *)((iVar11 + 0x40) * 2 + DAT_08070f84) * 3;
      iVar9 = iVar9 + *(short *)(iVar11 * 2 + DAT_08070f84) * 3;
    }
    else {
      uVar8 = in_stack_00000088 + 1;
      bVar1 = 0x78 < in_stack_00000088;
      in_stack_00000088 = uVar8;
      if (bVar1) goto LAB_080713de;
    }
    FUN_0800b570((int)(short)((uint)iVar7 >> 8),(int)(short)((uint)iVar9 >> 8),&stack0x00000048,
                 (int)&stack0x00000048 + 2);
    FUN_0800b5ac(iVar7 >> 8,iVar9 >> 8,0);
    FUN_0806599c(&stack0x00000010,
                 in_stack_00000064 +
                 (uint)*(byte *)(((int)(in_stack_00000070 << 0x10) >> 0x14) + DAT_08071074) & 0xffff
                 ,&stack0x00000044,(int)&stack0x00000044 + 2);
    if ((((*(ushort *)(*DAT_08071078 + 4) & 4) == 0) && (iVar11 = FUN_0800c5e8(), iVar11 == 0)) &&
       ((iVar11 = FUN_0800c6dc(), iVar11 == 0 && (iVar11 = FUN_0800c61c(), iVar11 == 0)))) {
      if ((*DAT_0807107c & 1) == 0) {
        FUN_08000af0(0x17,in_stack_0000001c,2);
      }
      if (*(short *)(DAT_08071080 + 0x8c) == 4) {
        FUN_0800c710();
      }
      if ((*DAT_0807107c & 1) == (unaff_r10 & 1)) {
        FUN_08007378((int)sStack00000048,(int)sStack0000004a,
                     in_stack_00000064 + in_stack_00000078 & 0xffff,uStack00000044);
      }
    }
    FUN_080003f0();
  } while( true );
  while( true ) {
    FUN_0800b570((int)(short)in_stack_0000009c,(int)sVar4,&stack0x00000048,(int)&stack0x00000048 + 2
                );
    FUN_0800b5ac(in_stack_0000009c,iVar9 >> 8,0);
    uVar8 = in_stack_0000006c + in_stack_00000080;
    sVar6 = FUN_0806599c(&stack0x00000010,uVar8 & 0xffff,&stack0x00000044,(int)&stack0x00000044 + 2)
    ;
    if ((((*(ushort *)(*DAT_08071330 + 4) & 4) == 0) && (iVar11 = FUN_0800c5e8(), iVar11 == 0)) &&
       ((iVar11 = FUN_0800c6dc(), iVar11 == 0 && (iVar11 = FUN_0800c61c(), iVar11 == 0)))) {
      if ((*DAT_08071334 & 1) == 0) {
        FUN_08000af0(0x17,in_stack_0000001c,2);
      }
      if (*(short *)(DAT_08071338 + 0x8c) == 4) {
        FUN_0800c710();
      }
      if ((*DAT_08071334 & 1) == in_stack_000000a0) {
        FUN_08007378((int)sStack00000048,(int)sStack0000004a,uVar8 & 0xffff,uStack00000044);
      }
    }
    FUN_080003f0();
    iVar11 = FUN_08058354();
    if (iVar11 != 0) {
      FUN_08071780();
      return;
    }
    if ((unaff_r10 < 4) &&
       ((*(uint *)((in_stack_000000b4 + unaff_r10) * 0x44 + DAT_0807133c) & 2) != 0)) {
      FUN_08071780();
      return;
    }
    if ((**(byte **)(in_stack_00000054 + 0x150) & 0xf) == 0xc) {
      FUN_08071780();
      return;
    }
    iVar11 = FUN_0805a1e4();
    if (iVar11 != 0) {
      FUN_08071780();
      return;
    }
    if ((*(uint *)((in_stack_000000b4 + unaff_r10) * 0x44 + DAT_0807133c) & 0x2400) != 0) {
      FUN_08071780();
      return;
    }
    iVar11 = FUN_0800c860();
    if (iVar11 != 0) {
      FUN_08071780();
      return;
    }
    iVar11 = FUN_0800ca6c();
    if (iVar11 != 0) {
      FUN_08071780();
      return;
    }
    if (sVar6 != 0) {
      if (in_stack_00000060 < 4) {
        if (in_stack_00000060 == in_stack_0000007c) {
          uVar2 = *(undefined2 *)(DAT_08071340 + 0x19a);
          sVar3 = FUN_080695f4(in_stack_0000004c,0);
          FUN_08029b3c(uVar2,(int)sVar3,in_stack_00000064);
        }
      }
      else if (unaff_r10 == in_stack_0000007c) {
        sVar3 = FUN_080695f4(in_stack_0000004c,0);
        FUN_08029c5c(*in_stack_00000050,*(undefined2 *)(DAT_08071390 + 0x19a),(int)sVar3,
                     in_stack_00000064);
        in_stack_00000050[0x2d] = (ushort)in_stack_000000a4 | in_stack_00000050[0x2d];
      }
      if (unaff_r10 < 4) {
        *(int *)(in_stack_00000054 + 0xe4) = *(int *)(in_stack_00000054 + 0xe4) + 1;
      }
      else {
        *(int *)(in_stack_00000058 + 0x28) = *(int *)(in_stack_00000058 + 0x28) + 1;
      }
    }
    if (in_stack_00000060 < 4) {
      uVar5 = **(byte **)(in_stack_0000005c + 0x150) & 0xf;
    }
    else {
      uVar5 = in_stack_00000050[6];
    }
    if (uVar5 == 0xb) goto LAB_080713de;
    if (sVar6 != 0) break;
    bVar1 = false;
    if ((in_stack_00000060 != DAT_08071320) && (3 < in_stack_00000060)) {
      uVar8 = 0;
      do {
        if (((1 << (uVar8 & 0xff) & *DAT_08071324) != 0) &&
           (iVar11 = *DAT_08071328 + DAT_0807132c * uVar8, *(char *)(iVar11 + 0x1dc) != '\0')) {
          sStack00000048 = (short)((uint)(*(int *)(iVar11 + 0x14) - iVar7) >> 8);
          sStack0000004a = (short)((uint)(*(int *)(iVar11 + 0x18) - iVar9) >> 8);
          iVar11 = (int)sStack00000048;
          if (iVar11 < 0) {
            iVar11 = -iVar11;
          }
          if (iVar11 < 0x20) {
            iVar11 = (int)sStack0000004a;
            if (iVar11 < 0) {
              iVar11 = -iVar11;
            }
            if (iVar11 < 0x20) {
              bVar1 = true;
            }
          }
        }
        uVar8 = uVar8 + 1 & 0xffff;
      } while (uVar8 < 5);
    }
    if (in_stack_00000060 == 0xff) {
LAB_0807119e:
      if (!bVar1) goto LAB_080713de;
    }
    else if (!bVar1) {
      if ((((in_stack_00000060 < 4) &&
           (*(char *)(in_stack_0000005c + 0x70) != *(char *)(in_stack_00000054 + 0x70))) &&
          (puVar13 = *(ushort **)(in_stack_0000005c + 0x150), (*puVar13 & 0xf) != 0xe)) &&
         (*(char *)(in_stack_0000005c + 0x70) != '\0')) {
        sStack00000048 = (*puVar13 >> 4) - (short)in_stack_0000009c;
        sStack0000004a = (puVar13[1] & 0xfff) - sVar4;
        iVar11 = (int)sStack00000048;
        if (iVar11 < 0) {
          iVar11 = -iVar11;
        }
        if (iVar11 < 0x10) {
          iVar11 = (int)sStack0000004a;
          if (iVar11 < 0) {
            iVar11 = -iVar11;
          }
          if (iVar11 < 0x10) {
            bVar1 = true;
          }
        }
      }
      goto LAB_0807119e;
    }
  }
  in_stack_00000068 = in_stack_00000068 & 0xffff;
  uStack00000046 = 0;
  uStack00000044 = 0;
  if (in_stack_00000068 == 0) {
    FUN_08071780();
    return;
  }
LAB_080713de:
  if (in_stack_00000068 == 0) {
    FUN_08071780();
    return;
  }
  if ((((in_stack_0000007c == unaff_r10) || (3 < unaff_r10)) &&
      (iVar11 = FUN_0800c61c(), iVar11 == 0)) && (iVar11 = FUN_0800c684(), iVar11 == 0)) {
    FUN_08059a8c(*(int *)(in_stack_0000004c + 0x14) + 0x15c);
  }
  iVar11 = (in_stack_000000b4 + unaff_r10) * 0x44;
  in_stack_000000a8 = (undefined4 *)(iVar11 + DAT_08071564);
  in_stack_000000ac = (uint *)(iVar11 + DAT_08071564 + DAT_08071568);
  while( true ) {
    if (unaff_r10 == in_stack_0000007c) {
      iVar11 = FUN_0805a1e4();
      if (iVar11 != 0) {
        FUN_08071780();
        return;
      }
      iVar11 = FUN_0801dd8c();
      if (iVar11 != 0) {
        FUN_08071780();
        return;
      }
      if (*(short *)(in_stack_00000054 + 0x26) == 0xb) {
        FUN_08071780();
        return;
      }
      if (*(short *)(in_stack_00000054 + 0x26) == 0xc) {
        FUN_08071780();
        return;
      }
      iVar11 = FUN_0800ca6c();
      if (iVar11 != 0) {
        FUN_08071780();
        return;
      }
    }
    sVar6 = (short)((uint)iVar9 >> 8);
    sVar4 = (short)((uint)iVar7 >> 8);
    if ((*(ushort *)(*DAT_0807156c + 4) & 4) == 0) {
      uVar8 = in_stack_00000064 + in_stack_00000078;
      FUN_0806599c(&stack0x00000010,uVar8 & 0xffff,&stack0x00000044,(int)&stack0x00000044 + 2);
      iVar11 = FUN_0800c5e8();
      in_stack_000000b0 = uVar8;
      if (((iVar11 == 0) && (iVar11 = FUN_0800c6dc(), iVar11 == 0)) &&
         (iVar11 = FUN_0800c61c(), iVar11 == 0)) {
        if ((*DAT_08071570 & 1) == 0) {
          in_stack_000000b8 = iVar11;
          FUN_08000af0(0x17,in_stack_0000001c,2);
        }
        FUN_0800b570((int)sVar4,(int)sVar6,&stack0x00000048,(int)&stack0x00000048 + 2);
        FUN_0800b5ac(iVar7 >> 8,iVar9 >> 8,0);
        if (*(short *)(DAT_08071574 + 0x8c) == 4) {
          FUN_0800c710();
        }
        if ((*DAT_08071570 & 1) == (unaff_r10 & 1)) {
          FUN_08007378((int)sStack00000048,(int)sStack0000004a,in_stack_000000b0 & 0xffff,
                       uStack00000044);
        }
      }
    }
    if (unaff_r10 < 4) {
      if (unaff_r10 == in_stack_0000007c) {
        sStack00000048 = (**(ushort **)(in_stack_00000054 + 0x150) >> 4) - sVar4;
        sStack0000004a = ((*(ushort **)(in_stack_00000054 + 0x150))[1] & 0xfff) - sVar6;
      }
      else {
        sStack00000048 = (*(ushort *)*in_stack_000000a8 >> 4) - sVar4;
        sStack0000004a = (((ushort *)*in_stack_000000a8)[1] & 0xfff) - sVar6;
      }
    }
    else {
      sStack00000048 = (short)((uint)(*(int *)(in_stack_00000050 + 10) - iVar7) >> 8);
      sStack0000004a = (short)((uint)(*(int *)(in_stack_00000050 + 0xc) - iVar9) >> 8);
    }
    FUN_080003f0();
    uVar5 = FUN_080b9a9c((int)sStack00000048 * (int)sStack00000048 +
                         (int)sStack0000004a * (int)sStack0000004a);
    if (uVar5 < 8) break;
    uVar8 = FUN_080b9a80((int)sStack00000048,(int)sStack0000004a);
    uVar8 = (uVar8 & 0xffff) >> 8;
    sVar6 = (short)in_stack_00000070;
    if ((int)(uVar8 - (int)sVar6) < 0x81) {
      if ((int)(uVar8 - (int)sVar6) < -0x80) {
        uVar8 = uVar8 | 0x100;
      }
    }
    else {
      uVar8 = uVar8 + DAT_08071600 & 0xffff;
    }
    in_stack_00000070 = (int)sVar6 + (((int)(short)uVar8 - (int)sVar6) * 0x10000 >> 0x10);
    iVar11 = (int)(in_stack_00000070 * 0x10000) >> 0x10;
    if (iVar11 < 0) {
      in_stack_00000070 = iVar11 + 0x100;
    }
    if (0x100 < (short)in_stack_00000070) {
      in_stack_00000070 = (short)in_stack_00000070 + DAT_080716e8;
    }
    in_stack_00000070 = in_stack_00000070 & 0xff;
    iVar11 = (int)(in_stack_00000070 << 0x10) >> 0x10;
    in_stack_00000078 = (uint)*(byte *)(((int)(in_stack_00000070 << 0x10) >> 0x14) + DAT_080716ec);
    iVar7 = iVar7 + *(short *)((iVar11 + 0x40) * 2 + DAT_080716f0) * 3;
    iVar9 = iVar9 + *(short *)(iVar11 * 2 + DAT_080716f0) * 3;
    iVar11 = FUN_08058354();
    if ((((iVar11 != 0) || ((unaff_r10 < 4 && ((*in_stack_000000ac & 2) != 0)))) ||
        ((**(byte **)(in_stack_00000054 + 0x150) & 0xf) == 0xc)) ||
       ((((iVar11 = FUN_0805a1e4(), iVar11 != 0 || ((*in_stack_000000ac & 0x2400) != 0)) ||
         (iVar11 = FUN_0800c860(), iVar11 != 0)) || (iVar11 = FUN_0800ca6c(), iVar11 != 0))))
    goto code_r0x08071780;
  }
  if (unaff_r10 < 4) {
    if (unaff_r10 == in_stack_0000007c) {
      puVar13 = *(ushort **)(in_stack_00000054 + 0x150);
      uVar5 = *puVar13;
    }
    else {
      puVar13 = *(ushort **)((in_stack_000000b4 + unaff_r10) * 0x44 + DAT_08071750 + 0x150);
      uVar5 = *puVar13;
    }
    sStack00000048 = sVar4 - (uVar5 >> 4);
    sStack0000004a = sVar6 - (puVar13[1] & 0xfff);
  }
  else {
    sStack00000048 = (short)((uint)(iVar7 - *(int *)(in_stack_00000050 + 10)) >> 8);
    sStack0000004a = (short)((uint)(iVar9 - *(int *)(in_stack_00000050 + 0xc)) >> 8);
  }
  uVar8 = FUN_080b9a80((int)sStack00000048,(int)sStack0000004a);
  in_stack_00000074 = (uVar8 & 0xffff) >> 8;
  FUN_0807093c();
code_r0x08071780:
  *(undefined1 *)(DAT_080717ac + unaff_r10) = 0;
  *(uint *)(in_stack_000000b4 + DAT_080717b0) =
       *(uint *)(in_stack_000000b4 + DAT_080717b0) & ~(1 << (in_stack_00000084 & 0xff));
                    /* WARNING: Could not recover jumptable at 0x080717a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

