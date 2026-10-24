
/* WARNING: Control flow encountered bad instruction data */

ulonglong FUN_08e4a3fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  ulonglong *unaff_r8;
  undefined4 *unaff_r9;
  undefined4 *unaff_r10;
  undefined4 *unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined4 extraout_r12_01;
  undefined4 extraout_r12_02;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  ulonglong uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  if (in_NG != in_OV) {
    unaff_lr = 0x8e4a400;
    uVar2 = func_0x07937914();
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x8e4a404;
    uVar2 = func_0x078f2958();
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x8e4a408;
    uVar2 = func_0x078f4da0();
    param_4 = extraout_r3_01;
    in_r12 = extraout_r12_01;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    return uVar2 & 0xffffffff;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    *(int *)((int)unaff_r8 + 4) = (int)uVar2;
    *(undefined4 *)(unaff_r8 + 1) = param_4;
    *(undefined4 *)((int)unaff_r8 + 0xc) = unaff_r4;
    *(undefined4 *)(unaff_r8 + 2) = unaff_r7;
    *(undefined4 **)((int)unaff_r8 + 0x14) = unaff_r11;
    *(undefined4 *)(unaff_r8 + 3) = 0x8e4a414;
    *(int *)unaff_r8 = (int)(uVar2 >> 0x20);
    *(undefined4 *)((int)unaff_r8 + 4) = param_4;
    *(undefined4 *)(unaff_r8 + 1) = unaff_r7;
    *(ulonglong **)((int)unaff_r8 + 0xc) = unaff_r8;
    *(undefined4 **)(unaff_r8 + 2) = unaff_r9;
    *(undefined4 **)((int)unaff_r8 + 0x14) = unaff_r10;
    *(undefined4 *)(unaff_r8 + 3) = in_r12;
    *(undefined4 *)((int)unaff_r8 + 0x1c) = 0x8e4a41c;
    *unaff_r8 = uVar2;
    *(undefined4 *)(unaff_r8 + 1) = param_4;
    *(undefined4 *)((int)unaff_r8 + 0xc) = unaff_r4;
    *(undefined4 *)(unaff_r8 + 2) = unaff_r7;
    *(undefined4 **)((int)unaff_r8 + 0x14) = unaff_r11;
    *(undefined4 *)(unaff_r8 + 3) = 0x8e4a420;
    return *(ulonglong *)((int)unaff_r8 + 4);
  }
  *(int *)unaff_r8 = (int)uVar2;
  *(undefined4 *)((int)unaff_r8 + 4) = param_4;
  *(undefined4 *)(unaff_r8 + 1) = unaff_r7;
  *(ulonglong **)((int)unaff_r8 + 0xc) = unaff_r8;
  *(undefined4 **)(unaff_r8 + 2) = unaff_r9;
  *(undefined4 **)((int)unaff_r8 + 0x14) = unaff_r10;
  *(undefined4 *)(unaff_r8 + 3) = in_r12;
  *(BADSPACEBASE **)((int)unaff_r8 + 0x1c) = register0x00000054;
  *(undefined4 *)(unaff_r8 + 4) = unaff_lr;
  if (in_NG != in_OV) {
    if (in_NG != in_OV) {
      uVar2 = func_0x078f4f18();
      param_4 = extraout_r3_02;
      in_r12 = extraout_r12_02;
    }
    uVar1 = (undefined4)(uVar2 >> 0x20);
    if (!(bool)in_CY || (bool)in_ZR) {
      *(int *)((int)unaff_r8 + 4) = (int)uVar2;
      *(undefined4 *)(unaff_r8 + 1) = param_4;
      *(undefined4 *)((int)unaff_r8 + 0xc) = unaff_r4;
      *(undefined4 *)(unaff_r8 + 2) = unaff_r7;
      *(undefined4 **)((int)unaff_r8 + 0x14) = unaff_r9;
      *(undefined4 **)(unaff_r8 + 3) = unaff_r11;
      *(undefined4 *)((int)unaff_r8 + 0x1c) = in_r12;
      *(undefined4 *)(unaff_r8 + 4) = 0x8e4a430;
      return CONCAT44(uVar1,*unaff_r10);
    }
    if ((bool)in_CY && !(bool)in_ZR) {
      return CONCAT44(uVar1,*unaff_r9);
    }
    if ((bool)in_OV) {
      if ((bool)in_CY && !(bool)in_ZR) {
        return CONCAT44(uVar1,unaff_r10[1]);
      }
      if (!(bool)in_CY || (bool)in_ZR) {
        unaff_r11[1] = (int)uVar2;
        unaff_r11[2] = param_4;
        unaff_r11[3] = unaff_r4;
        unaff_r11[4] = unaff_r7;
        unaff_r11[5] = unaff_r9;
        unaff_r11[6] = unaff_r11;
        unaff_r11[7] = register0x00000054;
        unaff_r11[8] = 0x8e4a448;
      }
      if (in_NG == '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *unaff_r9 = uVar1;
    unaff_r9[1] = param_4;
    unaff_r9[2] = unaff_r5;
    unaff_r9[3] = unaff_r7;
    unaff_r9[4] = unaff_r8;
    unaff_r9[5] = unaff_r11;
    unaff_r9[6] = in_r12;
    unaff_r9[7] = 0x8e4a43c;
    return CONCAT44(uVar1,*unaff_r11);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

