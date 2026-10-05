
undefined4 FUN_080507a8(void)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_lr;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int *local_6c;
  int *local_68;
  int *local_64;
  int *local_60;
  uint local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  
  sVar2 = *(short *)(DAT_08050878 + 0x80);
  sVar1 = *(short *)(DAT_08050878 + 0x82);
  uVar3 = 0;
  local_6c = &local_b8;
  local_68 = &local_b4;
  local_64 = &local_b0;
  local_60 = &local_ac;
  local_58 = &local_a8;
  local_54 = &local_a4;
  local_50 = &local_a0;
  local_4c = &local_9c;
  local_48 = &local_98;
  local_44 = &local_94;
  local_40 = &local_90;
  local_3c = &local_8c;
  local_38 = &local_88;
  local_34 = &local_84;
  local_30 = &local_80;
  local_2c = &local_7c;
  local_28 = &local_78;
  local_24 = &local_74;
  do {
    iVar6 = (int)(short)uVar3;
    FUN_08066020(&local_c0,(int)sVar2,0,iVar6);
    FUN_08066020(&local_bc,(int)sVar1,0xffffffff,iVar6);
    FUN_0800b4fc((int)(short)local_c0,(int)(short)local_bc);
    FUN_0809802c(-local_c0,-local_bc);
    FUN_080003f0();
    uVar3 = iVar6 + 0x200U & 0xffff;
  } while ((int)((iVar6 + 0x200U) * 0x10000) >> 0x10 < 0x401);
  sVar2 = 2;
  do {
    FUN_080003f0();
    iVar6 = FUN_080021a8();
    if (iVar6 != 0) break;
    sVar2 = sVar2 + -1;
  } while (sVar2 != 0);
  sVar2 = *(short *)(DAT_08050904 + 0x80);
  sVar1 = *(short *)(DAT_08050904 + 0x82);
  uVar3 = 0;
  do {
    iVar6 = (int)(short)uVar3;
    FUN_08066020(local_6c,(int)sVar2,0,iVar6);
    FUN_08066020(local_68,(int)sVar1,0,iVar6);
    FUN_0800b4fc((int)(short)local_b8,(int)(short)local_b4);
    FUN_0809802c(-local_b8,-local_b4);
    FUN_080003f0();
    uVar3 = iVar6 + 0x200U & 0xffff;
  } while ((int)((iVar6 + 0x200U) * 0x10000) >> 0x10 < 0x401);
  sVar2 = 2;
  do {
    FUN_080003f0();
    iVar4 = FUN_080021a8();
    iVar6 = DAT_08050994;
    if (iVar4 != 0) break;
    sVar2 = sVar2 + -1;
  } while (sVar2 != 0);
  sVar2 = *(short *)(DAT_08050990 + 0x80);
  sVar1 = *(short *)(DAT_08050990 + 0x82);
  uVar3 = 0;
  do {
    iVar4 = (int)(short)uVar3;
    FUN_08066020(local_64,(int)sVar2,0,iVar4);
    FUN_08066020(local_60,(int)sVar1,iVar6 >> 0x10,iVar4);
    FUN_0800b4fc((int)(short)local_b0,(int)(short)local_ac);
    FUN_0809802c(-local_b0,-local_ac);
    FUN_080003f0();
    uVar3 = iVar4 + 0x200U & 0xffff;
  } while ((int)((iVar4 + 0x200U) * 0x10000) >> 0x10 < 0x401);
  sVar2 = 2;
  do {
    FUN_080003f0();
    iVar6 = FUN_080021a8();
    if (iVar6 != 0) break;
    sVar2 = sVar2 + -1;
  } while (sVar2 != 0);
  sVar2 = *(short *)(DAT_08050a20 + 0x80);
  sVar1 = *(short *)(DAT_08050a20 + 0x82);
  uVar3 = 0;
  do {
    iVar6 = (int)(short)uVar3;
    FUN_08066020(local_58,(int)sVar2,0,iVar6);
    FUN_08066020(local_54,(int)sVar1,0,iVar6);
    FUN_0800b4fc((int)(short)local_a8,(int)(short)local_a4);
    FUN_0809802c(-local_a8,-local_a4);
    FUN_080003f0();
    uVar3 = iVar6 + 0x200U & 0xffff;
  } while ((int)((iVar6 + 0x200U) * 0x10000) >> 0x10 < 0x401);
  sVar2 = 2;
  do {
    FUN_080003f0();
    iVar6 = FUN_080021a8();
    if (iVar6 != 0) break;
    sVar2 = sVar2 + -1;
  } while (sVar2 != 0);
  uVar3 = 1;
  local_70 = DAT_08050ab4;
  do {
    sVar2 = *(short *)(local_70 + 0x80);
    sVar1 = *DAT_08050ab8;
    uVar5 = 0;
    local_5c = uVar3 + 1;
    do {
      iVar6 = (int)(short)uVar5;
      FUN_08066020(local_50,(int)sVar2,0,iVar6);
      FUN_08066020(local_4c,(int)sVar1,0xfffffffd,iVar6);
      FUN_0800b4fc((int)(short)local_a0,(int)(short)local_9c);
      FUN_0809802c(-local_a0,-local_9c);
      FUN_080003f0();
      uVar5 = iVar6 + 0x200U & 0xffff;
    } while ((int)((iVar6 + 0x200U) * 0x10000) >> 0x10 < 0x401);
    sVar2 = 2;
    do {
      FUN_080003f0();
      iVar6 = FUN_080021a8();
      if (iVar6 != 0) break;
      sVar2 = sVar2 + -1;
    } while (sVar2 != 0);
    sVar2 = *(short *)(local_70 + 0x80);
    sVar1 = *DAT_08050b40;
    uVar3 = 0;
    do {
      iVar6 = (int)(short)uVar3;
      FUN_08066020(local_48,(int)sVar2,0,iVar6);
      FUN_08066020(local_44,(int)sVar1,0,iVar6);
      FUN_0800b4fc((int)(short)local_98,(int)(short)local_94);
      FUN_0809802c(-local_98,-local_94);
      FUN_080003f0();
      uVar3 = iVar6 + 0x200U & 0xffff;
    } while ((int)((iVar6 + 0x200U) * 0x10000) >> 0x10 < 0x401);
    sVar2 = 2;
    do {
      FUN_080003f0();
      iVar4 = FUN_080021a8();
      iVar6 = DAT_08050bdc;
      if (iVar4 != 0) break;
      sVar2 = sVar2 + -1;
    } while (sVar2 != 0);
    uVar3 = local_5c & 0xffff;
  } while (uVar3 < 0x3c);
  sVar2 = *(short *)(DAT_08050bd8 + 0x80);
  sVar1 = *(short *)(DAT_08050bd8 + 0x82);
  uVar3 = 0;
  do {
    iVar4 = (int)(short)uVar3;
    FUN_08066020(local_40,(int)sVar2,0,iVar4);
    FUN_08066020(local_3c,(int)sVar1,iVar6 >> 0x10,iVar4);
    FUN_0800b4fc((int)(short)local_90,(int)(short)local_8c);
    FUN_0809802c(-local_90,-local_8c);
    FUN_080003f0();
    uVar3 = iVar4 + 0x200U & 0xffff;
  } while ((int)((iVar4 + 0x200U) * 0x10000) >> 0x10 < 0x401);
  sVar2 = 2;
  do {
    FUN_080003f0();
    iVar6 = FUN_080021a8();
    if (iVar6 != 0) break;
    sVar2 = sVar2 + -1;
  } while (sVar2 != 0);
  sVar2 = *(short *)(DAT_08050c68 + 0x80);
  sVar1 = *(short *)(DAT_08050c68 + 0x82);
  uVar3 = 0;
  do {
    iVar6 = (int)(short)uVar3;
    FUN_08066020(local_38,(int)sVar2,0,iVar6);
    FUN_08066020(local_34,(int)sVar1,0,iVar6);
    FUN_0800b4fc((int)(short)local_88,(int)(short)local_84);
    FUN_0809802c(-local_88,-local_84);
    FUN_080003f0();
    uVar3 = iVar6 + 0x200U & 0xffff;
  } while ((int)((iVar6 + 0x200U) * 0x10000) >> 0x10 < 0x401);
  sVar2 = 2;
  do {
    FUN_080003f0();
    iVar4 = FUN_080021a8();
    iVar6 = DAT_08050cf8;
    if (iVar4 != 0) break;
    sVar2 = sVar2 + -1;
  } while (sVar2 != 0);
  sVar2 = *(short *)(DAT_08050cf4 + 0x80);
  sVar1 = *(short *)(DAT_08050cf4 + 0x82);
  uVar3 = 0;
  do {
    iVar4 = (int)(short)uVar3;
    FUN_08066020(local_30,(int)sVar2,0,iVar4);
    FUN_08066020(local_2c,(int)sVar1,iVar6 >> 0x10,iVar4);
    FUN_0800b4fc((int)(short)local_80,(int)(short)local_7c);
    FUN_0809802c(-local_80,-local_7c);
    FUN_080003f0();
    uVar3 = iVar4 + 0x200U & 0xffff;
  } while ((int)((iVar4 + 0x200U) * 0x10000) >> 0x10 < 0x401);
  sVar2 = 2;
  do {
    FUN_080003f0();
    iVar6 = FUN_080021a8();
    if (iVar6 != 0) break;
    sVar2 = sVar2 + -1;
  } while (sVar2 != 0);
  sVar2 = *(short *)(DAT_08050d84 + 0x80);
  sVar1 = *(short *)(DAT_08050d84 + 0x82);
  uVar3 = 0;
  do {
    iVar6 = (int)(short)uVar3;
    FUN_08066020(local_28,(int)sVar2,0,iVar6);
    FUN_08066020(local_24,(int)sVar1,0,iVar6);
    FUN_0800b4fc((int)(short)local_78,(int)(short)local_74);
    FUN_0809802c(-local_78,-local_74);
    FUN_080003f0();
    uVar3 = iVar6 + 0x200U & 0xffff;
  } while ((int)((iVar6 + 0x200U) * 0x10000) >> 0x10 < 0x401);
  sVar2 = 2;
  do {
    FUN_080003f0();
    iVar6 = FUN_080021a8();
    if (iVar6 != 0) {
      return unaff_lr;
    }
    sVar2 = sVar2 + -1;
  } while (sVar2 != 0);
  return unaff_lr;
}

