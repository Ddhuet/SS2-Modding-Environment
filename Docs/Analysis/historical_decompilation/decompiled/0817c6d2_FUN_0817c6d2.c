
/* WARNING: Control flow encountered bad instruction data */

void FUN_0817c6d2(void)

{
  int unaff_r5;
  int unaff_r6;
  int unaff_r9;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined8 uVar1;
  
  if (in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = func_0x079bf7da();
  if (in_ZR) {
    unaff_r9 = *(int *)(unaff_r6 + -4);
    unaff_r5 = *(int *)(unaff_r6 + -0x14);
    uVar1 = *(undefined8 *)(unaff_r6 + -0x24);
  }
                    /* WARNING: Could not recover jumptable at 0x0817c6de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (in_ZR || in_NG != in_OV) {
    (*(code *)(unaff_r9 - (unaff_r5 * 0x4000000 + (uint)!(bool)in_CY)))
              ((int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

