
/* WARNING: Control flow encountered bad instruction data */

void FUN_081786aa(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r6;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr15;
  
  if (in_CY) {
    coprocessor_store(1,in_cr15,unaff_r6 + -0x54);
  }
                    /* WARNING: Could not recover jumptable at 0x081786b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!in_ZR) {
    (*(code *)(-0x6fffffff - (param_3 + (uint)!in_CY)))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

