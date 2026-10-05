
/* WARNING: Control flow encountered bad instruction data */

void FUN_0899576e(undefined4 param_1,int param_2)

{
  int extraout_r1;
  int unaff_r10;
  undefined1 in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (!(bool)in_OV) {
    func_0x08102ca2();
    param_2 = extraout_r1;
  }
  if ((bool)in_ZR || in_NG != in_OV) {
    coprocessor_load(0xd,in_cr11,unaff_r10 + -0x3b8);
  }
  if ((bool)in_NG) {
    coprocessor_store(0xd,in_cr11,param_2 + 0x378);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

