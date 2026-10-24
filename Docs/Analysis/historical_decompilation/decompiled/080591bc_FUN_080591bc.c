
undefined8 FUN_080591bc(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_lr;
  
  iVar1 = FUN_0800c780();
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(*DAT_080591d0 + 0x78);
  }
  else {
    uVar2 = *(undefined4 *)(*DAT_080591e0 + 0x80);
  }
  return CONCAT44(unaff_lr,uVar2);
}

