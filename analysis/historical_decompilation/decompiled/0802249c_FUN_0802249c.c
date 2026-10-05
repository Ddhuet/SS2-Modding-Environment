
undefined4 FUN_0802249c(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  short local_24;
  short local_22;
  
  uVar1 = FUN_080659f8();
  iVar3 = (param_1 >> 0x10) << 8;
  uVar4 = 0;
  while ((iVar2 = FUN_0800c4c8(), iVar2 == 0 && (uVar4 < 0x14))) {
    iVar2 = FUN_0800c5e8();
    if ((iVar2 == 0) &&
       ((iVar2 = FUN_0800c6dc(), iVar2 == 0 && (iVar2 = FUN_0800c61c(), iVar2 == 0)))) {
      FUN_0800b570((int)(short)param_1,(iVar3 << 8) >> 0x10,&local_24,&local_22,0x10,0);
      FUN_0806585c(uVar1,(int)local_24,(int)local_22,0x1f,0);
    }
    iVar3 = iVar3 + -0x80;
    FUN_080003f0();
    uVar4 = uVar4 + 1;
  }
  *DAT_0802253c = *DAT_0802253c & ~(1 << (param_2 & 0xff));
  return unaff_lr;
}

