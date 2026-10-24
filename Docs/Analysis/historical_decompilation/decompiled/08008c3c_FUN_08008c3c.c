
undefined4 FUN_08008c3c(ushort *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  undefined4 local_1c;
  
  FUN_08000990(0,0);
  FUN_080009f8(0x1f00,0,1);
  local_1c = local_1c & DAT_08008c94 | DAT_08008c98;
  FUN_08000aa8(0,&local_1c);
  if (param_2 == 6) {
    local_1c = CONCAT22(local_1c._2_2_,*(undefined2 *)(DAT_08008c9c + 0x2ba)) | 0x1d40;
    *(undefined2 *)(DAT_08008ca0 + 0x3c) = 0x21;
  }
  else {
    local_1c = CONCAT22(local_1c._2_2_,*(undefined2 *)(param_2 * 0x74 + DAT_08008d10 + 2)) | 0x1d00;
  }
  FUN_08000aa8(1,&local_1c);
  local_1c._0_2_ = (short)DAT_08008d14;
  FUN_08000aa8(2,&local_1c);
  local_1c = CONCAT22(local_1c._2_2_,(short)DAT_08008d18);
  FUN_08000aa8(3,&local_1c);
  iVar1 = FUN_08006d98(*(undefined4 *)param_1);
  iVar2 = FUN_08006d98(*param_1 | 0x90000);
  uVar4 = 0;
  while ((iVar3 = FUN_0800c748(), iVar3 == 0 && (iVar3 = FUN_0800c4c8(), iVar3 == 0))) {
    FUN_08001348(iVar1 + uVar4 * 0x800,uVar4 * 0x800 + 0x6000000,0x800);
    FUN_080003f0();
    uVar4 = uVar4 + 1 & 0xffff;
    if (0xf < uVar4) {
      if (*(int *)param_1 < 0) {
        if ((param_2 == 0x10) || (param_2 == 0x16)) {
          iVar2 = iVar2 + 0x200;
        }
        FUN_08000af0(0,iVar2,0xf);
      }
      else {
        FUN_08000af0(0,iVar2,0xf);
      }
      if ((*(short *)(DAT_08008d8c + 0x8c) == 4) && (iVar1 = FUN_0800c710(), iVar1 != 0)) {
        FUN_080009c0(0x1b00,0,1);
      }
      else if (*(short *)(DAT_08008dbc + 0x8c) != 0xd) {
        FUN_080009c0(0x1f00,0,1);
      }
      *DAT_08008dc0 = 0;
      FUN_080003f0();
      return unaff_lr;
    }
  }
  FUN_080013f8();
  return unaff_lr;
}

