
void FUN_0805017c(void)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_080020f4();
  iVar1 = iVar1 * 0x154 + DAT_080501a0;
  *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 1;
  FUN_0800ca44();
  while (iVar1 = FUN_0805fa94(), iVar1 != 0) {
    FUN_080003f0();
  }
  while (iVar1 = FUN_0805f8b4(), iVar1 != 0) {
    FUN_080003f0();
  }
  uVar2 = FUN_0805e608(1,0xf,2,0,0xffffffff,DAT_080501d8);
  do {
    iVar1 = FUN_0805f820(uVar2);
    if (iVar1 != 0) {
LAB_080501f6:
      iVar1 = FUN_080020f4();
      iVar1 = iVar1 * 0x154 + DAT_08050220;
      *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) & 0xfffffffe;
      FUN_0800ca58();
                    /* WARNING: Could not recover jumptable at 0x0805021c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    iVar1 = FUN_0800c748();
    if (iVar1 != 0) {
      FUN_0805f8e0();
      goto LAB_080501f6;
    }
    FUN_080003f0();
  } while( true );
}

