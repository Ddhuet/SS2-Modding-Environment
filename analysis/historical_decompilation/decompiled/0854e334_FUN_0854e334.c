
/* WARNING: Control flow encountered bad instruction data */

void FUN_0854e334(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r3;
  uint unaff_r4;
  undefined4 unaff_r5;
  int iVar2;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  undefined4 unaff_r11;
  undefined1 in_r12;
  undefined1 extraout_r12;
  undefined4 extraout_r12_00;
  undefined1 *puVar3;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined8 uVar4;
  
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x07a3ba3c();
    param_2 = extraout_r1;
    in_r12 = extraout_r12;
  }
  uRam0854ecef = in_r12;
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x07a45ab8();
    param_2 = extraout_r1_00;
  }
  if (in_NG != in_OV) {
    coprocessor_load(0,in_cr9,param_2);
  }
  uVar4 = func_0x078c1a38();
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  if (!(bool)in_CY || (bool)in_ZR) {
    uVar1 = unaff_r4 >> 8 | unaff_r4 << 0x18;
    in_OV = SCARRY4(iVar2,uVar1);
    iVar2 = iVar2 + uVar1;
    in_NG = iVar2 < 0;
    in_ZR = iVar2 == 0;
  }
  coprocessor_function(0xc,0xc,6,in_cr11,in_cr11,in_cr0);
  if (in_NG == in_OV) {
    *unaff_r8 = (int)uVar4;
    unaff_r8[1] = extraout_r3;
    unaff_r8[2] = unaff_r4;
    unaff_r8[3] = unaff_r5;
    unaff_r8[4] = unaff_r7;
    unaff_r8[5] = unaff_r8;
    unaff_r8[6] = unaff_r11;
    unaff_r8[7] = extraout_r12_00;
    unaff_r8[8] = register0x00000054;
    unaff_r8[9] = 0x854e35c;
    unaff_r8[10] = (int)uVar4;
    unaff_r8[0xb] = extraout_r3;
    unaff_r8[0xc] = unaff_r4;
    unaff_r8[0xd] = unaff_r5;
    unaff_r8[0xe] = unaff_r7;
    unaff_r8[0xf] = unaff_r8 + 10;
    unaff_r8[0x10] = unaff_r11;
    unaff_r8[0x11] = extraout_r12_00;
    unaff_r8[0x12] = register0x00000054;
    unaff_r8[0x13] = 0x854e364;
  }
  else {
    puVar3 = &stack0x00000324;
    register0x00000054 = (BADSPACEBASE *)&stack0x00000324;
    coprocessor_load(9,in_cr12,puVar3);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_storelong(0xf,in_cr13,(undefined1 *)((int)register0x00000054 + 0x368));
  }
  func_0x07c41e70();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

