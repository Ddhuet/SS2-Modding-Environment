
undefined8
FUN_080082b0(int param_1,int param_2,uint param_3,uint param_4,byte param_5,int param_6,int param_7,
            int param_8,byte param_9)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 unaff_lr;
  int local_30;
  uint local_2c;
  
  if ((*DAT_080082f0 < 0x80) && ((param_3 & 0xffff) <= (uint)*(ushort *)(param_7 + 2))) {
    iVar4 = *DAT_080083b4;
    iVar7 = param_7 + *(int *)(param_7 + 8) + (param_3 & 0xffff) * 0xc;
    iVar12 = *(int *)(param_7 + 4) + param_7 +
             (uint)*(ushort *)(iVar7 + *(int *)(iVar7 + 8) + (param_4 & 0xffff) * 4) * 0xc;
    puVar5 = (undefined4 *)(*(int *)(iVar12 + 8) + iVar12);
    pcVar9 = (char *)(*DAT_080082f0 * 8 + DAT_080083b8);
    local_30 = *DAT_080083bc + iVar4 * 0x20;
    uVar13 = 0;
    iVar7 = 0;
    local_2c = 0;
    if (*(short *)(iVar12 + 2) != 0) {
      bVar3 = (param_5 & 3) << 2;
      do {
        uVar8 = puVar5[1];
        *(undefined4 *)pcVar9 = *puVar5;
        *(undefined4 *)(pcVar9 + 4) = uVar8;
        *(undefined2 *)(pcVar9 + 6) = *(undefined2 *)(pcVar9 + 6);
        iVar11 = *pcVar9 + param_2;
        iVar10 = ((int)((uint)*(ushort *)(pcVar9 + 2) << 0x17) >> 0x17) + param_1;
        if (((iVar10 + 0x40U < 0x131) && (iVar11 < 0xa1)) && (-0x41 < iVar11)) {
          bVar1 = pcVar9[1];
          pcVar9[1] = bVar1 & 0xf3 | (param_9 & 3) << 2;
          local_30 = local_30 + iVar7;
          bVar2 = pcVar9[5];
          pcVar9[5] = bVar2 & 0xf3 | bVar3;
          pcVar9[5] = bVar2 & 3 | bVar3 | *(char *)(param_6 + (uint)(bVar2 >> 4)) << 4;
          *(ushort *)(pcVar9 + 2) =
               (ushort)DAT_08008440 & *(ushort *)(pcVar9 + 2) |
               (ushort)iVar10 & (ushort)DAT_0800843c;
          *pcVar9 = (char)iVar11;
          *(ushort *)(pcVar9 + 4) =
               *(ushort *)(pcVar9 + 4) & (ushort)DAT_08008448 |
               (short)iVar4 + (short)uVar13 & (ushort)DAT_08008444;
          if (bVar1 >> 6 == 0) {
            iVar7 = *(int *)((uint)((byte)pcVar9[3] >> 6) * 4 + DAT_080084d0);
          }
          else {
            iVar7 = *(int *)((uint)((byte)pcVar9[3] >> 6) * 4 + DAT_0800844c);
          }
          uVar13 = uVar13 + iVar7 & 0xffff;
          uVar6 = *DAT_080084d4;
          *DAT_080084d4 = uVar6 + 1;
          if (0x7f < uVar6 + 1) {
            iVar4 = 0;
            goto LAB_080084be;
          }
          iVar7 = iVar7 * 0x20;
          FUN_08001348(param_8 + (((*(byte *)((int)puVar5 + 5) & 0xf) >> 2) << 10 |
                                 *(ushort *)(puVar5 + 1) & 0x3ff) * 0x20,local_30,iVar7);
        }
        else {
          *pcVar9 = -0x60;
          pcVar9[1] = pcVar9[1] & 0x3f;
          pcVar9[3] = pcVar9[3] & 0x3f;
          pcVar9 = pcVar9 + -8;
        }
        local_2c = local_2c + 1;
        pcVar9 = pcVar9 + 8;
        puVar5 = puVar5 + 2;
      } while (local_2c < *(ushort *)(iVar12 + 2));
    }
    *DAT_080084d8 = *DAT_080084d8 + uVar13;
    iVar4 = *DAT_080084dc + iVar4 * 0x20;
  }
  else {
    iVar4 = -1;
  }
LAB_080084be:
  return CONCAT44(unaff_lr,iVar4);
}

