
undefined8 FUN_08059104(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 unaff_lr;
  
  iVar1 = FUN_0800c780();
  if (iVar1 == 0) {
    uVar2 = *(uint *)(*DAT_08059120 + 0x78);
  }
  else {
    uVar2 = *(uint *)(*DAT_08059138 + 0x80);
  }
  return CONCAT44(unaff_lr,uVar2 & 1 << (param_1 - 1U & 0xff));
}

