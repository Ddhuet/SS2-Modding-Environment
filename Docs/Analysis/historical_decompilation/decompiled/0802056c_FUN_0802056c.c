
undefined4 FUN_0802056c(ushort *param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  ushort *puVar12;
  undefined4 unaff_lr;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  ushort *local_24;
  
  iVar6 = FUN_0800c748();
  if (iVar6 != 0) {
    return unaff_lr;
  }
  iVar6 = FUN_0800ca6c();
  if (iVar6 != 0) {
    return unaff_lr;
  }
  iVar6 = FUN_0801a874();
  if (iVar6 == 0) {
    return unaff_lr;
  }
  iVar6 = FUN_08066110();
  if (iVar6 != 0) {
    return unaff_lr;
  }
  if (param_1[0x1ce] == DAT_0802087c) {
    iVar6 = FUN_0800c61c();
    uVar5 = 2;
    if (iVar6 == 0) goto LAB_080205bc;
  }
  uVar5 = param_1[6];
LAB_080205bc:
  if ((((0x14 < *(byte *)((int)param_1 + DAT_08020880)) ||
       (*(byte *)((int)param_1 + DAT_08020880) < 0x13)) && (uVar5 == 2)) &&
     ((param_1[0x1ce] == DAT_0802087c ||
      (((uint)param_1[0x35] == (uint)param_1[0x1ce] && (param_1[0x36] == 1)))))) {
    local_28 = FUN_08006d98(param_1[0x1d0] | 0xb0000);
    if (*(short *)(local_28 + 0x174) != 7) {
      if ((*(byte *)((int)param_1 + DAT_08020884) & 2) == 0) {
        iVar6 = FUN_080020f4();
        puVar12 = (ushort *)(iVar6 * 0x154 + DAT_08020a3c);
        uVar10 = *(uint *)(puVar12 + 0x1c);
        if ((((((((uVar10 & 2) == 0) && ((uVar10 & 0x2000) == 0)) && ((uVar10 & 0x400) == 0)) &&
              ((iVar6 = FUN_0805a1e4(), iVar6 == 0 && (puVar12[0x8e] == 0)))) &&
             (((char)puVar12[0x38] != '\0' &&
              ((uVar5 = puVar12[0x13], 1 < (ushort)(uVar5 - 10) && (uVar5 != 0xd)))))) &&
            (uVar5 != 0xc)) &&
           (((uVar5 != 0xe && (iVar6 = FUN_0800c61c(), iVar6 == 0)) &&
            ((int)(-(*(uint *)(puVar12 + (uint)*param_1 * 2 + 0x76) ^ *(uint *)(param_1 + 0x28)) |
                  *(uint *)(puVar12 + (uint)*param_1 * 2 + 0x76) ^ *(uint *)(param_1 + 0x28)) < 0)))
           ) {
          local_28 = FUN_08006d98(param_1[0x1d0] | 0xb0000);
          iVar6 = FUN_0801ede8(local_28,param_1[4],param_1 + 10,puVar12 + 0x4a,0x10,0x10);
          if (iVar6 != 0) {
            sVar3 = FUN_080ba8a4((*(short *)((int)param_1 + DAT_08020a40) + 10) * 0x7d,
                                 (int)*(short *)((int)param_1 + DAT_08020a40) +
                                 (int)(short)puVar12[0x21] + 0x14);
            uVar4 = FUN_080008c8();
            uVar10 = FUN_080baaf4(uVar4,100);
            if ((int)sVar3 < (int)(uVar10 & 0xffff)) {
              *(undefined4 *)(puVar12 + (uint)*param_1 * 2 + 0x76) = *(undefined4 *)(param_1 + 0x28)
              ;
              FUN_08059a8c(0x55);
            }
            else {
              uVar8 = FUN_080008c8();
              uVar5 = FUN_080baaf4(uVar8,100);
              if (((byte)puVar12[0x3b] == 0) || ((byte)puVar12[0x3b] <= uVar5)) {
                puVar12[0x13] = 10;
                puVar12[0x5c] = (ushort)DAT_08020a44;
                uVar10 = FUN_0801eb4c(param_1,puVar12);
                uVar9 = uVar10 & 0xffff;
                if ((uVar10 & 0x8000) == 0) {
                  FUN_08059a8c(0x1a);
                  if (puVar12[9] == 8) {
                    FUN_08059a8c(0x4b);
                  }
                  else {
                    FUN_08059a8c(puVar12[9] + 0x45);
                  }
                }
                else {
                  FUN_08059a8c(0x27);
                  uVar9 = uVar9 & DAT_08020a48;
                }
                puVar12[0x48] = puVar12[0x48] + (short)uVar9;
                *(undefined4 *)(puVar12 + (uint)*param_1 * 2 + 0x76) =
                     *(undefined4 *)(param_1 + 0x28);
                *(uint *)(puVar12 + 0x8c) = *param_1 + 5;
                local_34._0_3_ =
                     CONCAT12(*(undefined1 *)(local_28 + DAT_08020aec),(undefined2)local_34);
                FUN_0801f0fc(puVar12,&local_34);
                puVar12[0x6c] = param_1[4];
                FUN_080699ec(&local_34,puVar12 + 0x2a,0,*(undefined2 *)(local_28 + 0x194),*puVar12);
                *(uint *)(puVar12 + 0x74) = (uint)local_34._1_1_;
                FUN_08069888(local_34._1_1_,uVar9,*DAT_08020af0 + 0x2c);
                iVar6 = FUN_0801dfa8(puVar12,local_34._1_1_);
                if (iVar6 == 0) {
                  iVar6 = FUN_0801df68(puVar12,0);
                  if (iVar6 != 0) {
                    FUN_0801d968(*puVar12,iVar6,local_34._1_1_);
                  }
                }
                else {
                  FUN_0801d968(*puVar12,iVar6,local_34._1_1_);
                }
                FUN_080696dc(puVar12 + 0x2a,uVar9,0,*param_1 + 4,*puVar12,
                             *(undefined2 *)(local_28 + 0x194));
              }
              else {
                FUN_08022414(*(undefined4 *)(puVar12 + 0x4a),*(undefined4 *)(puVar12 + 0x4c));
                uVar10 = FUN_0801eb4c(param_1,puVar12);
                uVar9 = uVar10 & 0xffff;
                if ((uVar10 & 0x8000) != 0) {
                  uVar9 = uVar9 & DAT_08020b6c;
                }
                sVar3 = (short)(uVar9 >> 2);
                sVar2 = sVar3;
                if (uVar9 >> 2 == 0) {
                  sVar2 = 1;
                }
                puVar12[0x49] = puVar12[0x49] + sVar2;
                *(undefined4 *)(puVar12 + (uint)*param_1 * 2 + 0x76) =
                     *(undefined4 *)(param_1 + 0x28);
                *(uint *)(puVar12 + 0x8c) = *param_1 + 5;
                FUN_08059a8c(0x164);
                uVar8 = FUN_080008c8();
                uVar5 = FUN_080baaf4(uVar8,100);
                if ((*(byte *)((int)puVar12 + 0x77) != 0) &&
                   (uVar5 <= *(byte *)((int)puVar12 + 0x77))) {
                  uVar5 = (short)uVar9 - sVar3;
                  local_30 = CONCAT22(local_30._2_2_,uVar5);
                  param_1[6] = 10;
                  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(puVar12 + 0x72);
                  local_34 = (uint)(param_1[1] & 0xff);
                  param_1[0x25] = uVar5 + param_1[0x25];
                  *(uint *)(param_1 + 0x26) = (uint)uVar5;
                  param_1[0x31] = 0;
                  FUN_0801f0a8(param_1,&local_34);
                  param_1[0x2c] = *puVar12;
                  param_1[0x2d] = (ushort)(1 << (*puVar12 & 0xff)) | param_1[0x2d];
                  if (*(char *)((int)param_1 + DAT_08020c24) != '\x03') {
                    param_1[0x34] = (ushort)DAT_08020c28;
                  }
                  FUN_0806671c(&local_34);
                }
              }
            }
          }
        }
      }
      else {
        iVar6 = FUN_08002204();
        if (iVar6 != 0) {
          local_2c = 0;
          local_24 = param_1 + 0x1c6;
          do {
            if (((local_2c != *param_1) && ((*DAT_08020888 & 1 << (local_2c & 0xff)) != 0)) &&
               (iVar6 = *DAT_0802088c + DAT_08020890 * local_2c,
               1 < (ushort)(*(short *)(iVar6 + 0xc) - 0xbU))) {
              uVar10 = *(uint *)(param_1 + 0x28) ^ *(uint *)(iVar6 + 0x54);
              uVar10 = (-uVar10 | uVar10) >> 0x1f;
              puVar12 = (ushort *)(iVar6 + 0x4a);
              if ((int)((int)*(short *)(iVar6 + 0x5c) - (uint)*puVar12) < 1) {
                uVar10 = 0;
              }
              if (*(char *)(iVar6 + 0x1dc) == '\0') {
                uVar10 = 0;
              }
              if ((uVar10 != 0) &&
                 (iVar7 = FUN_0801ede8(local_28,param_1[4],param_1 + 10,iVar6 + 0x14,
                                       *(undefined1 *)(iVar6 + DAT_08020894),
                                       *(undefined1 *)(iVar6 + DAT_08020898)), iVar7 != 0)) {
                sVar3 = FUN_080ba8a4((*(short *)((int)param_1 + DAT_0802089c) + 10) * 0x7d,
                                     (int)*(short *)((int)param_1 + DAT_0802089c) +
                                     (int)*(short *)(iVar6 + DAT_0802089c) + 0x14);
                uVar4 = FUN_080008c8();
                uVar10 = FUN_080baaf4(uVar4,100);
                if ((int)(uVar10 & 0xffff) <= (int)sVar3) {
                  FUN_08059a8c(0x1a);
                  uVar10 = FUN_0801ecd4(param_1,iVar6);
                  local_30 = local_30 & DAT_080208a0 | uVar10 & 0xffff;
                  pbVar11 = (byte *)(local_28 + 0x194);
                  uVar10 = DAT_080208ac & (local_34 & DAT_080208a4 | (uint)*pbVar11 << 8) |
                           (uint)*(byte *)(local_28 + DAT_080208a8) << 0x10;
                  local_34 = DAT_080208ac & uVar10 |
                             ((uVar10 >> 0x10) - *(int *)(iVar6 + 900) & 0xff) << 0x10;
                  if ((local_34 >> 0x10 & 0x80) != 0) {
                    local_34 = local_34 & DAT_080208ac;
                  }
                  if (*(int *)(iVar6 + 900) == 0xff) {
                    local_34 = local_34 & DAT_080208ac;
                  }
                  uVar10 = FUN_080b9a80((*(int *)(iVar6 + 0x14) - *(int *)(param_1 + 10)) * 0x100 >>
                                        0x10,(*(int *)(iVar6 + 0x18) - *(int *)(param_1 + 0xc)) *
                                             0x100 >> 0x10);
                  bVar1 = *(byte *)(((uVar10 & 0xffff) >> 0xc) + DAT_080208b0);
                  local_34 = local_34 & DAT_080208b4;
                  *(undefined2 *)(iVar6 + 0xc) = 10;
                  *(undefined4 *)(iVar6 + 0x54) = *(undefined4 *)(param_1 + 0x28);
                  local_34 = (local_34 | (uint)bVar1 << 0x18) & DAT_080208b8 |
                             (uint)*(byte *)(iVar6 + 2);
                  *puVar12 = (short)local_30 + *puVar12;
                  *(uint *)(iVar6 + 0x4c) = local_30 & 0xffff;
                  *(short *)(iVar6 + 0x68) = (short)DAT_080208bc;
                  FUN_080699ec(&local_34,local_24,0,*(undefined2 *)pbVar11,*param_1 + 4);
                  *(ushort *)(iVar6 + 0x62) = (ushort)local_34._1_1_;
                  FUN_0801f0a8(iVar6,&local_34);
                  *(ushort *)(iVar6 + 0x58) = *param_1;
                  iVar7 = FUN_080020f4();
                  *(ushort *)(iVar6 + 0x5a) =
                       (ushort)(1 << (*(ushort *)(iVar7 * 0x154 + DAT_080208c0) & 0xff)) |
                       *(ushort *)(iVar6 + 0x5a);
                  FUN_0806671c(&local_34);
                  FUN_080696dc(local_24,local_30 & 0xffff,0,*param_1 + 4,*param_1 + 4,
                               *(undefined2 *)pbVar11);
                }
              }
            }
            local_2c = local_2c + 1;
          } while (local_2c < 5);
        }
      }
    }
  }
  return unaff_lr;
}

