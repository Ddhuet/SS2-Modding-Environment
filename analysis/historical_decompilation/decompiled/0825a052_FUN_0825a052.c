
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825a052(undefined4 param_1,int param_2)

{
  int iVar1;
  int unaff_r6;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr7;
  undefined4 in_cr11;
  
  iVar1 = param_2;
  if (in_NG != in_OV) {
    iVar1 = param_2 + 0x2dc;
    coprocessor_store(5,in_cr11,param_2);
  }
  if (in_ZR) {
    coprocessor_moveto(0,0,7,param_1,in_cr7,in_cr11);
  }
  func_0x097f8cbe(*(undefined4 *)(unaff_r6 + -0x10),iVar1,*(undefined4 *)(unaff_r6 + -0xc),
                  *(undefined4 *)(unaff_r6 + -8));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

