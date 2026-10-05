
undefined4 FUN_0804f970(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  if (param_1 == 0) {
    while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
      FUN_080003f0();
    }
    while (iVar3 = FUN_0805f8b4(), iVar3 != 0) {
      FUN_080003f0();
    }
    uVar2 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_0804f9e8);
    FUN_08028e2c(6,2,0,5);
    FUN_08028e2c(6,0xfffffffe,0,5);
    FUN_08028e2c(6,2,0,5);
    FUN_08028e2c(6,0xfffffffe,0,5);
    while (iVar3 = FUN_0805f820(uVar2), iVar3 == 0) {
      FUN_080003f0();
    }
    while (iVar3 = FUN_0805fa94(), iVar3 != 0) {
      FUN_080003f0();
    }
    while (iVar3 = FUN_0805f8b4(), iVar3 != 0) {
      FUN_080003f0();
    }
    uVar2 = FUN_0805e608(1,0xf,2,0,0x2d,DAT_0804fa64);
    FUN_08028e2c(6,2,0,5);
    FUN_08028e2c(6,0xfffffffe,0,5);
    FUN_08028e2c(6,2,0,5);
    FUN_08028e2c(6,0xfffffffe,0,5);
    while (iVar3 = FUN_0805f820(uVar2), iVar3 == 0) {
      FUN_080003f0();
    }
    *(uint *)(*DAT_0804faac + 0x38) = *(uint *)(*DAT_0804faac + 0x38) | 2;
    iVar3 = FUN_080020f4();
    iVar3 = iVar3 * 0x154 + DAT_0804fab0;
    *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) & 0xfffffffe;
    FUN_0800ca58();
  }
  else if (param_1 != 1) {
    return unaff_lr;
  }
  do {
    sVar1 = 0x78;
    do {
      FUN_080003f0();
      iVar3 = FUN_080021a8();
      if (iVar3 != 0) break;
      sVar1 = sVar1 + -1;
    } while (sVar1 != 0);
    FUN_08028e2c(6,2,0,5);
    FUN_08028e2c(6,0xfffffffe,0,5);
    FUN_08028e2c(6,2,0,5);
    FUN_08028e2c(6,0xfffffffe,0,5);
  } while( true );
}

