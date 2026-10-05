
/* WARNING: Control flow encountered bad instruction data */

void FUN_08c5aa52(uint param_1,int param_2,undefined4 param_3,int param_4)

{
  uint unaff_r5;
  bool in_CY;
  
  if (!in_CY) {
                    /* WARNING: Could not recover jumptable at 0x08c5aa56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(param_1 & param_2 >> (param_1 & param_4 << (unaff_r5 & 0xff) & 0xff)))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

