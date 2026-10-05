
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_081e0d26(void)

{
  uint unaff_r5;
  int in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined8 uVar1;
  
  if (!in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG == in_OV) {
                    /* WARNING: Could not recover jumptable at 0x081e0d32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if (in_ZR || in_NG != in_OV) {
      uVar1 = (*(code *)(unaff_r5 & 0xc3fffffc))();
      return uVar1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined8 *)(in_r12 + 4);
}

