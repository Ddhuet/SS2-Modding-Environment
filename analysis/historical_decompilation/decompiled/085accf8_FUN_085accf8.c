
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_085accf8(undefined4 param_1,undefined4 param_2,int param_3,undefined1 *param_4)

{
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  undefined1 *extraout_r3;
  undefined1 *extraout_r3_00;
  undefined1 *extraout_r3_01;
  undefined1 *extraout_r3_02;
  undefined1 *extraout_r3_03;
  undefined1 *unaff_r4;
  undefined1 *puVar1;
  int unaff_r6;
  undefined4 unaff_r7;
  int *unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int unaff_r11;
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  int extraout_r12_01;
  int extraout_r12_02;
  int extraout_r12_03;
  int unaff_lr;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 in_OV;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  if ((bool)in_CY && !(bool)in_ZR) {
    unaff_lr = 0x85accfc;
    uVar2 = func_0x0749a24c();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if ((bool)in_OV) {
    return *(undefined8 *)(unaff_r11 + 4);
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    unaff_lr = 0x85acd04;
    uVar2 = func_0x0749a254();
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  if ((bool)in_OV) {
    unaff_lr = 0x85acd08;
    uVar2 = func_0x074865d4();
    param_3 = extraout_r2_01;
    param_4 = extraout_r3_01;
    in_r12 = extraout_r12_01;
  }
  if ((bool)in_OV) {
    unaff_lr = 0x85acd0c;
    uVar2 = func_0x0748665c();
    param_3 = extraout_r2_02;
    param_4 = extraout_r3_02;
    in_r12 = extraout_r12_02;
  }
  if ((bool)in_OV) {
    unaff_r6 = SignedSaturate(param_3 >> 10,0x1c);
    SignedDoesSaturate(param_3 >> 10,0x1c);
    unaff_lr = 0x85acd14;
    uVar2 = func_0x074865a0();
    param_3 = extraout_r2_03;
    param_4 = extraout_r3_03;
    in_r12 = extraout_r12_03;
  }
  if ((bool)in_NG) {
    *unaff_r4 = (char)(unaff_r4 + -0x444);
    unaff_r4[-0x444] = (char)(unaff_r4 + -0x878);
    unaff_r4[-0x878] = (char)(unaff_r4 + -0xcbc);
    unaff_r4[-0xcbc] = (char)(unaff_r4 + -0xfff);
    puVar1 = unaff_r4 + -0x1433;
    unaff_r4[-0xfff] = (char)puVar1;
    unaff_r4 = unaff_r4 + -0x1866;
    *puVar1 = (char)param_4;
    *param_4 = (char)unaff_r4;
    param_4[-0x333] = (char)unaff_r4;
  }
  if ((bool)in_CY && !(bool)in_ZR) {
    if (!(bool)in_CY || (bool)in_ZR) {
      *(int *)(unaff_r9 + 4) = param_3;
      *(int *)(unaff_r9 + 8) = unaff_r6;
      *(int **)(unaff_r9 + 0xc) = unaff_r8;
      *(int *)(unaff_r9 + 0x10) = unaff_r9;
      *(int *)(unaff_r9 + 0x14) = unaff_r10;
      *(undefined4 *)(unaff_r9 + 0x18) = 0x85acd40;
      return uVar2;
    }
    if (!(bool)in_CY || (bool)in_ZR) {
      if ((bool)in_CY && !(bool)in_ZR) {
        unaff_r8[1] = param_3;
        unaff_r8[2] = unaff_r6;
        unaff_r8[3] = unaff_r10;
        unaff_r8[4] = in_r12;
        unaff_r8[5] = (int)register0x00000054;
        unaff_r8[6] = unaff_lr;
      }
      if (!(bool)in_OV) {
        *unaff_r8 = param_3;
        unaff_r8[1] = unaff_r6;
        unaff_r8[2] = (int)unaff_r8;
        unaff_r8[3] = unaff_r9;
        unaff_r8[4] = unaff_r10;
        unaff_r8[5] = 0x85acd54;
      }
      if ((bool)in_CY && !(bool)in_ZR) {
        *(undefined4 *)((int)unaff_r8 + ((int)unaff_r4 >> 8)) = unaff_r7;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return uVar2;
}

