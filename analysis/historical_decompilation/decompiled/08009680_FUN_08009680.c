
undefined4 FUN_08009680(void)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  undefined4 unaff_lr;
  uint local_28;
  int local_24;
  
  iVar2 = DAT_08009b28;
  if (*(ushort *)(DAT_080096a4 + 0x8c) < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x080096a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)((uint)*(ushort *)(DAT_080096a4 + 0x8c) * 4 + DAT_080096a8))();
    return uVar3;
  }
  if ((*(short *)(DAT_080096a4 + 0x8c) == 3) || (*(short *)(DAT_080096a4 + 0x8c) == 6)) {
    iVar9 = 1;
  }
  else {
    iVar9 = 0;
  }
  if (0x13 < *(ushort *)(DAT_080096a4 + 0x8c)) {
    if ((1 < (ushort)(*(short *)(DAT_08009b28 + 0x8c) - 7U)) || (iVar4 = FUN_0800c710(), iVar4 == 0)
       ) {
      puVar7 = (ushort *)(iVar9 * 2 + DAT_08009b2c);
      iVar9 = FUN_080ba8a4(0x20,*puVar7);
      iVar4 = FUN_08006d98(**(undefined4 **)(iVar2 + 0xb0));
      local_28 = 0;
      local_24 = DAT_08009b30;
      puVar8 = (ushort *)(iVar2 + 0xa0);
      iVar4 = iVar4 + 0x7000;
      iVar10 = 0;
      do {
        puVar6 = (ushort *)(iVar10 + (uint)*(ushort *)(iVar2 + 0x8c) * 0x74 + DAT_08009b34);
        if (*puVar6 != 0) {
          puVar5 = (ushort *)(iVar10 + iVar2 + 0xa8);
          uVar1 = *puVar5;
          *puVar5 = uVar1 + 1;
          if (*puVar6 <= uVar1) {
            *puVar5 = 0;
            uVar1 = *puVar8;
            *puVar8 = uVar1 + 1;
            if (*puVar7 <= (ushort)(uVar1 + 1)) {
              *puVar8 = 0;
            }
          }
          if (*(short *)(iVar10 + iVar2 + 0xa8) == 0) {
            FUN_08001348((uint)*puVar8 * iVar9 * 0x20 + iVar4,local_24,iVar9 << 5);
          }
        }
        local_24 = local_24 + 0x400;
        puVar8 = puVar8 + 1;
        iVar4 = iVar4 + 0x400;
        iVar10 = iVar10 + 2;
        local_28 = local_28 + 1;
      } while (local_28 < 4);
    }
    return unaff_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08009778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)((uint)*(ushort *)(DAT_080096a4 + 0x8c) * 4 + DAT_0800977c))();
  return uVar3;
}

