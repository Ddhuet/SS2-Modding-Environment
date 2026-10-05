
undefined4 FUN_08023954(int *param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  int *piVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 unaff_lr;
  byte abStack_68 [4];
  byte abStack_64 [2];
  undefined2 auStack_62 [23];
  int *piStack_34;
  int iStack_30;
  uint uStack_2c;
  int *piStack_28;
  uint uStack_24;
  
  pbVar8 = abStack_68;
  uVar4 = param_2 & 0xffff;
  uStack_2c = 0;
  iStack_30 = 0;
  uVar10 = 0;
  piStack_34 = param_1;
  do {
    piVar7 = DAT_08023a34;
    if ((short)param_1[2] != 0) {
      uStack_2c = uStack_2c + 1;
      iVar5 = *DAT_08023a34;
      *(undefined4 *)pbVar8 = *(undefined4 *)(iVar5 + DAT_08023a38 + uVar4 * 4);
      *(undefined2 *)((int)pbVar8 + 6) = *(undefined2 *)(iVar5 + 8);
      *(char *)((int)pbVar8 + 5) = (char)uVar4;
      iVar9 = (uVar10 & 0xff) + (param_2 & 0xff) * 5;
      if ((*(char *)(iVar5 + 0x1c8 + iVar9) != '\x03') &&
         (piStack_28 = param_1, iVar5 = FUN_08002204(), param_1 = piStack_28, iVar5 != 0)) {
        *(undefined1 *)(*piVar7 + 0x1c8 + iVar9) = 1;
      }
    }
    pbVar8 = (byte *)((int)pbVar8 + 8);
    param_1 = param_1 + 2;
    uVar10 = uVar10 + 1;
  } while (uVar10 < 5);
  uVar10 = 0;
  if (uStack_2c != 0) {
    pbVar8 = abStack_64;
    do {
      *pbVar8 = (byte)uVar10;
      cVar1 = FUN_080008c8();
      if (cVar1 == -0x80) {
        *pbVar8 = *pbVar8 | 0x80;
      }
      pbVar8 = pbVar8 + 8;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uStack_2c);
  }
  iVar5 = *DAT_08023a34;
  uVar3 = *(short *)(iVar5 + 8) + 5;
  *(ushort *)(iVar5 + 8) = uVar3;
  if (0xfa < uVar3) {
    *(undefined2 *)(iVar5 + 8) = 9;
  }
  do {
    if (*(short *)*DAT_08023cc8 != 0xb) {
LAB_08023d7e:
      do {
        FUN_080003f0();
        iVar5 = FUN_08058354();
        if (iVar5 != 0) break;
        if ((*DAT_08023cfc & 1) == (param_2 & 1)) {
          uVar3 = *(ushort *)(piStack_34 + 1);
          uStack_24 = (uint)*(ushort *)((int)piStack_34 + 6);
          uVar10 = FUN_08002164();
          bVar2 = false;
          iVar5 = FUN_08019b0c();
          if (iVar5 == 0) goto LAB_08023d7e;
          uVar11 = 0;
          if (uVar10 != 0) {
            iVar5 = 0;
            do {
              puVar6 = *(ushort **)(iVar5 + DAT_08023d74 + 0x150);
              if (((puVar6[2] & 0x20) == 0) &&
                 ((*(uint *)(iVar5 + DAT_08023d74 + 0x38) & 0x2000) == 0)) {
                iVar9 = (int)(short)*piStack_34 - (uint)(*puVar6 >> 7);
                if (iVar9 < 0) {
                  iVar9 = -iVar9;
                }
                if (iVar9 < (int)(uint)uVar3) {
                  iVar9 = (int)*(short *)((int)piStack_34 + 2) - ((puVar6[1] & 0xfff) >> 3);
                  if (iVar9 < 0) {
                    iVar9 = -iVar9;
                  }
                  if (iVar9 < (int)uStack_24) {
                    bVar2 = true;
                    break;
                  }
                }
              }
              iVar5 = iVar5 + 0x154;
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar10);
          }
        }
        else {
          bVar2 = false;
        }
      } while (!bVar2);
    }
    iVar5 = FUN_08058354();
    if (iVar5 != 0) break;
    if ((short)piStack_34[0xc] == 0) {
      while( true ) {
        while ((iVar5 = FUN_08019b0c(), iVar5 == 0 && (iVar5 = FUN_08058354(), iVar5 == 0))) {
          FUN_080003f0();
        }
        iVar5 = FUN_08058354();
        if ((iVar5 == 0) && (uVar10 = 0, uStack_2c != 0)) {
          piVar7 = DAT_08023ae0;
          do {
            iVar5 = (uVar10 & 0xff) + (param_2 & 0xff) * 5;
            if (((*(char *)(*piVar7 + 0x1c8 + iVar5) == '\x01') &&
                (piStack_28 = piVar7, iVar9 = FUN_0806666c(abStack_64 + uVar10 * 8 + -4),
                piVar7 = piStack_28, iVar9 != 0)) &&
               (iVar9 = FUN_08002204(), piVar7 = piStack_28, iVar9 != 0)) {
              *(undefined1 *)(*piStack_28 + 0x1c8 + iVar5) = 2;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uStack_2c);
        }
        iVar5 = FUN_08058354();
        if (iVar5 != 0) break;
        uVar10 = 0;
        while (*(char *)(*DAT_08023b34 + 0x1c8 + (uVar10 & 0xff) + (param_2 & 0xff) * 5) != '\x02')
        {
          uVar10 = uVar10 + 1;
          if (4 < uVar10) goto LAB_08023b3e;
        }
        FUN_080003f0();
      }
      while (iVar5 = FUN_08068264(*DAT_08023b00 + uVar4 * 4 + DAT_08023afc), iVar5 == 0) {
        FUN_080003f0();
      }
LAB_08023b3e:
      uVar10 = 0;
      do {
        cVar1 = *(char *)(*DAT_08023b80 + 0x1c8 + (uVar10 & 0xff) + (param_2 & 0xff) * 5);
        if ((cVar1 == '\x02') || (cVar1 == '\x01')) {
          iStack_30 = 0;
          goto LAB_08023cae;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < 5);
      iStack_30 = 1;
    }
    else if (((short)piStack_34[0xc] == 1) && (uVar10 = 0, uStack_2c != 0)) {
      do {
        while ((iVar5 = FUN_08019b0c(), iVar5 == 0 && (iVar5 = FUN_08058354(), iVar5 == 0))) {
          FUN_080003f0();
        }
        iVar5 = FUN_08058354();
        if ((iVar5 == 0) &&
           (*(char *)(*DAT_08023bec + 0x1c8 + (uVar10 & 0xff) + (param_2 & 0xff) * 5) != '\x03')) {
          while ((iVar5 = FUN_0806666c(abStack_64 + uVar10 * 8 + -4), iVar5 == 0 &&
                 (iVar5 = FUN_08058354(), iVar5 == 0))) {
            FUN_080003f0();
          }
          iVar5 = FUN_08058354();
          if (iVar5 == 0) {
            iVar5 = FUN_08002204();
            if (iVar5 != 0) {
              *(undefined1 *)(*DAT_08023c40 + 0x1c8 + (uVar10 & 0xff) + (param_2 & 0xff) * 5) = 2;
            }
          }
        }
        piVar7 = DAT_08023c40;
        while (iVar5 = FUN_08058354(), iVar5 == 0) {
          cVar1 = *(char *)(*piVar7 + 0x1c8 + (uVar10 & 0xff) + (param_2 & 0xff) * 5);
          if (cVar1 == '\x01') {
            iStack_30 = 0;
            uVar10 = uStack_2c;
            goto LAB_08023ca4;
          }
          if (cVar1 == '\x03') {
            iStack_30 = 1;
            goto LAB_08023ca4;
          }
          FUN_080003f0();
        }
        while (iVar5 = FUN_08068264(*piVar7 + uVar4 * 4 + DAT_08023cc4), uVar10 = uStack_2c,
              iVar5 == 0) {
          FUN_080003f0();
        }
LAB_08023ca4:
        uVar10 = uVar10 + 1;
      } while (uVar10 < uStack_2c);
    }
LAB_08023cae:
    FUN_080003f0();
  } while (iStack_30 != 1);
  piVar7 = DAT_08023dd0;
  iVar5 = *DAT_08023dd0;
  uVar3 = *(short *)(iVar5 + 10) - 1;
  *(ushort *)(iVar5 + 10) = uVar3;
  if ((uVar3 & 0x8000) != 0) {
    *(undefined2 *)(iVar5 + 10) = 0;
  }
  if ((((*(short *)(*piVar7 + 10) == 0) && (iVar5 = FUN_08058314(), iVar5 == 0)) &&
      (iVar5 = FUN_080584bc(), iVar5 == 0)) && (*(short *)*piVar7 != 0xb)) {
    while (iVar5 = FUN_08068564(), iVar5 == 0) {
      FUN_080003f0();
    }
  }
  return unaff_lr;
}

