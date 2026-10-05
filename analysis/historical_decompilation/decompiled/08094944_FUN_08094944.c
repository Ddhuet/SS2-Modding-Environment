
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_08094944(uint param_1,int param_2)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_r10;
  undefined4 unaff_lr;
  bool bVar7;
  undefined4 local_d8 [2];
  undefined4 local_d0;
  int local_cc;
  undefined1 auStack_bc [7];
  undefined1 local_b5;
  undefined4 local_a4 [2];
  int local_9c;
  int local_98;
  undefined1 auStack_88 [8];
  undefined1 local_80;
  short local_70 [4];
  undefined2 local_68;
  undefined1 local_66 [2];
  undefined1 local_64 [4];
  int local_60;
  int local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  short *local_40;
  short *local_3c;
  undefined2 *local_38;
  uint local_34;
  undefined1 *local_30;
  int local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  
  local_50 = (param_1 & 0x7f) << 1;
  local_54 = 0;
  FUN_08065784(local_d8,(param_2 * 0x1000000 + -0x1000000 >> 0x18) + DAT_08094a08,7,0xffffffff,1);
  local_b5 = (undefined1)local_54;
  FUN_08065784(local_a4,DAT_08094a0c,8,0xffffffff,1);
  local_80 = 1;
  local_60 = 0x7800;
  local_5c = 0x5000;
  uVar3 = 0;
  local_38 = &local_68;
  local_40 = local_70 + 1;
  local_30 = local_66;
  local_44 = auStack_88;
  local_3c = local_70 + 2;
  local_28 = local_64;
  local_24 = auStack_bc;
  do {
    local_38[uVar3] = 0;
    local_70[uVar3] = 0;
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 3);
  local_70[1] = *(short *)(local_9c + *(int *)(local_9c + 8) + 4) + -1;
  FUN_0801a74c(6);
  local_34 = local_60 >> 8;
  local_2c = local_5c >> 8;
  while (iVar2 = FUN_0801a6dc(), iVar2 == 0) {
    FUN_080003f0();
  }
  *(short *)(DAT_08094b90 + 0x3a) = (short)DAT_08094b94;
  local_4c = 1;
  FUN_08059a8c(0x1a0);
  local_48 = local_44;
  do {
    FUN_08000af0(0x11,local_98 + 0x100,1);
    FUN_080659c0(local_a4,0,local_40,local_30,0);
    uVar3 = local_34 & 0xffff;
    uVar4 = local_2c << 0x10;
    uVar5 = (unaff_r10 & DAT_08094b98 | uVar3) & DAT_08094b9c;
    uVar6 = uVar5 | uVar4;
    iVar2 = FUN_0800747c((int)(short)uVar5,0x9e,0,local_70[1],1,0,2,local_48,local_9c,local_a4[0]);
    *(int *)(iVar2 + 0xc) = (int)uVar6 >> 0x10;
    FUN_08000af0(0x11,local_98 + 0x100,1);
    local_58 = FUN_0806599c(local_a4,0,local_3c,local_28,0);
    uVar5 = (uVar6 & DAT_08094b98 | uVar3) & DAT_08094b9c;
    uVar6 = uVar5 | uVar4;
    iVar2 = FUN_08007378((int)(short)uVar5,0x9f,0,local_70[2],1,local_48,local_9c,local_a4[0]);
    *(int *)(iVar2 + 0xc) = (int)uVar6 >> 0x10;
    FUN_08000af0(0x10,local_cc + 0xe0,1);
    FUN_0806599c(local_d8,0,local_70,local_38,1);
    uVar3 = (uVar6 & DAT_08094b98 | uVar3) & DAT_08094b9c;
    unaff_r10 = uVar3 | uVar4;
    FUN_08007378((int)(short)uVar3,(int)unaff_r10 >> 0x10,0,local_70[0],0,local_24,local_d0,
                 local_d8[0]);
    puVar1 = local_38;
    if (local_58 != 0) {
      local_38[2] = 0;
      puVar1[1] = 0;
      local_70[2] = 0;
      local_70[1] = *(short *)(local_9c + *(int *)(local_9c + 8) + 4) + -1;
      uVar3 = local_54 + 1 & 0xff;
      bVar7 = local_50 < local_54;
      local_54 = uVar3;
      if (bVar7) {
        local_4c = 0;
      }
    }
    FUN_080003f0();
    iVar2 = FUN_080021a8();
    if (iVar2 == 1) {
      local_4c = 0;
    }
  } while (local_4c != 0);
  FUN_0801a7e4(6);
  while (iVar2 = FUN_0801a6dc(), iVar2 == 0) {
    FUN_080003f0();
  }
  FUN_08059b00(3);
  FUN_08094c74();
  FUN_0800c568();
  FUN_0800c5b8();
  FUN_0809833c();
  *(undefined2 *)(DAT_08094be8 + 0x3a) = 0;
  FUN_080009f8(0xf00,0x8000,0);
  return unaff_lr;
}

