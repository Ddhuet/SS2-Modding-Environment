
/* WARNING: Control flow encountered bad instruction data */

void FUN_083400fa(void)

{
  int unaff_r7;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  
  if (!in_ZR && in_NG == in_OV) {
    func_0x0726d85a();
  }
                    /* WARNING: Could not recover jumptable at 0x083400fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!(bool)in_NG) {
    (*(code *)-(unaff_r7 + (uint)!(bool)in_CY))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

