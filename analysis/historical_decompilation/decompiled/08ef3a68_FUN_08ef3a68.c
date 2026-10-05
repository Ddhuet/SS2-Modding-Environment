
/* WARNING: Control flow encountered bad instruction data */

void FUN_08ef3a68(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  uint extraout_r2;
  uint extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  uint unaff_r5;
  byte *unaff_r7;
  int unaff_r8;
  undefined4 unaff_r9;
  undefined4 *unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined4 unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined8 uVar1;
  
  uVar1 = CONCAT44(param_2,param_1);
  if (in_NG != in_OV) {
    unaff_lr = 0x8ef3a6c;
    uVar1 = func_0x079a0fcc();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
    unaff_lr = 0x8ef3a74;
    uVar1 = func_0x07990ebc();
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY && !(bool)in_ZR) {
      *(int *)unaff_r7 = (int)uVar1;
      *(undefined4 *)(unaff_r7 + 4) = unaff_r4;
      *(int *)(unaff_r7 + 8) = unaff_r8;
      *(undefined4 *)(unaff_r7 + 0xc) = unaff_r9;
      *(undefined4 *)(unaff_r7 + 0x10) = in_r12;
      *(undefined4 *)(unaff_r7 + 0x14) = unaff_lr;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!(bool)in_OV) {
      register0x00000054 = *(BADSPACEBASE **)(unaff_r7 + -4);
      unaff_r9 = *(undefined4 *)(unaff_r7 + -0xc);
      unaff_r8 = *(int *)(unaff_r7 + -0x10);
      unaff_r4 = *(undefined4 *)(unaff_r7 + -0x14);
    }
    if ((bool)in_CY && !(bool)in_ZR) {
      unaff_r7 = unaff_r7 + -(param_3 >> 2);
      unaff_r5 = (uint)*unaff_r7;
    }
    if ((bool)in_OV) {
      if ((bool)in_NG) {
        *(int *)(unaff_r8 + 0x88a) = unaff_r8;
      }
      else {
        *unaff_r10 = (int)((ulonglong)uVar1 >> 0x20);
        unaff_r10[1] = param_4;
        unaff_r10[2] = unaff_r4;
        unaff_r10[3] = unaff_r5;
        unaff_r10[4] = unaff_r7;
        unaff_r10[5] = unaff_r9;
        unaff_r10[6] = unaff_r11;
        unaff_r10[7] = register0x00000054;
        unaff_r10[8] = 0x8ef3a94;
        *(undefined4 **)((int)unaff_r10 + ((uint)unaff_r10 >> 0x11)) = unaff_r10;
      }
      if (!(bool)in_CY) {
        *unaff_r7 = (char)unaff_r7 + 0x78;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

