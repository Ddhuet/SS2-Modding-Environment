
undefined4 FUN_0801c540(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  short *psVar5;
  int *piVar6;
  int iVar7;
  ushort *puVar8;
  short *psVar9;
  uint uVar10;
  undefined4 unaff_lr;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar3 = FUN_08006d98(*(ushort *)(param_1 + 0x3a0) | 0xb0000);
  psVar9 = (short *)(param_1 + 0x1cc);
  FUN_0801ae64(iVar3 + 0x188,(short *)(param_1 + 0x378),psVar9);
  sVar2 = *(short *)(iVar3 + 0x176);
  *psVar9 = sVar2;
  *psVar9 = sVar2 + *(short *)(param_1 + 0x378);
  *(undefined2 *)(param_1 + 0x1ce) = *(undefined2 *)(param_1 + DAT_0801c5f8);
  *(undefined2 *)(param_1 + 0x62) = 0;
  if ((*(byte *)(param_1 + DAT_0801c5fc) & 2) != 0) {
    *(undefined2 *)(param_1 + 0x62) = 8;
  }
  if (*(char *)(param_1 + DAT_0801c600) != '\x03') {
    psVar9 = (short *)(param_1 + 0x8c);
    uVar10 = 0;
    do {
      if ((-1 < *psVar9) || (*psVar9 == -2)) {
        if (3 < (ushort)psVar9[1]) {
          if ((ushort)psVar9[2] - 1 < 7) {
                    /* WARNING: Could not recover jumptable at 0x0801c712. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar4 = (**(code **)(((ushort)psVar9[2] - 1) * 4 + DAT_0801c714))();
            return uVar4;
          }
          goto LAB_0801c856;
        }
        iVar7 = (uint)(ushort)psVar9[1] * 0x154;
        iVar3 = iVar7 + DAT_0801c604;
        uVar1 = *(ushort *)(iVar3 + 0x12);
        if (uVar1 == 5) {
          iVar3 = FUN_0800c710();
          if ((iVar3 != 0) || (psVar9[2] != 6)) goto LAB_0801c856;
          psVar5 = (short *)(param_1 + 0x62);
          sVar2 = 9;
LAB_0801c854:
          *psVar5 = sVar2;
        }
        else if (uVar1 < 6) {
          if (uVar1 == 3) {
            if (psVar9[2] == 4) {
              sVar2 = *(short *)(iVar3 + 0x16);
              if (sVar2 == 2) {
                sVar2 = psVar9[3] << 3;
LAB_0801c640:
                *(short *)(param_1 + 0x1ce) = *(short *)(param_1 + 0x1ce) - sVar2;
              }
              else if (sVar2 == 4) {
                sVar2 = psVar9[3] * 0xc;
                goto LAB_0801c640;
              }
              psVar5 = (short *)(param_1 + 0x1ce);
              if (*psVar5 < 0) {
                sVar2 = 0;
                goto LAB_0801c854;
              }
            }
            else if (psVar9[2] == 6) {
              piVar6 = (int *)(iVar7 + DAT_0801c604 + 0x150);
              local_24 = (uint)(*(ushort *)*piVar6 >> 4) << 8;
              local_20 = (*(ushort *)(*piVar6 + 2) & 0xfff) << 8;
              local_1c = DAT_0801c6b0;
              local_18 = DAT_0801c6b4;
              iVar3 = FUN_08021ef0(&local_24,param_1 + 0x14,&local_1c,&local_18);
              if (iVar3 != 0) {
                puVar8 = (ushort *)(param_1 + 0x1cc);
                iVar3 = (uint)*puVar8 + (uint)(ushort)psVar9[3] * -4;
                *puVar8 = (ushort)iVar3;
                if (iVar3 * 0x10000 < 0) {
                  *puVar8 = 0;
                }
              }
            }
          }
        }
        else if (((uVar1 == 7) && (psVar9[2] == 4)) &&
                ((iVar3 = FUN_0800c710(), iVar3 != 0 ||
                 (*(undefined1 *)(param_1 + DAT_0801c6f8) = 1, *(short *)(param_1 + 0xc) == 10)))) {
          *psVar9 = (short)DAT_0801c6fc;
        }
LAB_0801c856:
        if (*psVar9 != -2) {
          *psVar9 = *psVar9 + -1;
        }
      }
      uVar10 = uVar10 + 1;
      psVar9 = psVar9 + 0x14;
    } while (uVar10 < 8);
  }
  return unaff_lr;
}

