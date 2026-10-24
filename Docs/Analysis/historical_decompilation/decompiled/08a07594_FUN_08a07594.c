
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08a075a0) */

void FUN_08a07594(uint param_1)

{
  uint unaff_r6;
  bool in_NG;
  bool in_ZR;
  
  if (in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x08a0759c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(param_1 & unaff_r6))();
    return;
  }
  if (in_NG) {
    software_interrupt(0xfff000);
  }
  software_interrupt(0xf00000);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

