
/* WARNING: Control flow encountered bad instruction data */

void FUN_088abd1a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 extraout_r3_04;
  undefined4 extraout_r3_05;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined8 *unaff_r8;
  uint unaff_r10;
  byte *unaff_r11;
  byte *pbVar1;
  undefined4 in_r12;
  undefined4 extraout_r12;
  undefined4 extraout_r12_00;
  undefined4 extraout_r12_01;
  undefined4 extraout_r12_02;
  undefined4 extraout_r12_03;
  undefined4 extraout_r12_04;
  undefined4 extraout_r12_05;
  uint unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined8 uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  if (in_NG != in_OV) {
    unaff_lr = 0x88abd1e;
    uVar2 = func_0x080193ca();
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
    unaff_lr = 0x88abd22;
    uVar2 = func_0x0780dbce();
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  if (in_NG == in_OV) {
    unaff_lr = 0x88abd26;
    uVar2 = func_0x078027d2();
    param_4 = extraout_r3_01;
    in_r12 = extraout_r12_01;
  }
  if (in_NG == in_OV) {
    unaff_lr = 0x88abd2a;
    uVar2 = func_0x07742c16();
    param_4 = extraout_r3_02;
    in_r12 = extraout_r12_02;
  }
  if (in_NG != in_OV) {
    if (in_NG == in_OV) {
      unaff_lr = 0x88abd32;
      uVar2 = func_0x0778dbde();
      param_4 = extraout_r3_03;
      in_r12 = extraout_r12_03;
    }
    if (in_NG != in_OV) {
      unaff_lr = 0x88abd36;
      uVar2 = func_0x07795f62();
      param_4 = extraout_r3_04;
      in_r12 = extraout_r12_04;
    }
    if ((bool)in_CY && !(bool)in_ZR) {
      unaff_lr = 0x88abd3a;
      uVar2 = func_0x0778eb1e();
      param_4 = extraout_r3_05;
      in_r12 = extraout_r12_05;
    }
    if ((bool)in_OV) {
      if ((bool)in_NG != true) {
        if ((bool)in_NG == true) {
          *unaff_r8 = uVar2;
          *(undefined4 *)(unaff_r8 + 1) = param_4;
          *(undefined4 *)((int)unaff_r8 + 0xc) = unaff_r5;
          *(undefined4 *)(unaff_r8 + 2) = unaff_r7;
          *(byte **)((int)unaff_r8 + 0x14) = unaff_r11;
          *(undefined4 *)(unaff_r8 + 3) = in_r12;
          *(BADSPACEBASE **)((int)unaff_r8 + 0x1c) = register0x00000054;
          *(undefined4 *)(unaff_r8 + 4) = 0x88abd4a;
          unaff_r8 = (undefined8 *)((int)unaff_r8 + 0x24);
        }
        if (!(bool)in_ZR && (bool)in_NG == true) {
          unaff_r10 = (uint)*(byte *)((int)unaff_r8 + -0xaaa);
        }
        pbVar1 = unaff_r11;
        if ((bool)in_CY && !(bool)in_ZR) {
          pbVar1 = unaff_r11 + -(unaff_lr >> 0x1d | unaff_lr << 3);
          unaff_lr = (uint)*unaff_r11;
        }
        pbVar1[-0xcc9] = (byte)unaff_lr;
        if (!(bool)in_NG) {
          *(uint *)(unaff_r10 + 0xce9) = (uint)*(byte *)((int)unaff_r8 + -0xccc);
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
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

