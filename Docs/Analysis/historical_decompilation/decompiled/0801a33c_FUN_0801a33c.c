
undefined4 FUN_0801a33c(ushort *param_1,short param_2,undefined2 param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined4 unaff_lr;
  
  uVar2 = DAT_0801a3a0;
  uVar1 = *param_1;
  while ((uVar1 != uVar2 && ((uVar1 & 0x8000) == 0))) {
    FUN_0806585c(DAT_0801a3a4,param_2,param_3,0,*param_1 - 1);
    param_2 = param_2 + 8;
    param_1 = param_1 + 1;
    uVar1 = *param_1;
  }
  return unaff_lr;
}

