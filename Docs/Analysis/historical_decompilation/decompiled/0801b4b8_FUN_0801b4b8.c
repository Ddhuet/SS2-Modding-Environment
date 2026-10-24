
undefined8 FUN_0801b4b8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_lr;
  
  if (*DAT_0801b524 != 0) {
    *(undefined4 *)(*DAT_0801b524 + DAT_0801b528) = 0;
  }
  if ((param_1 == 0) || (*(ushort *)(param_1 + 0x19a) == 0)) {
LAB_0801b530:
    if ((param_2 == 0) || (*(ushort *)(param_2 + 400) == 0)) {
LAB_0801b56a:
      if ((param_3 != 0) && (*(ushort *)(param_3 + 400) != 0)) {
        iVar2 = (uint)*(ushort *)(param_3 + 400) * 0x18c + DAT_0801b670;
        iVar1 = FUN_0801b35c(iVar2,param_1,param_2,param_3,param_4,param_5,param_6);
        if (iVar1 != 0) goto LAB_0801b658;
      }
      if ((param_4 != 0) && (*(ushort *)(param_4 + 0x194) != 0)) {
        iVar2 = (uint)*(ushort *)(param_4 + 0x194) * 0x18c + DAT_0801b670;
        iVar1 = FUN_0801b35c(iVar2,param_1,param_2,param_3,param_4,param_5,param_6);
        if (iVar1 != 0) goto LAB_0801b658;
      }
      if ((param_5 != 0) && (*(ushort *)(param_5 + 0x188) != 0)) {
        iVar2 = (uint)*(ushort *)(param_5 + 0x188) * 0x18c + DAT_0801b670;
        iVar1 = FUN_0801b35c(iVar2,param_1,param_2,param_3,param_4,param_5,param_6);
        if (iVar1 != 0) goto LAB_0801b658;
      }
      if ((param_6 != 0) && (*(ushort *)(param_6 + 0x184) != 0)) {
        iVar2 = (uint)*(ushort *)(param_6 + 0x184) * 0x18c + DAT_0801b670;
        iVar1 = FUN_0801b35c(iVar2,param_1,param_2,param_3,param_4,param_5,param_6);
        if (iVar1 != 0) goto LAB_0801b658;
      }
      iVar2 = 0;
      goto LAB_0801b67e;
    }
    iVar2 = (uint)*(ushort *)(param_2 + 400) * 0x18c + DAT_0801b670;
    iVar1 = FUN_0801b35c(iVar2,param_1,param_2,param_3,param_4,param_5,param_6);
    if (iVar1 == 0) goto LAB_0801b56a;
LAB_0801b658:
    iVar1 = *DAT_0801b674;
  }
  else {
    iVar2 = (uint)*(ushort *)(param_1 + 0x19a) * 0x18c + DAT_0801b52c;
    iVar1 = FUN_0801b35c(iVar2,param_1,param_2,param_3,param_4,param_5,param_6);
    if (iVar1 == 0) goto LAB_0801b530;
    iVar1 = *DAT_0801b524;
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + DAT_0801b678) = iVar2;
  }
  iVar2 = iVar2 + 0x180;
LAB_0801b67e:
  return CONCAT44(unaff_lr,iVar2);
}

