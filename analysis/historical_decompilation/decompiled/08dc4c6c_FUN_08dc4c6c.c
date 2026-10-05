
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08dc4c9c) */
/* WARNING: Removing unreachable block (ram,0x08dc4c98) */
/* WARNING: Removing unreachable block (ram,0x08dc4ca0) */
/* WARNING: Removing unreachable block (ram,0x08dc4c94) */

void FUN_08dc4c6c(int *param_1,int param_2)

{
  int *piVar1;
  int unaff_r6;
  int in_r12;
  bool in_ZR;
  bool in_OV;
  
  if (in_OV) {
    *(undefined1 *)(unaff_r6 + -0x55b) = (char)(undefined1 *)(unaff_r6 + -0x55b);
  }
  if (!in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x08dc4c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x08dc4c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x08dc4c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x08dc4ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar1 = (int *)((int)param_1 - in_r12);
  *param_1 = (int)piVar1;
  param_1[1] = param_2;
  *piVar1 = (int)piVar1 - in_r12;
  piVar1[1] = param_2;
  (*(code *)0x0)();
  return;
}

