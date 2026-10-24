
/* WARNING: Control flow encountered bad instruction data */

void FUN_08319212(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int unaff_r4;
  undefined4 *unaff_r7;
  int unaff_r8;
  undefined4 unaff_r9;
  int unaff_r11;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr14;
  
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_CY || in_ZR) {
    if (in_ZR || in_NG != in_OV) {
      unaff_r11 = (int)((ulonglong)((longlong)unaff_r8 * (longlong)unaff_r4) >> 0x20);
    }
    coprocessor_storelong(5,in_cr14,unaff_r9);
                    /* WARNING: Could not recover jumptable at 0x08319226. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if (!in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0831922a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (!in_CY) {
        iVar1 = param_2;
        if (!in_NG) {
          param_4 = *(undefined4 *)(param_2 + -0x18);
          param_3 = *(undefined4 *)(param_2 + -0x1c);
          iVar1 = *(int *)(param_2 + -0x20);
          param_1 = *(undefined4 *)(param_2 + -0x24);
        }
        if (in_OV) {
          func_0x0a173bfa(param_1,iVar1,param_3,param_4);
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      (*(code *)*unaff_r7)();
      return;
    }
    (*(code *)(0xf100 - (unaff_r11 + (uint)!in_CY)))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

