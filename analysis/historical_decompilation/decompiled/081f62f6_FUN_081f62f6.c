
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_081f62f6(void)

{
  undefined4 unaff_r4;
  undefined4 unaff_r7;
  int unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (!in_ZR && in_NG == in_OV) {
    return *(undefined8 *)(unaff_lr + 4);
  }
  func_0x07d2e24e();
  if ((bool)in_NG) {
    coprocessor_moveto2(2,3,unaff_r4,unaff_r7,in_cr11);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

