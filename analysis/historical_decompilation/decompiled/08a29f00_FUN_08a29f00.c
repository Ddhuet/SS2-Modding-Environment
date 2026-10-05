
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08a29f14) */

void FUN_08a29f00(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint *puVar1;
  bool in_ZR;
  
  if (in_ZR) {
    puVar1 = (uint *)(param_1 & 0x8a29f0c);
    *puVar1 = (int)puVar1 - param_4;
    puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x08a29f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((int)puVar1 - param_4 & param_4 >> 0x14 & param_4 >> (param_4 & 0xff)))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x08a29f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

