
/* WARNING: Control flow encountered bad instruction data */

void FUN_08301c9a(undefined4 param_1,undefined4 param_2)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  char in_NG;
  undefined1 in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr12;
  
  if (in_CY) {
    func_0x0806f402();
    param_2 = extraout_r1;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x07e8845a();
    param_2 = extraout_r1_00;
  }
  if (!(bool)in_ZR && in_NG == in_OV) {
    coprocessor_storelong(4,in_cr12,param_2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

