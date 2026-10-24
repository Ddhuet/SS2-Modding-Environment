
/* WARNING: Control flow encountered bad instruction data */

void FUN_08176df8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint unaff_r9;
  undefined4 unaff_lr;
  bool in_ZR;
  undefined4 in_cr11;
  
  if (in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_load(5,in_cr11,unaff_lr);
                    /* WARNING: Could not recover jumptable at 0x08176dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(param_3 & unaff_r9 >> 0x16))();
  return;
}

