
void FUN_081a6e5c(void)

{
  int unaff_r5;
  bool in_CY;
  undefined4 in_cr6;
  undefined4 in_cr11;
  undefined4 in_cr13;
  
  coprocessor_function(5,0xe,6,in_cr11,in_cr6,in_cr13);
                    /* WARNING: Could not recover jumptable at 0x081a6e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(unaff_r5 - (!in_CY + 0xf80)))();
  return;
}

