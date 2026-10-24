
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e9bb52(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined1 extraout_r2;
  undefined1 extraout_r2_00;
  undefined1 extraout_r2_01;
  undefined1 extraout_r2_02;
  undefined1 extraout_r2_03;
  undefined1 *unaff_r4;
  int unaff_r5;
  undefined1 in_NG;
  undefined1 in_CY;
  char in_OV;
  
  if ((bool)in_NG) {
    func_0x0a1728b2();
    param_3 = extraout_r2;
  }
  if ((bool)in_NG) {
    func_0x09bae8b2();
    param_3 = extraout_r2_00;
  }
  if (!(bool)in_CY) {
    func_0x09ba8e32();
    param_3 = extraout_r2_01;
  }
  if ((bool)in_NG) {
    func_0x09fa8a36();
    param_3 = extraout_r2_02;
  }
  if (!(bool)in_CY) {
    func_0x092e43fa();
    param_3 = extraout_r2_03;
  }
  if (in_NG != in_OV) {
    unaff_r4 = (undefined1 *)(uint)*(byte *)(unaff_r5 + -0x442);
  }
  if (!(bool)in_NG) {
    *unaff_r4 = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

