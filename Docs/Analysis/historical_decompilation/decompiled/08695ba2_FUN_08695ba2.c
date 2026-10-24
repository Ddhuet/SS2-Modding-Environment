
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08695bae) */
/* WARNING: Removing unreachable block (ram,0x08695bb6) */

void FUN_08695ba2(uint param_1)

{
  bool in_ZR;
  bool in_CY;
  
  if (in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not recover jumptable at 0x08695bb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (in_ZR) {
    (*(code *)(param_1 & param_1 << 0x12))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

