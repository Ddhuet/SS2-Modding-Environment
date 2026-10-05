
undefined4 FUN_08093eb8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_lr;
  undefined1 auStack_174 [52];
  undefined1 auStack_140 [12];
  int iStack_134;
  undefined1 auStack_10c [52];
  undefined1 auStack_d8 [32];
  undefined4 auStack_b8 [4];
  undefined2 auStack_a8 [4];
  undefined2 auStack_a0 [4];
  undefined2 auStack_98 [4];
  undefined1 auStack_90 [12];
  undefined4 *puStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 *puStack_34;
  undefined2 *puStack_30;
  undefined2 *puStack_2c;
  undefined2 *puStack_28;
  undefined1 *puStack_24;
  
  iVar2 = DAT_08093fa8;
  iVar4 = param_2 * 0x1000000 + -0x1000000;
  iStack_6c = (param_1 << 0x18) >> 0x16;
  FUN_08065784(auStack_174,DAT_08093fa8,7,0xffffffff,1);
  FUN_08065784(auStack_140,(char)((uint)iVar4 >> 0x18) + iVar2,7,0xffffffff,1);
  FUN_08065784(auStack_10c,DAT_08093fac,8,0xffffffff,1);
  FUN_08098284(auStack_d8,iStack_134 + 0xe0);
  uVar5 = 0;
  puStack_30 = auStack_a8;
  puStack_2c = auStack_a0;
  puStack_28 = auStack_98;
  puStack_24 = auStack_90;
  puStack_34 = auStack_b8;
  do {
    puStack_24[uVar5] = 0;
    puStack_28[uVar5] = 0;
    puStack_2c[uVar5] = 0;
    puStack_30[uVar5] = 0;
    puStack_34[uVar5] = 1;
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 4);
  uStack_70 = 0;
  *DAT_08093fb0 = 0;
  uStack_64 = 0;
  iStack_50 = 0;
  uStack_54 = 0;
  uStack_4c = 0;
  iStack_48 = 1;
  uStack_58 = 1;
  uStack_5c = 2;
  FUN_0801a74c(6);
  iStack_40 = iVar4;
  while (iVar2 = FUN_0801a6dc(), iVar2 == 0) {
    FUN_080003f0();
  }
  FUN_08059a8c(0xf4);
  do {
    iVar2 = iStack_40 >> 0x18;
    if (iVar2 == 1) {
      uStack_78 = 0x7000;
      iStack_74 = 0x6800;
    }
    else if (iVar2 < 2) {
      if (iVar2 == 0) {
        uStack_78 = 0x7000;
        iStack_74 = 0x7000;
      }
    }
    else if (iVar2 == 2) {
      uStack_78 = 0x7800;
      iStack_74 = 0x6800;
    }
    else if (iVar2 == 3) {
      uStack_78 = 0x7a00;
      iStack_74 = 0x6000;
    }
    iStack_74 = iStack_74 + *DAT_0809403c * 0x10;
    uStack_3c = 0;
    if (uStack_54 < 5) {
                    /* WARNING: Could not recover jumptable at 0x08094038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(uStack_54 * 4 + DAT_08094040))();
      return uVar3;
    }
    *(undefined1 *)((int)puStack_84 + 0x23) = 0;
    if (iStack_50 == 1) {
      uStack_68 = uStack_68 + 1 & 0xffff;
      cVar1 = FUN_08097134(auStack_d8,4,uStack_68,0x10);
      if (cVar1 != '\0') {
        uStack_68 = 0;
        iStack_50 = 2;
      }
LAB_0809441e:
      FUN_08000af0(0x10,auStack_d8,1);
    }
    else if (iStack_50 < 2) {
      if (iStack_50 == 0) {
        FUN_08000af0(0x10,puStack_84[3] + 0xe0,1);
        uStack_68 = 0;
      }
    }
    else {
      if (iStack_50 == 2) {
        uStack_68 = uStack_68 + 1 & 0xffff;
        cVar1 = FUN_08097054(auStack_d8,puStack_84[3] + 0xe0,uStack_68,0x10);
        if (cVar1 != '\0') {
          iStack_50 = 0;
        }
        goto LAB_0809441e;
      }
      if (iStack_50 == 3) {
        FUN_08097210(auStack_d8,6);
        FUN_08000af0(0x10,auStack_d8,1);
        FUN_08097210(auStack_d8,0xfffffffa);
      }
    }
    FUN_080082b0((iStack_80 << 8) >> 0x10,(iStack_7c << 8) >> 0x10,0,0,uStack_5c,puStack_84 + 7,
                 puStack_84[2],*puStack_84,uStack_58);
    FUN_080003f0();
    iVar2 = FUN_080021a8();
    if (iVar2 == 1) {
      iStack_48 = 0;
    }
    if (iStack_48 == 0) {
      FUN_0801a7e4(6);
      while (iVar2 = FUN_0801a6dc(), iVar2 == 0) {
        FUN_080003f0();
      }
      FUN_080947fc();
      FUN_0800c568();
      FUN_0800c5b8();
      FUN_0809833c();
      return unaff_lr;
    }
  } while( true );
}

