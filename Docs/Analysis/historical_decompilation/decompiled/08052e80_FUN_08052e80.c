
void FUN_08052e80(void)

{
  short sVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  sVar1 = 0x3c;
  do {
    FUN_080003f0();
    iVar2 = FUN_080021a8();
    if (iVar2 != 0) break;
    sVar1 = sVar1 + -1;
  } while (sVar1 != 0);
  FUN_0802917c(1,0);
  FUN_08029444(1,8);
  FUN_08028e2c(1,0,0x28,0x50);
  FUN_08029444(1,0);
                    /* WARNING: Could not recover jumptable at 0x08052ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

