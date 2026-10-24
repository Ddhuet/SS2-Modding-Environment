
undefined4 FUN_08009e48(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 unaff_lr;
  
  iVar1 = FUN_0800c4ec();
  if (iVar1 == 0) {
    iVar1 = FUN_0800c61c();
    if ((iVar1 == 0) && (iVar1 = FUN_0800c978(), iVar1 != 0)) goto LAB_0800a272;
    if (param_1 < 0x18) {
                    /* WARNING: Could not recover jumptable at 0x08009e7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(param_1 * 4 + DAT_08009e7c))();
      return uVar4;
    }
    iVar1 = FUN_0800c710();
    if (iVar1 == 0) {
      if (*(short *)(DAT_0800a0c8 + 0x8c) == 1) {
        if ((*(short *)(DAT_0800a0c8 + 0x90) == 4) && (iVar1 = FUN_08058314(), iVar1 == 0)) {
          iVar1 = FUN_08059954(7);
          if (iVar1 == 0) {
            FUN_08059ab8(0xc4);
            return unaff_lr;
          }
          goto LAB_0800a47c;
        }
      }
      else if (((*(short *)(DAT_0800a0c8 + 0x8c) == 7) && (*(short *)(DAT_0800a0c8 + 0x90) == 4)) &&
              (param_3 == 0)) {
        return unaff_lr;
      }
      FUN_08059ab8(param_1);
      return unaff_lr;
    }
    if (param_3 == 0) {
      if (*(short *)(DAT_0800a1d0 + 0x8c) != 8) {
        return unaff_lr;
      }
      iVar1 = FUN_08058314();
      if (iVar1 != 0) goto LAB_0800a382;
      goto LAB_0800a390;
    }
    if (param_1 == 6) {
      if (*(short *)(DAT_0800a170 + 0x90) == 5) {
        iVar1 = FUN_08058314();
        if (iVar1 != 0) {
          FUN_08059ab8(6);
          return unaff_lr;
        }
        goto LAB_0800a47c;
      }
    }
    else if (param_1 < 7) {
      if ((param_1 == 5) && (*(short *)(DAT_0800a13c + 0x90) == 0xc)) {
        iVar1 = FUN_08058314();
        if (iVar1 != 0) {
          return unaff_lr;
        }
        goto LAB_0800a47c;
      }
    }
    else if (param_1 == 8) {
      if (*(short *)(DAT_0800a198 + 0x90) != 0x12) {
        if (*(short *)(DAT_0800a198 + 0x90) == 0) {
          return unaff_lr;
        }
        iVar1 = FUN_08058314();
        if (iVar1 != 0) {
          FUN_08059ab8(8);
          return unaff_lr;
        }
        goto LAB_0800a47c;
      }
    }
    else if ((param_1 == 9) &&
            ((*(short *)(DAT_0800a1bc + 0x90) == 4 || (*(short *)(DAT_0800a1bc + 0x90) == 0xc)))) {
      iVar1 = FUN_08058314();
      if (iVar1 != 0) {
        FUN_08059ab8(9);
        return unaff_lr;
      }
LAB_0800a47c:
      FUN_08059ab8(0xa5);
      return unaff_lr;
    }
    uVar3 = *DAT_0800a150;
  }
  else {
    iVar1 = FUN_0800c61c();
    if ((iVar1 == 0) && (iVar1 = FUN_0800c978(), iVar1 != 0)) {
LAB_0800a272:
      FUN_08059ab8(0x40);
      return unaff_lr;
    }
    iVar2 = FUN_0800c710();
    iVar1 = DAT_0800a3ac;
    if (iVar2 == 0) {
      if (*(short *)(DAT_0800a3ac + 0x8c) == 0) {
        iVar2 = FUN_0800c898();
        if ((iVar2 == 0) && (iVar2 = FUN_080587d8(), iVar2 == 0)) {
          iVar2 = FUN_08058fb8(0x1a);
          if (iVar2 != 0) {
            FUN_08059ab8(0x188);
            return unaff_lr;
          }
          if (0x14 < *(ushort *)(iVar1 + 0x90)) {
            return unaff_lr;
          }
                    /* WARNING: Could not recover jumptable at 0x0800a3e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (**(code **)((uint)*(ushort *)(iVar1 + 0x90) * 4 + DAT_0800a3e8))();
          return uVar4;
        }
      }
      else if (*(short *)(DAT_0800a3ac + 0x8c) == 0xc) {
        if (param_3 == 0) {
          return unaff_lr;
        }
        if (*(short *)(DAT_0800a3ac + 0x90) != 0) {
          return unaff_lr;
        }
        if (*DAT_0800a484 != 0) goto LAB_0800a47c;
      }
LAB_0800a488:
      FUN_08059ae4(0);
      return unaff_lr;
    }
    if ((((param_3 != 0) && (iVar1 = FUN_08058314(), iVar1 == 0)) &&
        (iVar1 = FUN_0800c710(), iVar1 != 0)) && ((*DAT_0800a218 & 1) == 0)) {
      if (param_2 != 0xd) goto LAB_0800a488;
      goto LAB_0800a382;
    }
    if (param_1 - 5 < 9) {
                    /* WARNING: Could not recover jumptable at 0x0800a22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)((param_1 - 5) * 4 + DAT_0800a230))();
      return uVar4;
    }
    if (param_3 == 0) {
      return unaff_lr;
    }
    uVar3 = *DAT_0800a38c;
  }
  if ((uVar3 & 1) != 0) {
LAB_0800a390:
    FUN_08059ab8(0xb);
    return unaff_lr;
  }
LAB_0800a382:
  FUN_08059ab8(0xd);
  return unaff_lr;
}

