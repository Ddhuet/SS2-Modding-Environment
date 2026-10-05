
undefined4 FUN_080972b4(undefined1 param_1)

{
  bool bVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint unaff_r10;
  undefined4 unaff_lr;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_44;
  undefined1 local_43;
  undefined2 local_2c;
  undefined2 local_2a;
  short local_28;
  short local_26;
  uint local_24;
  
  FUN_08065784(local_60,DAT_080973d0,8,0xffffffff,1);
  local_44 = 7;
  local_43 = 8;
  local_2a = 0;
  local_2c = 0;
  local_24 = 0;
  FUN_08059a8c(DAT_080973d4);
  piVar2 = DAT_080973d8;
  do {
    do {
      iVar4 = FUN_0800c6dc();
      if (iVar4 == 0) {
        uVar5 = FUN_0806599c(local_60,param_1,&local_2c,&local_2a,0);
        unaff_r10 = uVar5 & 0xffff;
      }
      iVar4 = FUN_0800c61c();
      if ((((iVar4 == 0) && (iVar4 = FUN_0800c5e8(), iVar4 == 0)) &&
          (iVar4 = FUN_0800c6dc(), iVar4 == 0)) && (iVar4 = FUN_0800c684(), iVar4 == 0)) {
        FUN_08000af0(0x17,local_54,2);
        uVar3 = FUN_0800b5ac(*piVar2 >> 8,piVar2[1] >> 8,0);
        FUN_0800b570((*piVar2 << 8) >> 0x10,(piVar2[1] << 8) >> 0x10,&local_28,&local_26,0,0);
        iVar4 = FUN_08007378((int)local_28,0,param_1,local_2c,uVar3,&local_44,local_58,local_60[0]);
        *(int *)(iVar4 + 0xc) = (int)local_26;
      }
      FUN_080003f0();
    } while (unaff_r10 == 0);
    bVar1 = 0x3b < local_24;
    local_24 = local_24 + 1 & 0xffff;
  } while (bVar1);
  *(undefined4 *)(*DAT_080973dc + 8) = 0;
  return unaff_lr;
}

