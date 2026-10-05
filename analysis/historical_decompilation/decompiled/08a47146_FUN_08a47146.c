
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08a4722e) */
/* WARNING: Removing unreachable block (ram,0x08a47232) */

int FUN_08a47146(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint extraout_r1;
  int unaff_r4;
  uint unaff_r5;
  int iVar3;
  undefined4 unaff_r7;
  int unaff_r11;
  int in_r12;
  int extraout_r12;
  int extraout_r12_00;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  undefined4 in_cr0;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr15;
  undefined4 extraout_s0;
  undefined4 extraout_s1;
  undefined4 extraout_s4;
  undefined4 extraout_s5;
  undefined8 unaff_d10;
  undefined8 in_d18;
  
  if (!(bool)in_OV) {
    unaff_r11 = 0;
  }
  if (in_NG != in_OV) {
    param_1 = func_0x07936016();
    in_r12 = extraout_r12;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    param_1 = func_0x07976042();
    in_r12 = extraout_r12_00;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_storelong(0xd,in_cr12,0x8a4715a);
  }
  if (in_NG == in_OV) {
    if (!(bool)in_OV) {
      *(undefined4 *)(unaff_r4 + -0x604) = unaff_r7;
    }
    if (!(bool)in_CY) {
      func_0x0669952a();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY) {
    in_CY = param_1 < 0x26400;
    in_OV = SBORROW4(0x26400,param_1) != SBORROW4(0x26400 - param_1,1);
    unaff_r11 = 0x26400 - (param_1 + 1);
    in_NG = unaff_r11 < 0;
    in_ZR = unaff_r11 == 0;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY && !(bool)in_ZR) {
      software_interrupt(0xc04ccf);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x0790755a();
  }
  else {
    coprocessor_load(0xc,in_cr13,in_r12 + 0x2ec);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_loadlong(0xf,in_cr0,unaff_r11 + 0x338);
  }
  uVar1 = coprocessor_movefromRt(0,5,7,in_cr11,in_cr15);
  uVar2 = func_0x07d4717c(uVar1);
  if ((bool)in_ZR) {
    software_interrupt(0xbb0000);
  }
  VectorHalvingAdd(CONCAT44(extraout_s5,extraout_s4),CONCAT44(extraout_s1,extraout_s0),4,1);
  coprocessor_load2(0,in_cr0,unaff_r11);
  if ((bool)in_CY) {
    uVar2 = 0x8a471ca;
    in_NG = '\x01';
    in_ZR = false;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_OV) {
      uVar2 = uVar2 + 0x28;
    }
    if ((bool)in_ZR) {
      func_0x0867e62e((short *)(uVar2 + 0x50),(int)*(short *)(uVar2 + 0x50));
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
      software_interrupt(0xba89);
    }
    VectorMultiplySubtract(in_d18,unaff_d10,4,0);
    coprocessor_function(0,0xe,0,in_cr0,in_cr13,in_cr0);
    coprocessor_function(0xf,0xe,0,in_cr15,in_cr13,in_cr0);
    if (!(bool)in_CY) {
      in_CY = false;
      unaff_r5 = extraout_r1 & 0x3fc00;
      in_ZR = unaff_r5 == 0;
      in_NG = '\0';
    }
    if (!(bool)in_CY) {
      in_CY = false;
      in_ZR = (extraout_r1 & 0x2f400) == 0;
      in_NG = '\0';
    }
    iVar3 = coprocessor_movefromRt(0xc,6,5,in_cr13,in_cr13);
    coprocessor_load2(0xf,in_cr15,unaff_r11);
    bVar4 = false;
    bVar7 = (bool)in_CY;
    if ((bool)in_ZR) {
      software_interrupt(0xaa00ff);
      uVar2 = uVar2 & 0x8a4720a;
      bVar7 = unaff_r5 < uVar2 || uVar2 - unaff_r5 < (uint)(byte)in_CY;
      in_OV = SBORROW4(uVar2,unaff_r5) != SBORROW4(uVar2 - unaff_r5,(uint)!(bool)in_CY);
      uVar2 = uVar2 - (unaff_r5 + !(bool)in_CY);
      in_NG = (int)uVar2 < 0;
      bVar4 = uVar2 == 0;
    }
    bVar5 = false;
    bVar8 = bVar7;
    if (bVar4) {
      bVar8 = unaff_r5 < uVar2 || uVar2 - unaff_r5 < (uint)bVar7;
      in_OV = SBORROW4(uVar2,unaff_r5) != SBORROW4(uVar2 - unaff_r5,(uint)!bVar7);
      uVar2 = uVar2 - (unaff_r5 + !bVar7);
      in_NG = (int)uVar2 < 0;
      bVar5 = uVar2 == 0;
    }
    uVar6 = false;
    if (bVar5) {
      in_OV = SBORROW4(uVar2,iVar3) != SBORROW4(uVar2 - iVar3,(uint)!bVar8);
      uVar2 = uVar2 - (iVar3 + (uint)!bVar8);
      in_NG = (int)uVar2 < 0;
      uVar6 = uVar2 == 0;
    }
    if (!(bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x08a4722e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (in_NG == in_OV) {
        func_0x08a0724a(uVar2);
      }
      if ((bool)uVar6 || in_NG != in_OV) {
        coprocessor_storelong(8,in_cr9,unaff_r11 + 0x330);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Could not recover jumptable at 0x08a4722a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (*(code *)(uVar2 & 0x8a4721a))();
    return iVar3;
  }
  return uVar2 + 0x24;
}

