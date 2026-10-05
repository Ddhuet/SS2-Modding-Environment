
undefined4 FUN_08000f64(ushort param_1)

{
  ushort uVar1;
  undefined2 *puVar2;
  ushort *puVar3;
  undefined2 *puVar4;
  undefined4 unaff_lr;
  
  puVar4 = DAT_08000fcc;
  puVar3 = DAT_08000fc8;
  puVar2 = DAT_08000fc4;
  uVar1 = *DAT_08000fc0;
  while ((uVar1 & 3) != 0) {
    uVar1 = *DAT_08000fc0;
  }
  *DAT_08000fc4 = 0;
  *puVar4 = 0;
  param_1 = param_1 | *puVar3;
  *puVar3 = param_1;
  *DAT_08000fd0 = param_1;
  puVar4 = DAT_08000fcc;
  uVar1 = *DAT_08000fc0;
  while ((uVar1 & 3) != 0) {
    uVar1 = *DAT_08000fc0;
  }
  *puVar2 = 1;
  *puVar4 = 1;
  return unaff_lr;
}

