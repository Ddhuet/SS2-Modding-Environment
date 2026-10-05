
/* WARNING: Control flow encountered bad instruction data */

int FUN_08a5e746(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int extraout_r1;
  undefined4 extraout_r2;
  int extraout_r3;
  int extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 *unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  int iVar3;
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  int extraout_r12_01;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined4 extraout_s0;
  undefined4 extraout_s1;
  undefined4 extraout_s4;
  undefined4 extraout_s5;
  undefined8 unaff_d10;
  undefined8 in_d18;
  undefined8 uVar4;
  
  uVar4 = CONCAT44(param_2,param_1);
  if (!(bool)in_OV) {
    unaff_r11 = 0;
  }
  if (in_NG != in_OV) {
    uVar4 = func_0x0794d616();
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    uVar4 = func_0x0798d642();
    param_4 = extraout_r3_00;
    in_r12 = extraout_r12_00;
  }
  uVar2 = (uint)uVar4;
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_storelong(0xd,in_cr12,0x8a5e75a);
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY) {
    in_CY = uVar2 < 0x26400;
    in_OV = SBORROW4(0x26400,uVar2) != SBORROW4(0x26400 - uVar2,1);
    unaff_r11 = 0x26400 - (uVar2 + 1);
    in_NG = unaff_r11 < 0;
    in_ZR = unaff_r11 == 0;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    if (!(bool)in_CY) {
      *(BADSPACEBASE **)param_4 = register0x00000054;
      *(int *)(param_4 + -4) = in_r12;
      *(undefined4 *)(param_4 + -8) = unaff_r10;
      *(undefined4 *)(param_4 + -0xc) = unaff_r9;
      *(undefined4 *)(param_4 + -0x10) = unaff_r8;
      *(undefined8 *)(param_4 + -0x18) = uVar4;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x0791eb5a();
  }
  else {
    coprocessor_load(0xc,in_cr13,in_r12 + 0x2ec);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_loadlong(0xf,in_cr0,unaff_r11 + 0x338);
  }
  uVar1 = coprocessor_movefromRt(0,5,7,in_cr11,in_cr15);
  uVar2 = func_0x07d5e77c(uVar1);
  if ((bool)in_ZR) {
    software_interrupt(0xbb0000);
  }
  VectorHalvingAdd(CONCAT44(extraout_s5,extraout_s4),CONCAT44(extraout_s1,extraout_s0),4,1);
  coprocessor_load2(0,in_cr0,unaff_r11);
  uVar1 = extraout_r3_01;
  if ((bool)in_CY) {
    uVar2 = 0x8a5e7ca;
    uVar1 = 0x80a5e7ce;
    in_NG = true;
    in_ZR = false;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_NG) {
      uVar2 = (uint)*(byte *)(extraout_r1 + uVar2 * -0x4000);
    }
    if ((bool)in_CY) {
      unaff_r5 = 0;
    }
    if (!(bool)in_CY || (bool)in_ZR) {
      software_interrupt(0xe59ff5);
    }
    iVar3 = extraout_r12_01;
    if ((bool)in_ZR || in_NG != in_OV) {
      iVar3 = -0x2000000 - unaff_r11;
    }
    if (!(bool)in_NG) {
      *unaff_r7 = 0x8a5e776;
      unaff_r7[-1] = iVar3;
      unaff_r7[-2] = unaff_r8;
      unaff_r7[-3] = unaff_r6;
      unaff_r7[-4] = unaff_r5;
      unaff_r7[-5] = unaff_r4;
      unaff_r7[-6] = uVar1;
      unaff_r7[-7] = extraout_r2;
      unaff_r7[-8] = extraout_r1;
      unaff_r7[-9] = uVar2;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
    return uVar2 + 0x20;
  }
  if (in_NG != in_OV) {
    if (!(bool)in_ZR && in_NG == in_OV) {
      software_interrupt(0xca89);
    }
    FloatVectorCompareGreaterThan(in_d18,unaff_d10,2);
    coprocessor_function(0,0xe,0,in_cr0,in_cr13,in_cr0);
    coprocessor_function(0xf,0xe,0,in_cr15,in_cr13,in_cr0);
    coprocessor_movefromRt(0xc,6,5,in_cr14,in_cr13);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return uVar2 + 0x24;
}

