
undefined4 FUN_08098358(void)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  piVar1 = DAT_08098370;
  iVar2 = FUN_08001494(0x28);
  *piVar1 = iVar2;
  *(undefined4 *)(iVar2 + 8) = 0;
  return unaff_lr;
}

