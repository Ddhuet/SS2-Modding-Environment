
/* WARNING: Control flow encountered bad instruction data */

void FUN_08282cb8(void)

{
  int unaff_r9;
  undefined1 in_NG;
  char in_OV;
  undefined8 uVar1;
  
  uVar1 = func_0x07e8bf68();
  if ((bool)in_NG) {
    *(int *)((int)uVar1 - ((int)&stack0x00000000 >> 0x10)) = (int)((ulonglong)uVar1 >> 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x08282cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (in_NG != in_OV) {
    (**(code **)(unaff_r9 + -0xdd5))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

