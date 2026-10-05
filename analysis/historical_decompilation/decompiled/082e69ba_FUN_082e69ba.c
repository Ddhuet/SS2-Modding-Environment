
/* WARNING: Control flow encountered bad instruction data */

void FUN_082e69ba(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *extraout_r2;
  undefined4 unaff_pc;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x072140da();
    param_3 = extraout_r2;
  }
  if ((bool)in_ZR) {
    *param_3 = unaff_pc;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

