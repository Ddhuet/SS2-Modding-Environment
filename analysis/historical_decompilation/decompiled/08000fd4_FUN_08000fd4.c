
undefined4 FUN_08000fd4(ushort param_1)

{
  undefined2 *puVar1;
  ushort *puVar2;
  undefined2 *puVar3;
  ushort uVar4;
  undefined4 unaff_lr;
  
  puVar3 = DAT_0800103c;
  puVar2 = DAT_08001038;
  puVar1 = DAT_08001034;
  uVar4 = *DAT_08001030;
  while ((uVar4 & 3) != 0) {
    uVar4 = *DAT_08001030;
  }
  *DAT_08001034 = 0;
  *puVar3 = 0;
  uVar4 = *puVar2 & ~param_1;
  *puVar2 = uVar4;
  puVar3[-4] = uVar4;
  puVar3 = DAT_0800103c;
  uVar4 = *DAT_08001030;
  while ((uVar4 & 3) != 0) {
    uVar4 = *DAT_08001030;
  }
  *puVar1 = 1;
  *puVar3 = 1;
  return unaff_lr;
}

