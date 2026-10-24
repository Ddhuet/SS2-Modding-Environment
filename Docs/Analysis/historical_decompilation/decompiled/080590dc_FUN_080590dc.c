
undefined8 FUN_080590dc(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_lr;
  
  iVar1 = FUN_0800c780();
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(*DAT_080590f0 + 0x74);
  }
  else {
    uVar2 = *(undefined4 *)(*DAT_08059100 + 0x7c);
  }
  return CONCAT44(unaff_lr,uVar2);
}

