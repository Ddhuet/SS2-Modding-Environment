
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_08094dc4(char param_1,int param_2)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  undefined4 unaff_lr;
  undefined4 local_f0 [2];
  undefined4 local_e8;
  int local_e4;
  undefined1 auStack_d4 [7];
  undefined1 local_cd;
  undefined4 local_bc [7];
  undefined1 auStack_a0 [7];
  undefined1 local_99;
  undefined4 local_88 [7];
  undefined1 auStack_6c [8];
  undefined1 local_64;
  undefined2 local_54 [4];
  undefined2 local_4c;
  undefined1 auStack_4a [2];
  undefined1 auStack_48 [4];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined2 *local_24;
  
  param_1 = param_1 * '\x03';
  iVar4 = param_2 * 0x1000000 + -0x1000000 >> 0x18;
  FUN_08065784(local_f0,iVar4 + DAT_08094e44,7,0xffffffff,1);
  local_cd = 0;
  FUN_08065784(local_bc,DAT_08094e48,8,0xffffffff,1);
  FUN_08065784(local_88,DAT_08094e4c,8,0xffffffff,1);
  local_99 = 0;
  local_64 = 1;
  if (iVar4 == 1) {
    local_44 = 0x7800;
    local_40 = 0x7000;
  }
  else if (iVar4 < 2) {
    if (iVar4 == 0) {
      local_44 = 0x7800;
      local_40 = 0x7000;
    }
  }
  else if (iVar4 == 2) {
    local_44 = 0x7800;
    local_40 = 0x6000;
  }
  else if (iVar4 == 3) {
    local_44 = 0x8000;
    local_40 = 0x6800;
  }
  local_30 = 0;
  uVar6 = 0;
  uVar3 = 0;
  local_24 = &local_4c;
  do {
    local_24[uVar3] = 0;
    local_54[uVar3] = 0;
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 3);
  uVar3 = 4;
  FUN_0801a74c(6);
  while (iVar4 = FUN_0801a6dc(), iVar4 == 0) {
    FUN_080003f0();
  }
  FUN_08059a8c(DAT_08094eec);
  local_2c = local_bc;
  local_28 = local_88;
  do {
    if (uVar3 == 2) {
      if (local_34 == 0) {
        param_1 = param_1 + -1;
        local_34 = 0xf0;
        if (param_1 != '\0') {
          FUN_08059a8c(0x19c);
          goto LAB_08094fa2;
        }
      }
      else {
        local_3c = local_34 * *(short *)((local_30 + 0x40) * 2 + DAT_08094f84) + 0x7800;
        local_38 = local_34 * *(short *)(local_30 * 2 + DAT_08094f84) + 0x5000;
        local_34 = local_34 + -4;
        local_30 = local_30 + 2 & 0xff;
LAB_08094fa2:
        if (param_1 != '\0') goto LAB_08094fbc;
      }
      uVar3 = 1;
    }
    else if (uVar3 < 3) {
      if ((uVar3 == 1) && (uVar2 = uVar6 + 1, bVar1 = 0x78 < uVar6, uVar6 = uVar2, bVar1)) {
        uVar3 = 0;
      }
    }
    else if (uVar3 == 3) {
      if (DAT_08094f2c < local_40) {
        local_34 = 0xf0;
        uVar3 = 2;
        FUN_08059a8c(0x19c);
      }
      else {
        local_40 = local_40 + 0x1a0;
      }
    }
    else if ((uVar3 == 4) && (bVar1 = 0x78 < uVar6, uVar6 = uVar6 + 1, bVar1)) {
      uVar6 = 0;
      uVar3 = 3;
      FUN_08059a8c(DAT_08094f14);
    }
LAB_08094fbc:
    if (2 < uVar3) {
      FUN_08000af0(0x10,local_e4 + 0xe0,1);
      FUN_0806599c(local_f0,0,local_54,local_24,1);
      iVar4 = FUN_08007378(local_44 >> 8,0,0,local_54[0],0,auStack_d4,local_e8,local_f0[0]);
      *(int *)(iVar4 + 0xc) = local_40 >> 8;
    }
    if (uVar3 == 2) {
      FUN_08000af0(0x10,local_2c[3] + 0xe0,1);
      FUN_0806599c(local_2c,0,local_54 + 1,auStack_4a,1);
      iVar4 = local_3c >> 8;
      iVar5 = local_38 >> 8;
      FUN_08007378(iVar4,iVar5,0,local_54[1],1,auStack_a0,local_2c[2],local_bc[0]);
      if ((*DAT_080950c0 & 1) != 0) {
        FUN_08000af0(0x11,local_28[3] + 0x100,1);
        FUN_0806599c(local_28,0,local_54 + 2,auStack_48,1);
        iVar4 = FUN_0800747c(iVar4,0x9f,0,local_54[2],1,0,1,auStack_6c,local_28[2],local_88[0]);
        *(int *)(iVar4 + 0xc) = iVar5;
      }
    }
    FUN_080003f0();
    iVar4 = FUN_080021a8();
    if (iVar4 == 1) {
      uVar3 = 0;
    }
    if (uVar3 == 0) {
      FUN_0801a7e4(6);
      while (iVar4 = FUN_0801a6dc(), iVar4 == 0) {
        FUN_080003f0();
      }
      FUN_08059b00(3);
      FUN_080951b0();
      FUN_0800c568();
      FUN_0800c5b8();
      FUN_0809833c();
      return unaff_lr;
    }
  } while( true );
}

