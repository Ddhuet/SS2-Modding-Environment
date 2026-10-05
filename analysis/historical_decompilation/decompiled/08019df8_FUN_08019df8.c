
undefined4 FUN_08019df8(ushort *param_1,short param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 unaff_lr;
  
  iVar2 = FUN_080baaf4(*DAT_08019e4c,0x19);
  if (iVar2 == (uint)*param_1 * 5) {
    uVar1 = FUN_080166c8(*(undefined4 *)(param_1 + 10),*(undefined4 *)(param_1 + 0xc),
                         *(undefined4 *)(param_1 + 0x12),*(undefined4 *)(param_1 + 0x14),
                         (int)param_2);
    param_1[2] = uVar1;
  }
  puVar3 = param_1 + 0x22;
  uVar1 = *puVar3;
  *puVar3 = uVar1 + 1;
  if (0xb4 < (ushort)(uVar1 + 1)) {
    *puVar3 = 0;
    param_1[2] = 0;
  }
  return unaff_lr;
}

