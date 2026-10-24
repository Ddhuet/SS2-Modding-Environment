
undefined8 FUN_080075ac(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  undefined4 unaff_lr;
  int local_34;
  uint local_30;
  uint local_28;
  
  if ((*DAT_080075d8 < 0x80) &&
     (iVar9 = *(int *)(param_1 + 0x14), *(ushort *)(param_1 + 0x10) <= *(ushort *)(iVar9 + 2))) {
    iVar4 = *DAT_080076cc;
    iVar7 = iVar9 + *(int *)(iVar9 + 8) + (uint)*(ushort *)(param_1 + 0x10) * 0xc;
    iVar7 = *(int *)(iVar9 + 4) + iVar9 +
            (uint)*(ushort *)(iVar7 + *(int *)(iVar7 + 8) + (uint)*(ushort *)(param_1 + 0x12) * 4) *
            0xc;
    puVar5 = (undefined4 *)(*(int *)(iVar7 + 8) + iVar7);
    pcVar12 = (char *)(*DAT_080075d8 * 8 + DAT_080076d0);
    local_34 = *DAT_080076d4 + iVar4 * 0x20;
    local_28 = 0;
    iVar9 = 0;
    local_30 = 0;
    if (*(short *)(iVar7 + 2) != 0) {
      pbVar10 = (byte *)(param_1 + 0x22);
      do {
        uVar8 = puVar5[1];
        *(undefined4 *)pcVar12 = *puVar5;
        *(undefined4 *)(pcVar12 + 4) = uVar8;
        *(undefined2 *)(pcVar12 + 6) = *(undefined2 *)(pcVar12 + 6);
        bVar1 = pcVar12[1];
        bVar2 = (byte)(((*pbVar10 & 0x7f) >> 4 & 3) << 2);
        pcVar12[1] = bVar1 & 0xf3 | bVar2;
        pcVar12[1] = bVar1 & 0xe3 | bVar2 | (byte)(((*pbVar10 & 0xf) >> 3) << 4);
        iVar13 = (int)*pcVar12 + *(int *)(param_1 + 0xc);
        iVar11 = ((int)((uint)*(ushort *)(pcVar12 + 2) << 0x17) >> 0x17) + *(int *)(param_1 + 8);
        if (((iVar11 + 0x40U < 0x131) && (iVar13 < 0xa1)) && (-0x41 < iVar13)) {
          local_34 = local_34 + iVar9;
          bVar3 = (*pbVar10 & 3) << 2;
          bVar2 = pcVar12[5];
          pcVar12[5] = bVar2 & 0xf3 | bVar3;
          pcVar12[5] = bVar2 & 3 | bVar3 |
                       *(char *)(*(int *)(param_1 + 0x1c) + (uint)(bVar2 >> 4)) << 4;
          *(ushort *)(pcVar12 + 2) =
               (ushort)DAT_08007754 & *(ushort *)(pcVar12 + 2) |
               (ushort)iVar11 & (ushort)DAT_08007750;
          *pcVar12 = (char)iVar13;
          *(ushort *)(pcVar12 + 4) =
               *(ushort *)(pcVar12 + 4) & (ushort)DAT_0800775c |
               (short)local_28 + (short)iVar4 & (ushort)DAT_08007758;
          if (bVar1 >> 6 == 0) {
            iVar9 = *(int *)((uint)((byte)pcVar12[3] >> 6) * 4 + DAT_080077e8);
          }
          else {
            iVar9 = *(int *)((uint)((byte)pcVar12[3] >> 6) * 4 + DAT_08007760);
          }
          local_28 = local_28 + iVar9 & 0xffff;
          uVar6 = *DAT_080077ec;
          *DAT_080077ec = uVar6 + 1;
          if (0x7f < uVar6 + 1) {
            iVar9 = 0;
            goto LAB_080077d6;
          }
          iVar9 = iVar9 * 0x20;
          FUN_08001348(*(int *)(param_1 + 0x18) +
                       (*(ushort *)(puVar5 + 1) & 0x3ff |
                       ((*(byte *)((int)puVar5 + 5) & 0xf) >> 2) << 10) * 0x20,local_34,iVar9);
        }
        else {
          *pcVar12 = -0x60;
          pcVar12[1] = pcVar12[1] & 0x3f;
          pcVar12[3] = pcVar12[3] & 0x3f;
          pcVar12 = pcVar12 + -8;
        }
        local_30 = local_30 + 1;
        pcVar12 = pcVar12 + 8;
        puVar5 = puVar5 + 2;
      } while (local_30 < *(ushort *)(iVar7 + 2));
    }
    *DAT_080077f0 = *DAT_080077f0 + local_28;
    iVar9 = *DAT_080077f4 + iVar4 * 0x20;
  }
  else {
    iVar9 = -1;
  }
LAB_080077d6:
  return CONCAT44(unaff_lr,iVar9);
}

