
undefined4 FUN_0802221c(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  
  uVar4 = 0;
  uVar1 = *DAT_080222a8 & 1;
  while( true ) {
    if (uVar1 == 0) {
      if (uVar4 < 0x20) {
        iVar3 = *DAT_080222ac + uVar4 * 0x28;
        *(undefined4 *)(iVar3 + 0xc) = DAT_080222b0;
        iVar2 = FUN_08001494(0x400);
        *(int *)(iVar3 + 0x20) = iVar2;
        if (iVar2 != 0) {
          *(int *)(iVar3 + 0x10) = iVar2 + 0x3fc;
          *(undefined4 *)(iVar3 + 8) = 0x46;
          *(undefined4 *)(iVar3 + 0x24) = 0;
          FUN_08000274(iVar3,param_1 >> 8 | (param_2 >> 8) << 0x10,
                       (uint)(param_3 != 0) << 0x10 | uVar4);
          *DAT_080222a8 = *DAT_080222a8 | 1 << (uVar4 & 0xff);
        }
      }
      return unaff_lr;
    }
    uVar4 = uVar4 + 1;
    if (0x1f < uVar4) break;
    uVar1 = *DAT_080222a8 & 1 << (uVar4 & 0xff);
  }
  return unaff_lr;
}

