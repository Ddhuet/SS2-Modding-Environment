
undefined4 FUN_0804b14a(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  short *psVar2;
  int unaff_r5;
  int unaff_r6;
  undefined4 in_stack_00000010;
  
  psVar2 = (short *)(param_1 + 0x2e8);
  do {
    if ((*psVar2 == 1) && (psVar2[1] == 0x2a)) {
      unaff_r5 = unaff_r5 + 1;
    }
    psVar2 = psVar2 + 8;
    param_4 = param_4 + 1;
  } while (param_4 < 0x4b);
  if ((param_3 == 0 && unaff_r6 == 0) && unaff_r5 == 0) {
    FUN_08068ebc(DAT_0804b198,0,1);
  }
  iVar1 = FUN_0800c5e8();
  if (iVar1 == 0) {
    iVar1 = FUN_0801a720();
    if (iVar1 == 1) {
      FUN_0801a74c(6);
    }
    else if (iVar1 < 2) {
      if (iVar1 == 0) {
        FUN_08058b6c();
      }
    }
    else if (iVar1 == 2) {
      FUN_0801a78c(6);
    }
    while (iVar1 = FUN_0801a6dc(), iVar1 == 0) {
      FUN_080003f0();
    }
  }
  return in_stack_00000010;
}

