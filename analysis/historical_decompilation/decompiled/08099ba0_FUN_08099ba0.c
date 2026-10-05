
undefined4 FUN_08099ba0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 unaff_lr;
  
  piVar1 = DAT_08099bc8;
  iVar2 = FUN_08001494(0xa00);
  *piVar1 = iVar2;
  uVar3 = 0;
  iVar2 = 0;
  do {
    *(undefined4 *)(iVar2 + *piVar1 + 8) = 0;
    iVar2 = iVar2 + 0x28;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x40);
  return unaff_lr;
}

