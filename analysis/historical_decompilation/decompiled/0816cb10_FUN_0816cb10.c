
/* WARNING: Control flow encountered bad instruction data */

void FUN_0816cb10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_r4;
  undefined1 unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_loadlong(5,in_cr11,param_3);
    *(undefined1 *)(unaff_r4 + 0x9b7) = unaff_lr;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

