
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0827ec36) */
/* WARNING: Removing unreachable block (ram,0x08c47626) */
/* WARNING: Removing unreachable block (ram,0x0827ec46) */

undefined4 FUN_0827ec06(uint param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint extraout_r2;
  uint extraout_r3;
  uint *unaff_r4;
  uint unaff_r5;
  undefined4 *unaff_r6;
  uint unaff_r7;
  uint unaff_r8;
  uint unaff_r9;
  uint unaff_r10;
  uint unaff_r11;
  uint in_r12;
  uint extraout_r12;
  undefined4 unaff_pc;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined4 in_cr13;
  undefined4 extraout_s2;
  undefined8 in_d1;
  undefined4 extraout_s3;
  undefined8 in_d28;
  undefined1 auVar2 [16];
  
  if (in_NG == in_OV) {
    software_interrupt(0xb4b5b8);
    param_1 = func_0x06dea2ce();
    in_d1 = CONCAT44(extraout_s3,extraout_s2);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    in_r12 = extraout_r12;
  }
  if (in_NG != in_OV) {
    return *unaff_r6;
  }
  software_interrupt(0xadacad);
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_loadlong(1,in_cr13,unaff_r7);
  }
  else {
    *unaff_r4 = param_1;
    unaff_r4[1] = param_3;
    unaff_r4[2] = param_4;
    unaff_r4[3] = (uint)unaff_r4;
    unaff_r4[4] = unaff_r5;
    unaff_r4[5] = unaff_r7;
    unaff_r4[6] = unaff_r8;
    unaff_r4[7] = unaff_r9;
    unaff_r4[8] = unaff_r10;
    unaff_r4[9] = unaff_r11;
    unaff_r4[10] = in_r12;
    unaff_r4[0xb] = (uint)register0x00000054;
    unaff_r4[0xc] = 0x827ec1e;
  }
  uVar1 = VectorGetElement(in_d1,1,4,0);
  auVar2 = VectorDoubleMultiplySubtractLong(in_d28,uVar1,4,0);
  SatQ(auVar2,4,0);
  if ((bool)in_ZR) {
    *(undefined4 *)(param_3 - 0xcf6) = unaff_pc;
  }
  if (!(bool)in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x08c47622. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(param_1 & param_1 << 0x1e))();
    return uVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

