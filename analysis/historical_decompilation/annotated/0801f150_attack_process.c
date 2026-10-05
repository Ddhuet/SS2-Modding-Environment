/*
 * attack_process  (0x0801F150)
 * 功能: 攻击处理函数(含物理吸血段)
 * 来源: 法术吸血
 * 原始Ghidra名: 0801f150_FUN_0801f150.c
 */

undefined4 FUN_0801f150(ushort *param_1,ushort *param_2,int param_3,uint param_4)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  ushort *puVar8;
  ushort *puVar9;
  undefined4 unaff_lr;
  undefined4 local_2c;
  uint local_28;
  int local_24;
  
  iVar4 = FUN_08068940();
  if (iVar4 == 0) {
    local_24 = 0;
    if ((param_4 & 1) == 0) {
      param_2[6] = 10;
      uVar6 = FUN_0801e358(param_1,param_2,param_3,0);
      uVar5 = DAT_0801f43c;
      local_28 = local_28 & DAT_0801f43c | uVar6 & 0xffff;
      uVar6 = local_2c & DAT_0801f444 | (uint)*(byte *)(DAT_0801f440 + param_3) << 0x10;
      uVar6 = DAT_0801f444 & uVar6 | ((uVar6 >> 0x10) + (uint)(byte)param_1[0x3d] & 0xff) << 0x10;
      local_2c = DAT_0801f444 & uVar6 | ((uVar6 >> 0x10) - *(int *)(param_2 + 0x1c2) & 0xff) << 0x10
      ;
      if ((local_2c >> 0x10 & 0x80) != 0) {
        local_2c = local_2c & DAT_0801f444;
      }
      if (*(int *)(param_2 + 0x1c2) == 0xff) {
        local_2c = local_2c & DAT_0801f444;
      }
      uVar6 = FUN_080b9a80((*(int *)(param_2 + 10) - *(int *)(param_1 + 0x4a)) * 0x100 >> 0x10,
                           (*(int *)(param_2 + 0xc) - *(int *)(param_1 + 0x4c)) * 0x100 >> 0x10);
      local_2c = local_2c & DAT_0801f44c |
                 (uint)*(byte *)(((uVar6 & 0xffff) >> 0xc) + DAT_0801f448) << 0x18;
      if ((param_1[0x13] == 5) && (param_1[0xb] == 8)) {
        uVar6 = FUN_080ba8a4((local_28 & 0xffff) *
                             (((*(uint *)(*(int *)(param_1 + 0xa8) + 4) & 0x1ffff) >> 0xe) + 5),10);
        local_28 = local_28 & uVar5 | uVar6 & 0xffff;
      }
      if ((*(char *)((int)param_2 + DAT_0801f450) == '\x01') && ((byte)param_1[0x3f] != 0)) {
        uVar5 = FUN_080ba8a4((local_28 & 0xffff) * (uint)(byte)param_1[0x3f],10);
        local_28 = local_28 & DAT_0801f43c | uVar5 & 0xffff;
      }
      if ((*(char *)((int)param_2 + DAT_0801f450) == '\x02') &&
         (*(byte *)((int)param_1 + 0x7d) != 0)) {
        uVar5 = FUN_080ba8a4((local_28 & 0xffff) * (uint)*(byte *)((int)param_1 + 0x7d),10);
        local_28 = local_28 & DAT_0801f43c | uVar5 & 0xffff;
      }
      if (param_1[9] == 2) {
        if (*(char *)((int)param_2 + DAT_0801f450) == '\x01') {
          uVar5 = FUN_0801deb0(*DAT_0801f454 + 0x38,4);
          uVar5 = FUN_080ba8a4((local_28 & 0xffff) * ((uVar5 & 0xffff) * 4 + 10),10);
          local_28 = local_28 & DAT_0801f43c | uVar5 & 0xffff;
        }
        uVar5 = FUN_0801deb0(*DAT_0801f454 + 0x38,3);
        sVar1 = FUN_080ba8a4((int)(short)param_2[0x1be],5);
        sVar1 = FUN_080ba8a4((uVar5 & 0xffff) * 100,sVar1 + 0x32);
        uVar7 = FUN_080008c8();
        uVar5 = FUN_080baaf4(uVar7,100);
        if (uVar5 < (uint)(int)sVar1) {
          local_24 = 1;
          FUN_08059a8c(0x132);
        }
      }
      puVar9 = param_1 + 0x66;
      uVar5 = local_28 & 0xffff;
      sVar1 = FUN_080ba8a4(uVar5 * (int)(char)param_1[0x39],100);
      *puVar9 = *puVar9 + sVar1;
      puVar8 = param_1 + 0x65;
      sVar1 = FUN_080ba8a4(uVar5 * (int)*(char *)((int)param_1 + 0x73),100);
      *puVar8 = sVar1 * 10 + *puVar8;
      if ((short)param_1[0x35] < (short)*puVar9) {
        *puVar9 = param_1[0x35];
      }
      if ((short)param_1[0x34] < (short)*puVar8) {
        *puVar8 = param_1[0x34];
      }
    }
    else {
      uVar5 = FUN_0801e358(param_1,param_2,param_3,1);
      local_28 = local_28 & DAT_0801f1b0 | uVar5 & 0xffff | 0x8000;
      local_2c = local_2c & DAT_0801f1b4 & DAT_0801f1b8 & DAT_0801f1bc;
    }
    FUN_080699ec(&local_2c,param_2 + 0x1c6,0,*(undefined2 *)(param_3 + 0x194),*param_2 + 4);
    iVar4 = FUN_0801e048(param_2,local_2c._1_1_);
    if (iVar4 == 0) {
      iVar4 = FUN_0801df08(param_2,0);
      if (iVar4 != 0) {
        FUN_0801d968(*param_2 + 4,iVar4,local_2c._1_1_);
      }
    }
    else {
      FUN_0801d968(*param_2 + 4,iVar4,local_2c._1_1_);
    }
    if (local_2c._1_1_ == '\x03') {
      FUN_08021d54(*param_2 + 4,1);
    }
    local_2c = CONCAT31(local_2c._1_3_,(char)param_2[1]);
    iVar4 = FUN_080020f4();
    param_2[0x2d] =
         (ushort)(1 << (*(ushort *)(iVar4 * 0x154 + DAT_0801f570) & 0xff)) | param_2[0x2d];
    *(undefined4 *)(param_2 + 0x2a) = *(undefined4 *)(param_1 + 0x72);
    puVar8 = param_2 + 0x25;
    *puVar8 = ((ushort)DAT_0801f574 & (ushort)local_28) + *puVar8;
    *(uint *)(param_2 + 0x26) = local_28 & 0xffff;
    param_2[0x31] = (ushort)local_2c._1_1_;
    if (*(char *)((int)param_2 + DAT_0801f578) != '\x03') {
      param_2[0x36] = 0;
      param_2[0x35] = 0;
      param_2[0x34] = (ushort)DAT_0801f57c;
    }
    FUN_0801f0a8(param_2,&local_2c);
    param_2[0x2c] = *param_1;
    FUN_0806671c(&local_2c);
    FUN_080696dc(param_2 + 0x1c6,*puVar8,0,*param_1,*param_2 + 4,*(undefined2 *)(param_3 + 0x194));
    if (param_1[9] == 5) {
      uVar2 = FUN_0801deb0(*DAT_0801f580 + 0x38,6);
      uVar3 = FUN_080008c8();
      if ((uVar3 & 0x3f) < uVar2) {
        FUN_08068750(param_2[1],6);
      }
    }
    if (local_24 != 0) {
      FUN_080686cc(param_2[1]);
    }
  }
  return unaff_lr;
}

