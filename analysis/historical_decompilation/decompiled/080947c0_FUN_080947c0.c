
undefined4 FUN_080947c0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  *DAT_080947f0 = 0;
  *DAT_080947f4 = 0;
  piVar1 = DAT_080947f8;
  do {
    iVar2 = FUN_08001494(0x28);
    *piVar1 = iVar2;
    FUN_080003f0();
  } while (*piVar1 == 0);
  *(undefined4 *)(*DAT_080947f8 + 8) = 0;
  return unaff_lr;
}

