
/* WARNING: Control flow encountered bad instruction data */

void FUN_088616e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r6;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  if (!(bool)in_NG) {
    SignedSaturate(unaff_r6 >> 10,0xe);
    SignedDoesSaturate(unaff_r6 >> 10,0xe);
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x09d83484();
    param_3 = extraout_r2;
  }
  if (in_NG == in_OV) {
    func_0x06b079ac();
    param_3 = extraout_r2_00;
  }
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_NG != in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x0733f560(*(undefined4 *)(unaff_r6 + 4),*(undefined4 *)(*(int *)(unaff_r6 + 0x14) + -0x24)
                    ,param_3,*(undefined4 *)(*(int *)(unaff_r6 + 0x14) + -0x20));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

