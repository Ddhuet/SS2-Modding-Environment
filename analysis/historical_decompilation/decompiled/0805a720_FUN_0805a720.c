
undefined4 FUN_0805a720(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_lr;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_1c = 0;
  local_24 = 0xb700;
  local_20 = 0xe100;
  local_18 = DAT_0805a754;
  iVar1 = FUN_080020f4();
  iVar1 = iVar1 * 0x154 + DAT_0805a758;
  while (iVar2 = FUN_08021ef0(iVar1 + 0x94,&local_24,&local_1c,&local_18), iVar2 == 0) {
    FUN_080003f0();
  }
  FUN_0806870c(DAT_0805a784,param_1);
  return unaff_lr;
}

