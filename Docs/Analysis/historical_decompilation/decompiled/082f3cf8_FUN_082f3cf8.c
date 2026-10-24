
/* WARNING: Control flow encountered bad instruction data */

void FUN_082f3cf8(void)

{
  int unaff_r5;
  int unaff_r8;
  int unaff_r9;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr5;
  undefined4 in_cr11;
  
  if (in_NG == in_OV) {
    coprocessor_load(5,in_cr11,unaff_r9 + 0xc);
  }
  func_0x086ec77a();
  if ((bool)in_ZR || in_NG != in_OV) {
    software_interrupt(0x90dc08);
  }
  if (!(bool)in_NG) {
    func_0x09d38d38();
  }
  software_interrupt(0x36605a);
                    /* WARNING: Could not recover jumptable at 0x082f3d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if ((bool)in_OV) {
    (*(code *)(unaff_r5 + unaff_r8 * -0x4000000))();
    return;
  }
  coprocessor_loadlong2(3,in_cr5,unaff_r9);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

