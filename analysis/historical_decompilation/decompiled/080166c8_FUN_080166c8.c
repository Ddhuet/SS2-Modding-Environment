
longlong FUN_080166c8(int param_1,int param_2,short param_3,short param_4,short param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint unaff_lr;
  longlong lVar5;
  
  iVar4 = ((int)param_3 - ((param_1 << 8) >> 0x10)) * 0x10000 >> 0x10;
  iVar3 = ((int)param_4 - ((param_2 << 8) >> 0x10)) * 0x10000 >> 0x10;
  uVar1 = FUN_080b9a9c(iVar4 * iVar4 + iVar3 * iVar3);
  if ((int)param_5 < (int)(uVar1 & 0xffff)) {
    uVar1 = FUN_080b9a80(iVar4,iVar3);
    uVar2 = (uVar1 & 0xffff) >> 0xd;
    if (0x80000000 < uVar1 * 0x80000) {
      if (uVar2 < 7) {
        uVar2 = uVar2 + 1;
      }
      else {
        uVar2 = 0;
      }
    }
    if (uVar2 < 8) {
                    /* WARNING: Could not recover jumptable at 0x08016732. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar5 = (**(code **)(uVar2 * 4 + DAT_08016734))();
      return lVar5;
    }
  }
  return (ulonglong)unaff_lr << 0x20;
}

