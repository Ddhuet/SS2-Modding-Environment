
undefined4 FUN_08093264(uint param_1,int param_2)

{
  short *psVar1;
  byte bVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 unaff_lr;
  undefined4 local_d4 [2];
  undefined4 local_cc;
  int local_c8;
  undefined1 auStack_b8 [7];
  undefined1 local_b1;
  undefined4 local_a0 [2];
  undefined4 local_98;
  int local_94;
  undefined1 auStack_84 [8];
  undefined1 local_7c;
  undefined1 auStack_6c [32];
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48 [6];
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  
  uVar5 = param_2 * 0x1000000 - 0x1000000;
  local_24 = (param_1 & 0x7f) << 1;
  local_28 = 0;
  local_3c = uVar5 >> 0x18;
  iVar7 = (int)uVar5 >> 0x18;
  FUN_08065784(local_d4,iVar7 + DAT_080932e0,7,0xffffffff,1);
  FUN_08065784(local_a0,DAT_080932e4,8,0xffffffff,1);
  local_b1 = (undefined1)local_28;
  local_7c = 1;
  FUN_08098284(auStack_6c,local_c8 + 0xe0);
  FUN_08097210(auStack_6c,0x1f);
  piVar3 = DAT_08093304;
  if (iVar7 == 1) {
LAB_08093316:
    local_38 = *piVar3;
  }
  else if (iVar7 < 2) {
    if (iVar7 != 0) goto LAB_0809331e;
    local_38 = *DAT_080932fc;
    piVar3 = DAT_080932fc;
  }
  else {
    if (iVar7 != 2) {
      piVar3 = DAT_08093350;
      if (iVar7 != 3) goto LAB_0809331e;
      goto LAB_08093316;
    }
    local_38 = *DAT_08093310;
    piVar3 = DAT_08093310;
  }
  local_34 = piVar3[1];
LAB_0809331e:
  local_30 = 0x8000;
  local_2c = 0x3000;
  local_48[0] = 0;
  local_4a = 0;
  local_4c = 0;
  bVar2 = 0;
  uVar5 = 6;
  FUN_0801a74c(6);
  while (iVar7 = FUN_0801a6dc(), iVar7 == 0) {
    FUN_080003f0();
  }
  FUN_08059a8c(DAT_0809337c);
  do {
    if (uVar5 - 1 < 6) {
                    /* WARNING: Could not recover jumptable at 0x08093378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)((uVar5 - 1) * 4 + DAT_08093380))();
      return uVar4;
    }
    if (bVar2 == 3) {
      bVar2 = 0;
    }
    else {
      bVar2 = bVar2 + 1;
    }
    if (bVar2 == 1) {
      uVar4 = 1;
      uVar6 = 0;
LAB_0809355a:
      FUN_08008b8c(uVar4,uVar6,0,0);
    }
    else if (bVar2 < 2) {
      if (bVar2 == 0) {
        uVar4 = 0;
        uVar6 = 0;
        goto LAB_0809355a;
      }
    }
    else {
      if (bVar2 == 2) {
        uVar4 = 1;
        uVar6 = 1;
        goto LAB_0809355a;
      }
      if (bVar2 == 3) {
        FUN_08008b8c(0,1,0,0);
      }
    }
    psVar1 = DAT_08093658;
    *DAT_08093658 = *DAT_08093658 + 1;
    psVar1[1] = psVar1[1] + 1;
    psVar1[2] = psVar1[2] + -1;
    psVar1[3] = psVar1[3] + 1;
    FUN_08008b40(0,0x23,0,0,0x10,0);
    if (uVar5 == 2) {
      FUN_08000af0(0x11,local_94 + 0x100,1);
      FUN_0806599c(local_a0,0,&local_4c,&local_4a,1);
      iVar7 = FUN_0800747c(local_30 >> 8,0,0,local_4c,0,0,1,auStack_84,local_98,local_a0[0]);
      *(int *)(iVar7 + 0xc) = local_2c >> 8;
    }
    if (2 < uVar5) {
      FUN_08000af0(0x10,local_c8 + 0xe0,1);
      FUN_0806599c(local_d4,0,local_48,&local_4a,1);
      iVar7 = FUN_08007378(local_38 >> 8,0x9f,0,local_48[0],0,auStack_b8,local_cc,local_d4[0]);
      *(int *)(iVar7 + 0xc) = local_34 >> 8;
    }
    FUN_080003f0();
    iVar7 = FUN_080021a8();
    if (iVar7 == 1) {
      uVar5 = 0;
    }
    if (uVar5 == 0) {
      FUN_0801a7e4(6);
      while (iVar7 = FUN_0801a6dc(), iVar7 == 0) {
        FUN_080003f0();
      }
      FUN_08059b00(3);
      FUN_08093710();
      FUN_0800c568();
      FUN_0800c5b8();
      FUN_0809833c();
      FUN_08008b8c(0,0,0,0);
      FUN_08008b40(0,0,0,0,0,0);
      return unaff_lr;
    }
  } while( true );
}

