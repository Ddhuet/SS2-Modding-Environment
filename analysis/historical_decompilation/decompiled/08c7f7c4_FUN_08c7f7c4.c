
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x08c7f488) overlaps instruction at (ram,0x08c7f486)
    */
/* WARNING: Removing unreachable block (ram,0x08c7f5de) */
/* WARNING: Removing unreachable block (ram,0x08c7f5d6) */
/* WARNING: Removing unreachable block (ram,0x08c7f5da) */
/* WARNING: Removing unreachable block (ram,0x08c7f5e2) */
/* WARNING: Removing unreachable block (ram,0x08c7f7cc) */
/* WARNING: Removing unreachable block (ram,0x08c7f7ec) */
/* WARNING: Removing unreachable block (ram,0x08c7f7e8) */

void FUN_08c7f7c4(uint *param_1,undefined4 param_2,uint *param_3)

{
  uint *extraout_r2;
  uint *extraout_r2_00;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined8 uVar1;
  undefined8 in_d0;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s4;
  undefined4 extraout_s4_00;
  undefined8 in_d2;
  undefined4 extraout_s5;
  undefined4 extraout_s5_00;
  undefined8 unaff_d9;
  
  if (!(bool)in_NG) {
    param_1 = (uint *)func_0x083ecc4c();
    in_d2 = CONCAT44(extraout_s5,extraout_s4);
    in_d0 = CONCAT44(extraout_s1,extraout_s0);
    param_3 = extraout_r2;
  }
  if (!(bool)in_NG) {
    return;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    param_1 = (uint *)func_0x071c77d8();
    in_d2 = CONCAT44(extraout_s5_00,extraout_s4_00);
    in_d0 = CONCAT44(extraout_s1_00,extraout_s0_00);
    param_3 = extraout_r2_00;
  }
  if (!(bool)in_NG) {
    *param_3 = (uint)param_1;
  }
  if ((bool)in_CY) {
    in_ZR = param_1 == (uint *)0x0;
  }
  if (!(bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x08c7f7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  switch(!(bool)in_CY) {
  case false:
    uVar1 = VectorHalvingAdd(in_d2,in_d0,4,0);
    VectorHalvingAdd(unaff_d9,uVar1,2,0);
                    /* WARNING: Could not recover jumptable at 0x08c7f5d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_CY == 0x8c7f488) {
    param_3 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x08c7f5d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((uint)param_1 & (uint)param_3 >> 4))();
  return;
}

