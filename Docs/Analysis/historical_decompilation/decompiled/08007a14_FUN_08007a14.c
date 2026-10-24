
undefined8
FUN_08007a14(int param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6,int param_7,
            int param_8,uint param_9,uint param_10,uint param_11)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  undefined4 unaff_lr;
  uint local_58;
  uint local_54;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  
  local_48 = param_5 & 0xff;
  local_44 = param_9 & 0xffff;
  local_40 = param_10 & 0xffff;
  local_3c = param_11 & 0xffff;
  if ((*DAT_08007a68 < 0x80) && ((param_3 & 0xffff) <= (uint)*(ushort *)(param_7 + 2))) {
    local_34 = *DAT_08007b1c;
    local_30 = *DAT_08007b20;
    iVar4 = param_7 + *(int *)(param_7 + 8) + (param_3 & 0xffff) * 0xc;
    iVar11 = *(int *)(param_7 + 4) + param_7 +
             (uint)*(ushort *)(iVar4 + *(int *)(iVar4 + 8) + (param_4 & 0xffff) * 4) * 0xc;
    pcVar10 = (char *)(iVar11 + *(int *)(iVar11 + 8));
    puVar7 = (undefined4 *)(*DAT_08007a68 * 8 + DAT_08007b24);
    iVar4 = *DAT_08007b28 + local_34 * 0x20;
    uVar12 = 0;
    iVar9 = 0;
    local_38 = 0;
    local_50 = param_1;
    local_4c = param_2;
    if (*(short *)(iVar11 + 2) != 0) {
      do {
        uVar5 = *(undefined4 *)(pcVar10 + 4);
        *puVar7 = *(undefined4 *)pcVar10;
        puVar7[1] = uVar5;
        *(undefined2 *)((int)puVar7 + 6) = *(undefined2 *)((int)puVar7 + 6);
        iVar8 = *pcVar10 + local_4c;
        iVar6 = ((int)((uint)*(ushort *)(pcVar10 + 2) << 0x17) >> 0x17) + local_50;
        if (((iVar6 + 0x40U < 0x131) && (iVar8 < 0xa1)) && (-0x41 < iVar8)) {
          local_24 = (local_48 & 3) << 2;
          bVar1 = *(byte *)((int)puVar7 + 5);
          *(byte *)((int)puVar7 + 5) = bVar1 & 0xf3 | (byte)local_24;
          *(byte *)((int)puVar7 + 5) =
               bVar1 & 3 | (byte)local_24 | *(char *)(param_6 + (uint)(bVar1 >> 4)) << 4;
          *(ushort *)((int)puVar7 + 2) =
               *(ushort *)((int)puVar7 + 2) & (ushort)DAT_08007b98 |
               (ushort)iVar6 & (ushort)DAT_08007b94;
          *(char *)puVar7 = (char)iVar8;
          *(ushort *)(puVar7 + 1) =
               *(ushort *)(puVar7 + 1) & (ushort)DAT_08007ba0 |
               (short)local_34 + (short)uVar12 & (ushort)DAT_08007b9c;
          iVar4 = iVar4 + iVar9;
          iVar9 = DAT_08007cc0;
          if (*(byte *)((int)puVar7 + 1) >> 6 != 0) {
            iVar9 = DAT_08007ba4;
          }
          bVar1 = *(byte *)((int)puVar7 + 3);
          iVar9 = *(int *)((uint)(bVar1 >> 6) * 4 + iVar9);
          uVar12 = uVar12 + iVar9 & 0xffff;
          *(byte *)((int)puVar7 + 1) = *(byte *)((int)puVar7 + 1) & 0xfc | 1;
          local_2c = (bVar1 & 0x11) >> 4;
          local_28 = (bVar1 & 0x31) >> 5;
          *(byte *)((int)puVar7 + 3) =
               bVar1 & 0xc1 | (byte)((local_30 & 3) << 1) | (byte)((local_30 >> 2 & 1) << 4) |
               (byte)((local_30 >> 3 & 1) << 5);
          uVar3 = *DAT_08007cc4;
          *DAT_08007cc4 = uVar3 + 1;
          if (0x7f < uVar3 + 1) {
            iVar4 = 0;
            goto LAB_08007cb0;
          }
          iVar9 = iVar9 * 0x20;
          FUN_08001348(param_8 + (*(ushort *)(pcVar10 + 4) & 0x3ff |
                                 (((byte)pcVar10[5] & 0xf) >> 2) << 10) * 0x20,iVar4,iVar9);
        }
        else {
          *(byte *)((int)puVar7 + 3) = *(byte *)((int)puVar7 + 3) & 0x3f;
          *(byte *)((int)puVar7 + 1) = *(byte *)((int)puVar7 + 1) & 0x3f;
          puVar7 = puVar7 + -2;
        }
        local_38 = local_38 + 1;
        puVar7 = puVar7 + 2;
        pcVar10 = pcVar10 + 8;
      } while (local_38 < *(ushort *)(iVar11 + 2));
    }
    piVar2 = DAT_08007ccc;
    iVar4 = *DAT_08007ccc * 0x20 + DAT_08007cc8;
    *DAT_08007ccc = *DAT_08007ccc + 1;
    if (local_28 != 0) {
      local_40 = local_40 * -0x10000 >> 0x10;
    }
    if (local_2c != 0) {
      local_44 = local_44 * -0x10000 >> 0x10;
    }
    local_58 = local_44 | local_40 << 0x10;
    local_54 = local_54 & DAT_08007cd0 | local_3c;
    FUN_080b9a94(&local_58,iVar4 + 6,1,8);
    *DAT_08007cd4 = *DAT_08007cd4 + uVar12;
    iVar4 = *piVar2;
  }
  else {
    iVar4 = -1;
  }
LAB_08007cb0:
  return CONCAT44(unaff_lr,iVar4);
}

