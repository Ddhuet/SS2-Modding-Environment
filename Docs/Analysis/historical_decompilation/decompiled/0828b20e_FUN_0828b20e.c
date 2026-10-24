
/* WARNING: Control flow encountered bad instruction data */

void FUN_0828b20e(void)

{
  int extraout_r2;
  int extraout_r3;
  int extraout_r3_00;
  int iVar1;
  undefined4 unaff_r10;
  int extraout_r12;
  int extraout_r12_00;
  int iVar2;
  int unaff_pc;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  undefined8 in_d7;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 in_d18;
  undefined8 in_d19;
  undefined8 in_d20;
  undefined8 in_d21;
  undefined8 in_d22;
  undefined8 in_d23;
  undefined8 in_d24;
  undefined8 in_d25;
  undefined8 in_d26;
  undefined8 in_d27;
  undefined8 in_d28;
  undefined8 in_d29;
  undefined8 in_d30;
  undefined8 in_d31;
  
  if ((bool)in_ZR || in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CY) {
    *(undefined8 *)(unaff_pc + -0x3f8) = in_d1;
    *(undefined8 *)(unaff_pc + -0x3f0) = in_d2;
    *(undefined8 *)(unaff_pc + -1000) = in_d3;
    *(undefined8 *)(unaff_pc + -0x3e0) = in_d4;
    *(undefined8 *)(unaff_pc + -0x3d8) = in_d5;
    *(undefined8 *)(unaff_pc + -0x3d0) = in_d6;
    *(undefined8 *)(unaff_pc + -0x3c8) = in_d7;
    *(undefined8 *)(unaff_pc + -0x3c0) = unaff_d8;
    *(undefined8 *)(unaff_pc + -0x3b8) = unaff_d9;
    *(undefined8 *)(unaff_pc + -0x3b0) = unaff_d10;
    *(undefined8 *)(unaff_pc + -0x3a8) = unaff_d11;
    *(undefined8 *)(unaff_pc + -0x3a0) = unaff_d12;
    *(undefined8 *)(unaff_pc + -0x398) = unaff_d13;
    *(undefined8 *)(unaff_pc + -0x390) = unaff_d14;
    *(undefined8 *)(unaff_pc + -0x388) = unaff_d15;
    *(undefined8 *)(unaff_pc + -0x380) = in_d16;
    *(undefined8 *)(unaff_pc + -0x378) = in_d17;
    *(undefined8 *)(unaff_pc + -0x370) = in_d18;
    *(undefined8 *)(unaff_pc + -0x368) = in_d19;
    *(undefined8 *)(unaff_pc + -0x360) = in_d20;
    *(undefined8 *)(unaff_pc + -0x358) = in_d21;
    *(undefined8 *)(unaff_pc + -0x350) = in_d22;
    *(undefined8 *)(unaff_pc + -0x348) = in_d23;
    *(undefined8 *)(unaff_pc + -0x340) = in_d24;
    *(undefined8 *)(unaff_pc + -0x338) = in_d25;
    *(undefined8 *)(unaff_pc + -0x330) = in_d26;
    *(undefined8 *)(unaff_pc + -0x328) = in_d27;
    *(undefined8 *)(unaff_pc + -800) = in_d28;
    *(undefined8 *)(unaff_pc + -0x318) = in_d29;
    *(undefined8 *)(unaff_pc + -0x310) = in_d30;
    *(undefined8 *)(unaff_pc + -0x308) = in_d31;
  }
  func_0x080cfeb0();
  if (!in_CY) {
    coprocessor_store(4,in_cr1,unaff_r10);
  }
  if ((bool)in_ZR) {
    coprocessor_load(4,in_cr3,extraout_r2 + -0x104);
  }
  iVar1 = extraout_r3;
  iVar2 = extraout_r12;
  if (in_CY) {
    func_0x0888ca3a();
    iVar1 = extraout_r3_00;
    iVar2 = extraout_r12_00;
  }
  if ((bool)in_NG) {
    coprocessor_loadlong(0xd,in_cr4,iVar1 + -300);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    if ((bool)in_ZR || in_NG != in_OV) {
      UnsignedSaturate(iVar2 >> 0xf,1);
      UnsignedDoesSaturate(iVar2 >> 0xf,1);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

