
/* WARNING: Control flow encountered bad instruction data */

void FUN_081a842e(void)

{
  int unaff_r10;
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x07ea8c4c();
                    /* WARNING: Could not recover jumptable at 0x081a843a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!(bool)in_ZR) {
    (*(code *)(0x3e4000 - (unaff_r10 + (uint)!(bool)in_CY)))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

