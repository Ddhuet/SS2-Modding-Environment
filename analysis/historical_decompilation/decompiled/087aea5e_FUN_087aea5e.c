
/* WARNING: Control flow encountered bad instruction data */

void FUN_087aea5e(undefined4 param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  undefined1 *puVar1;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r3;
  uint extraout_r3_00;
  int unaff_r4;
  byte *unaff_r6;
  uint uVar2;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  byte *unaff_r9;
  byte *pbVar3;
  int unaff_r10;
  int iVar4;
  int iVar5;
  uint unaff_r11;
  uint uVar6;
  uint in_r12;
  undefined1 *puVar7;
  int unaff_lr;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr7;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if ((bool)in_CY) {
    uVar2 = (int)unaff_r6 - (unaff_r4 >> 10);
    unaff_r11 = (uint)*unaff_r6;
    pbVar3 = unaff_r9;
  }
  else {
    pbVar3 = unaff_r9 + -(param_4 >> 6);
    uVar2 = (uint)*unaff_r9;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_moveto(2,7,0,param_3,in_cr12,in_cr2);
  }
  if (in_NG != in_OV) {
    coprocessor_function(0xd,0xe,7,in_cr14,in_cr15,in_cr13);
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_function(0xe,0xf,7,in_cr14,in_cr14,in_cr12);
  }
  coprocessor_storelong(0xf,in_cr15,unaff_r11);
  iVar4 = unaff_r10 + 0x3a8;
  coprocessor_load(0xe,in_cr14,unaff_r10);
  if (!(bool)in_CY || (bool)in_ZR) {
    return;
  }
  if (!(bool)in_CY) {
    in_CY = 0;
    in_r12 = param_3 ^ 0x32c00;
    in_NG = (int)in_r12 < 0;
    in_ZR = in_r12 == 0;
  }
  puVar1 = param_2;
  if (!(bool)in_ZR) {
    puVar1 = param_2 + -0xba8;
    *param_2 = (char)iVar4;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(7,in_cr7,in_r12 + 0x1d4);
  }
  coprocessor_function(0xe,0xe,7,in_cr14,in_cr13,in_cr13);
  coprocessor_moveto(0xd,6,6,unaff_lr,in_cr13,in_cr14);
  if ((bool)in_ZR || in_NG != in_OV) {
    software_interrupt(0xeeeeee);
  }
  software_interrupt(0xefccdd);
  coprocessor_moveto(0xd,6,6,unaff_lr,in_cr13,in_cr15);
  uVar6 = unaff_r11;
  if (in_NG != in_OV) {
    uVar6 = unaff_r11 + 0x3f8;
    coprocessor_load(0xf,in_cr13,unaff_r11);
    unaff_lr = 0x87aeaa6;
    func_0x0762661e(param_1,puVar1);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  coprocessor_storelong(0xd,in_cr14,unaff_lr + 0x330);
  coprocessor_storelong(0xd,in_cr14,unaff_lr + 0x370);
  coprocessor_moveto(0xe,7,7,unaff_lr,in_cr14,in_cr14);
  if ((bool)in_ZR || in_NG != in_OV) {
    puVar7 = &stack0x00000374;
    register0x00000054 = (BADSPACEBASE *)&stack0x00000374;
    coprocessor_storelong(0xc,in_cr12,puVar7);
  }
  coprocessor_loadlong(0xc,in_cr12,(undefined1 *)((int)register0x00000054 + 0x378));
  coprocessor_moveto(0xe,7,6,register0x00000054,in_cr13,in_cr14);
  coprocessor_function(0xe,0xe,7,in_cr14,in_cr12,in_cr14);
  coprocessor_movefromRt(0xe,7,6,in_cr14,in_cr13);
                    /* WARNING: Could not recover jumptable at 0x087aeac6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if ((bool)in_ZR) {
    if (in_NG == in_OV) {
      func_0x07ab735e();
      param_3 = extraout_r2_00;
      param_4 = extraout_r3_00;
    }
    iVar5 = iVar4;
    if (!(bool)in_ZR && in_NG == in_OV) {
      iVar5 = unaff_r10 + 0x3fc;
      coprocessor_load(2,in_cr2,iVar4);
    }
    if (in_NG == in_OV) {
      if ((bool)in_CY && !(bool)in_ZR) {
        return;
      }
      *(uint *)(iVar5 + 4) = param_3;
      *(uint *)(iVar5 + 8) = param_4;
      *(uint *)(iVar5 + 0xc) = uVar2;
      *(undefined4 *)(iVar5 + 0x10) = unaff_r7;
      *(undefined4 *)(iVar5 + 0x14) = unaff_r8;
      *(byte **)(iVar5 + 0x18) = pbVar3;
      *(uint *)(iVar5 + 0x1c) = uVar6;
      *(BADSPACEBASE **)(iVar5 + 0x20) = register0x00000054;
      *(undefined4 *)(iVar5 + 0x24) = 0x87aeade;
      if (in_NG != in_OV) {
        coprocessor_loadlong(10,in_cr12,uVar6 + 0x264);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (**(code **)(unaff_r10 + 0x13a7))();
  return;
}

