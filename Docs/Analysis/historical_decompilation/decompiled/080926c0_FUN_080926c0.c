
undefined4 FUN_080926c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  iVar1 = (param_1 << 0x18) >> 0x16;
  iVar2 = (param_2 << 0x10) >> 0x18;
  FUN_080ba43c(iVar2,(int)(char)param_2,*(undefined4 *)(iVar1 + DAT_080926fc));
  FUN_080ba43c(iVar2,(int)(char)param_2,*(undefined4 *)(iVar1 + DAT_08092700));
  FUN_08000420(DAT_08092704);
  return unaff_lr;
}

