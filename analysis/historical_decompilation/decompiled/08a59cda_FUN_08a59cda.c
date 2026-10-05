
/* WARNING: Control flow encountered bad instruction data */

void FUN_08a59cda(uint param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  uint unaff_r5;
  bool in_NG;
  bool in_ZR;
  undefined4 in_cr0;
  
  if (!in_NG) {
    unaff_r5 = unaff_r5 + 0xb67;
  }
  if (in_ZR) {
    register0x00000054 = (BADSPACEBASE *)(param_1 & unaff_r5);
    software_interrupt(0xff0000);
  }
  UNRECOVERED_JUMPTABLE = (code *)func_0x07919d00(param_1);
  if (in_ZR) {
    software_interrupt(0xdc0000);
  }
  coprocessor_storelong2(0,in_cr0,register0x00000054);
  if (!in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not recover jumptable at 0x08a59d26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

