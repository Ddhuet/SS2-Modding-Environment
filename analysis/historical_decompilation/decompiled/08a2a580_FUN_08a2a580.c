
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08a2a594) */

void FUN_08a2a580(uint param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  bool in_ZR;
  
  if (in_ZR) {
    piVar1 = (int *)(param_1 & 0x8a2a58c);
    *piVar1 = (int)piVar1 - param_4;
    piVar1[1] = param_2;
    (*(code *)0x0)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x08a2a594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

