
void FUN_0805a6ec(undefined4 param_1)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  
  uVar1 = DAT_0805a704;
  do {
    FUN_08028b3c(param_1,uVar1,uVar1,0);
    sVar2 = 1;
    do {
      FUN_080003f0();
      iVar3 = FUN_080021a8();
      if (iVar3 != 0) break;
      sVar2 = sVar2 + -1;
    } while (sVar2 != 0);
  } while( true );
}

