
undefined4 FUN_080b914c(void)

{
  undefined4 *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  byte *extraout_r1;
  uint uVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  undefined4 unaff_lr;
  uint local_40;
  byte *local_38;
  char *local_34;
  byte *local_30;
  byte *local_28;
  
  iVar4 = *DAT_080b916c;
  if (*(char *)(iVar4 + 10) == '\0') {
    *(undefined1 *)(iVar4 + 10) = 0xe;
  }
  else {
    *(char *)(iVar4 + 10) = *(char *)(iVar4 + 10) + -1;
  }
  uVar14 = 1;
  pbVar13 = *(byte **)(iVar4 + 0x1c);
  do {
    bVar3 = *pbVar13;
    pbVar7 = (byte *)(uint)bVar3;
    if ((bVar3 & 199) != 0) {
      local_38 = DAT_080b91d0;
      local_34 = DAT_080b91d8;
      pbVar12 = DAT_080b91d4;
      if (uVar14 == 2) {
LAB_080b9204:
        local_30 = local_38 + 0xb;
        pbVar10 = (byte *)(local_34 + 4);
      }
      else {
        local_38 = DAT_080b9258;
        local_34 = DAT_080b9260;
        pbVar12 = DAT_080b925c;
        if ((int)uVar14 < 3) {
          if (uVar14 != 1) goto LAB_080b9204;
          local_38 = DAT_080b91b8;
          local_34 = DAT_080b91c0;
          local_30 = DAT_080b91b8 + 4;
          pbVar10 = (byte *)(DAT_080b91c0 + 2);
          pbVar12 = DAT_080b91bc;
        }
        else {
          if (uVar14 != 3) goto LAB_080b9204;
          local_38 = DAT_080b91f0;
          local_34 = DAT_080b91f8;
          local_30 = DAT_080b91f0 + 4;
          pbVar10 = (byte *)(DAT_080b91f8 + 2);
          pbVar12 = DAT_080b91f4;
        }
      }
      local_40 = (uint)*(byte *)(iVar4 + 10);
      if ((bVar3 & 0x80) == 0) {
        if ((bVar3 & 4) == 0) {
          pbVar12 = pbVar13 + 0x40;
          if ((bVar3 & 0x40) == 0) goto LAB_080b9378;
          if ((bVar3 & 3) == 0) goto LAB_080b9378;
          pbVar12 = (byte *)0x0;
          *pbVar13 = bVar3 & 0xfc;
          pbVar13[0xb] = pbVar13[7];
          if (pbVar13[7] == 0) {
LAB_080b93aa:
            iVar5 = (uint)pbVar13[10] * (uint)pbVar13[0xc] + 0xff;
            iVar8 = 0;
            pbVar13[9] = (byte)((uint)iVar5 >> 8);
            if ((iVar5 >> 8 & 0xffU) != 0) {
              *pbVar13 = *pbVar13 | 4;
              pbVar13[0x1d] = pbVar13[0x1d] | 1;
              goto LAB_080b9476;
            }
            goto LAB_080b932a;
          }
          pbVar7 = (byte *)(uint)pbVar13[0x1d];
          pbVar13[0x1d] = pbVar13[0x1d] | 1;
          if (uVar14 != 3) {
            pbVar12 = (byte *)(uint)pbVar13[7];
            local_28 = pbVar12;
          }
          goto LAB_080b9464;
        }
        bVar3 = pbVar13[0xd];
        pbVar13[0xd] = (byte)(bVar3 - 1);
        iVar8 = uVar14 + 1;
        if (0 < (int)((bVar3 - 1) * 0x1000000)) goto LAB_080b9476;
LAB_080b932a:
        FUN_080b9094(uVar14 & 0xff,iVar8);
        *pbVar13 = 0;
      }
      else {
        iVar8 = uVar14 + 1;
        if ((bVar3 & 0x40) != 0) goto LAB_080b932a;
        *pbVar13 = 3;
        pbVar13[0x1d] = 3;
        FUN_080b90e4(pbVar13);
        if (uVar14 == 2) {
LAB_080b9270:
          *pbVar12 = pbVar13[0x1e] + (char)*(undefined4 *)(pbVar13 + 0x24) * '@';
LAB_080b92d4:
          bVar3 = pbVar13[4];
          local_28 = (byte *)(uint)(byte)(bVar3 + 8);
          bVar2 = 0;
          if (pbVar13[0x1e] != 0) {
            bVar2 = 0x40;
          }
          pbVar13[0x1a] = bVar2;
        }
        else {
          if ((int)uVar14 < 3) {
            if (uVar14 == 1) {
              *local_38 = pbVar13[0x1f];
              goto LAB_080b9270;
            }
LAB_080b92c8:
            *pbVar12 = pbVar13[0x1e];
            *local_30 = (byte)(*(int *)(pbVar13 + 0x24) << 3);
            goto LAB_080b92d4;
          }
          if (uVar14 != 3) goto LAB_080b92c8;
          if (*(int *)(pbVar13 + 0x24) != *(int *)(pbVar13 + 0x28)) {
            *local_38 = 0x40;
            puVar1 = DAT_080b92bc;
            puVar11 = *(undefined4 **)(pbVar13 + 0x24);
            *DAT_080b92bc = *puVar11;
            puVar1[1] = puVar11[1];
            puVar1[2] = puVar11[2];
            puVar1[3] = puVar11[3];
            *(undefined4 **)(pbVar13 + 0x28) = puVar11;
          }
          *local_38 = bVar3 & 0x40;
          *pbVar12 = pbVar13[0x1e];
          if (pbVar13[0x1e] == 0) {
            pbVar13[0x1a] = 0x80;
            bVar3 = pbVar13[4];
          }
          else {
            pbVar13[0x1a] = 0xc0;
            bVar3 = pbVar13[4];
          }
        }
        pbVar12 = (byte *)0x0;
        pbVar13[0xb] = bVar3;
        pbVar7 = pbVar13 + 0x40;
        if (bVar3 == 0) goto LAB_080b9436;
        pbVar13[9] = 0;
LAB_080b9464:
        pbVar13[0xb] = pbVar13[0xb] - 1;
        if (local_40 == 0) {
          local_40 = 0xffffffff;
LAB_080b9378:
          if (pbVar13[0xb] == 0) {
            if (uVar14 == 3) {
              pbVar7 = (byte *)(uint)pbVar13[0x1d];
              pbVar13[0x1d] = pbVar13[0x1d] | 1;
            }
            FUN_080b90e4(pbVar13,pbVar7,pbVar12);
            pbVar12 = (byte *)(uint)*pbVar13;
            if ((*pbVar13 & 3) == 0) {
              bVar3 = pbVar13[9];
              pbVar13[9] = (byte)(bVar3 - 1);
              pbVar7 = (byte *)0xff;
              if (0 < (int)((bVar3 - 1) * 0x1000000)) {
                bVar3 = pbVar13[7];
                goto LAB_080b9462;
              }
              goto LAB_080b93aa;
            }
            pbVar7 = extraout_r1;
            if (((uint)pbVar12 & 3) == 1) {
LAB_080b93da:
              pbVar13[9] = pbVar13[0x19];
              bVar3 = 7;
            }
            else if (((uint)pbVar12 & 3) == 2) {
              bVar3 = pbVar13[9];
              pbVar13[9] = (byte)(bVar3 - 1);
              iVar8 = (bVar3 - 1) * 0x1000000;
              pbVar12 = (byte *)(uint)pbVar13[0x19];
              pbVar7 = (byte *)((int)pbVar12 * 0x1000000);
              if (iVar8 + (int)pbVar12 * -0x1000000 == 0 || iVar8 < (int)pbVar7) {
LAB_080b93fa:
                if (pbVar13[6] != 0) {
                  *pbVar13 = *pbVar13 - 1;
                  pbVar12 = (byte *)(uint)pbVar13[0x1d];
                  pbVar13[0x1d] = pbVar13[0x1d] | 1;
                  if (uVar14 != 3) {
                    local_28 = &SupervisorCall;
                  }
                  goto LAB_080b93da;
                }
                *pbVar13 = *pbVar13 & 0xfc;
                goto LAB_080b93aa;
              }
              bVar3 = pbVar13[5];
            }
            else {
              bVar3 = pbVar13[9];
              pbVar13[9] = (byte)(bVar3 + 1);
              pbVar7 = (byte *)0xff;
              pbVar12 = (byte *)(uint)pbVar13[10];
              if (pbVar12 <= (byte *)(bVar3 + 1 & 0xff)) {
LAB_080b9436:
                pbVar12 = (byte *)0x0;
                *pbVar13 = *pbVar13 - 1;
                pbVar13[0xb] = pbVar13[5];
                pbVar7 = (byte *)0x0;
                if (pbVar13[5] == 0) goto LAB_080b93fa;
                pbVar7 = (byte *)(uint)pbVar13[0x1d];
                pbVar13[0x1d] = pbVar13[0x1d] | 1;
                pbVar13[9] = pbVar13[10];
                if (uVar14 != 3) {
                  pbVar12 = (byte *)(uint)pbVar13[5];
                  local_28 = pbVar12;
                }
                goto LAB_080b9464;
              }
              bVar3 = pbVar13[4];
            }
LAB_080b9462:
            pbVar13[0xb] = bVar3;
          }
          goto LAB_080b9464;
        }
LAB_080b9476:
        if ((pbVar13[0x1d] & 2) != 0) {
          if (((int)uVar14 < 4) && ((pbVar13[1] & 8) != 0)) {
            if (*DAT_080b94a0 < 0x40) {
              uVar6 = *(int *)(pbVar13 + 0x20) + 2;
              uVar9 = DAT_080b94a4;
            }
            else {
              if (0x7f < *DAT_080b94a0) goto LAB_080b94b6;
              uVar6 = *(int *)(pbVar13 + 0x20) + 1;
              uVar9 = DAT_080b94c4;
            }
            *(uint *)(pbVar13 + 0x20) = uVar6 & uVar9;
          }
LAB_080b94b6:
          if (uVar14 == 4) {
            *local_30 = (byte)*(undefined4 *)(pbVar13 + 0x20) | *local_30 & 8;
          }
          else {
            *local_30 = (byte)*(undefined4 *)(pbVar13 + 0x20);
          }
          bVar3 = pbVar13[0x21] + (pbVar13[0x1a] & 0xc0);
          pbVar13[0x1a] = bVar3;
          *pbVar10 = bVar3;
        }
        if ((pbVar13[0x1d] & 1) != 0) {
          *DAT_080b9538 = *DAT_080b9538 & ~pbVar13[0x1c] | pbVar13[0x1b];
          if (uVar14 == 3) {
            *local_34 = *(char *)((uint)pbVar13[9] + DAT_080b953c);
            if ((pbVar13[0x1a] & 0x80) != 0) {
              *local_38 = 0x80;
              *pbVar10 = pbVar13[0x1a];
              pbVar13[0x1a] = pbVar13[0x1a] & 0x7f;
            }
          }
          else {
            *local_34 = ((byte)local_28 & 0xf) + pbVar13[9] * '\x10';
            *pbVar10 = pbVar13[0x1a] | 0x80;
            if ((uVar14 == 1) && ((*local_38 & 8) == 0)) {
              *pbVar10 = pbVar13[0x1a] | 0x80;
            }
          }
        }
      }
      pbVar13[0x1d] = 0;
    }
    uVar14 = uVar14 + 1;
    pbVar13 = pbVar13 + 0x40;
    if (4 < (int)uVar14) {
      return unaff_lr;
    }
  } while( true );
}

