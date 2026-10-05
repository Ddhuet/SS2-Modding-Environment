
/* WARNING: Control flow encountered bad instruction data */

void FUN_0826b982(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr0;
  
  if (!in_ZR && in_NG == (bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZR) {
    register0x00000054 = *(BADSPACEBASE **)param_1;
    param_3 = *(undefined4 *)(param_1 + -0x14);
    param_1 = param_1 + -0x1c;
  }
  else {
    param_4 = param_4 + -0x390;
    coprocessor_store(6,in_cr0,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x0826b98e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!in_NG) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (**(code **)((int)register0x00000054 + -0x1d9))(param_1,param_2,param_3,param_4);
  return;
}

