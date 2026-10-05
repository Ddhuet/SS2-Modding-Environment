
undefined8
FUN_080077f8(int param_1,int param_2,uint param_3,uint param_4,byte param_5,int param_6,int param_7,
            int param_8)

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
  char *pcVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 unaff_lr;
  int local_2c;
  uint local_28;
  
  if ((*DAT_08007830 < 0x80) && ((param_3 & 0xffff) <= (uint)*(ushort *)(param_7 + 2))) {
    iVar4 = *DAT_080078f4;
    iVar7 = param_7 + *(int *)(param_7 + 8) + (param_3 & 0xffff) * 0xc;
    iVar12 = *(int *)(param_7 + 4) + param_7 +
             (uint)*(ushort *)(iVar7 + *(int *)(iVar7 + 8) + (param_4 & 0xffff) * 4) * 0xc;
    puVar5 = (undefined4 *)(*(int *)(iVar12 + 8) + iVar12);
    pcVar10 = (char *)(*DAT_08007830 * 8 + DAT_080078f8);
    local_2c = *DAT_080078fc + iVar4 * 0x20;
    uVar13 = 0;
    iVar7 = 0;
    local_28 = 0;
    if (*(short *)(iVar12 + 2) != 0) {
      do {
        uVar8 = puVar5[1];
        *(undefined4 *)pcVar10 = *puVar5;
        *(undefined4 *)(pcVar10 + 4) = uVar8;
        *(undefined2 *)(pcVar10 + 6) = *(undefined2 *)(pcVar10 + 6);
        bVar1 = pcVar10[1];
        pcVar10[1] = bVar1 & 0xf3;
        iVar11 = *pcVar10 + param_2;
        iVar9 = ((int)((uint)*(ushort *)(pcVar10 + 2) << 0x17) >> 0x17) + param_1;
        if (((iVar9 + 0x40U < 0x131) && (iVar11 < 0xa1)) && (-0x41 < iVar11)) {
          local_2c = local_2c + iVar7;
          bVar3 = (param_5 & 3) << 2;
          bVar2 = pcVar10[5];
          pcVar10[5] = bVar2 & 0xf3 | bVar3;
          pcVar10[5] = bVar2 & 3 | bVar3 | *(char *)(param_6 + (uint)(bVar2 >> 4)) << 4;
          *(ushort *)(pcVar10 + 2) =
               (ushort)DAT_08007974 & *(ushort *)(pcVar10 + 2) |
               (ushort)iVar9 & (ushort)DAT_08007970;
          *pcVar10 = (char)iVar11;
          *(ushort *)(pcVar10 + 4) =
               *(ushort *)(pcVar10 + 4) & (ushort)DAT_0800797c |
               (short)iVar4 + (short)uVar13 & (ushort)DAT_08007978;
          if (bVar1 >> 6 == 0) {
            iVar7 = *(int *)((uint)((byte)pcVar10[3] >> 6) * 4 + DAT_08007a04);
          }
          else {
            iVar7 = *(int *)((uint)((byte)pcVar10[3] >> 6) * 4 + DAT_08007980);
          }
          uVar13 = uVar13 + iVar7 & 0xffff;
          uVar6 = *DAT_08007a08;
          *DAT_08007a08 = uVar6 + 1;
          if (0x7f < uVar6 + 1) {
            iVar4 = 0;
            goto LAB_080079f2;
          }
          iVar7 = iVar7 * 0x20;
          FUN_08001348(param_8 + (*(ushort *)(puVar5 + 1) & 0x3ff |
                                 ((*(byte *)((int)puVar5 + 5) & 0xf) >> 2) << 10) * 0x20,local_2c,
                       iVar7);
        }
        else {
          *pcVar10 = -0x60;
          pcVar10[1] = pcVar10[1] & 0x3f;
          pcVar10[3] = pcVar10[3] & 0x3f;
          pcVar10 = pcVar10 + -8;
        }
        local_28 = local_28 + 1;
        pcVar10 = pcVar10 + 8;
        puVar5 = puVar5 + 2;
      } while (local_28 < *(ushort *)(iVar12 + 2));
    }
    *DAT_08007a0c = *DAT_08007a0c + uVar13;
    iVar4 = *DAT_08007a10 + iVar4 * 0x20;
  }
  else {
    iVar4 = -1;
  }
LAB_080079f2:
  return CONCAT44(unaff_lr,iVar4);
}

