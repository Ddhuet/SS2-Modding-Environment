
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08d5d394) */

void FUN_08d5d380(uint param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  bool in_ZR;
  
  if (in_ZR) {
    piVar1 = (int *)(param_1 & 0x8d5d38c);
    *piVar1 = (int)piVar1 - param_4;
    piVar1[1] = param_2;
    (*(code *)0x0)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x08d5d394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

