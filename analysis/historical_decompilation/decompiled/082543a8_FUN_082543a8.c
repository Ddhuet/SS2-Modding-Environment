
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x082543ac) */
/* WARNING: Removing unreachable block (ram,0x082543b8) */

void FUN_082543a8(undefined4 param_1,undefined4 param_2)

{
  uint unaff_r4;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr9;
  undefined4 in_cr12;
  undefined4 in_cr15;
  
  if (!in_ZR) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x082543b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!in_CY) {
    if (in_NG != in_OV) {
      coprocessor_movefromRt(9,7,1,in_cr1,in_cr9);
    }
    coprocessor_moveto(5,0,6,param_2,in_cr12,in_cr15);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (*(code *)(unaff_r4 & 0xf000000e))();
  return;
}

