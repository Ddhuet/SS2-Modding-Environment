
/* WARNING: Control flow encountered bad instruction data */

void FUN_081dfe88(undefined4 param_1,undefined4 param_2,int param_3)

{
  int extraout_r2;
  uint unaff_r9;
  uint unaff_r10;
  undefined1 in_r12;
  undefined1 extraout_r12;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr4;
  
  if (in_NG == in_OV) {
    func_0x06dcd594();
    param_3 = extraout_r2;
    in_r12 = extraout_r12;
  }
  if ((bool)in_ZR) {
    *(undefined1 *)(param_3 + 0x5ae) = in_r12;
  }
  if ((bool)in_OV) {
    in_ZR = unaff_r9 == unaff_r10 >> 10;
  }
  if (!(bool)in_ZR) {
    coprocessor_store(9,in_cr4,0x81dfe9c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

