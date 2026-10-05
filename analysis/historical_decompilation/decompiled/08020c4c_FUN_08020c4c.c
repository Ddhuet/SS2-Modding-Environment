
undefined4 FUN_08020c4c(int param_1,uint param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_lr;
  short local_2c;
  short local_2a;
  undefined2 local_28;
  undefined2 local_26;
  uint local_24;
  
  local_24 = param_2;
  uVar2 = FUN_080659f8();
  local_28 = 0;
  local_26 = 0;
  iVar4 = 0;
  uVar1 = (ushort)DAT_08020c84;
  while ((iVar3 = FUN_0800c4c8(), iVar3 == 0 && (iVar4 == 0))) {
    iVar3 = FUN_0800c5e8();
    if ((iVar3 == 0) &&
       ((iVar3 = FUN_0800c6dc(), iVar3 == 0 && (iVar3 = FUN_0800c61c(), iVar3 == 0)))) {
      FUN_0800b570((int)(short)(uVar1 & (ushort)param_1),((param_1 >> 0x10) << 8) >> 8,&local_2c,
                   &local_2a,0x10,0);
      iVar4 = FUN_0806599c(uVar2,0x20,&local_28,&local_26,0);
      FUN_0806585c(uVar2,(int)local_2c,(int)local_2a,0x20,local_28);
    }
    FUN_080003f0();
  }
  *DAT_08020d10 = *DAT_08020d10 & ~(1 << (local_24 & 0xff));
  return unaff_lr;
}

