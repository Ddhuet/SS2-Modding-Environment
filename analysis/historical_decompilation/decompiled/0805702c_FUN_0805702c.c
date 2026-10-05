
void FUN_0805702c(void)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  undefined4 local_12c [4];
  undefined4 uStack_11c;
  int local_118;
  short local_114 [126];
  
  local_12c[0] = *DAT_08057084;
  local_12c[1] = DAT_08057084[1];
  local_12c[2] = DAT_08057084[2];
  local_12c[3] = DAT_08057084[3];
  uStack_11c = DAT_08057084[4];
  FUN_080babb4(&local_118,DAT_08057088,0x100);
  uVar3 = 0;
  do {
    FUN_08028b3c(6,0x78,*(undefined2 *)(local_12c + (&local_118)[uVar3 * 2]),0);
    FUN_08028e2c(6,0,0xffffffe4,10);
    for (sVar2 = local_114[uVar3 * 4]; sVar2 != 0; sVar2 = sVar2 + -1) {
      FUN_080003f0();
      iVar1 = FUN_080021a8();
      if (iVar1 != 0) break;
    }
    FUN_08028e2c(6,0,0x1c,10);
    FUN_08028b3c(6,DAT_080570c0,DAT_080570c0,0);
    sVar2 = 0x1e;
    do {
      FUN_080003f0();
      iVar1 = FUN_080021a8();
      if (iVar1 != 0) break;
      sVar2 = sVar2 + -1;
    } while (sVar2 != 0);
    uVar3 = uVar3 + 1 & 0x1f;
  } while( true );
}

