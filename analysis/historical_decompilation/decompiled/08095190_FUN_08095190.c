
undefined4 FUN_08095190(void)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  piVar1 = DAT_080951ac;
  iVar2 = FUN_08001494(0x28);
  *piVar1 = iVar2;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  return unaff_lr;
}

