
/* WARNING: Control flow encountered bad instruction data */

void FUN_087fa350(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int unaff_r9;
  undefined4 in_r12;
  char in_NG;
  undefined1 in_ZR;
  bool in_OV;
  undefined4 in_cr12;
  
  if (!in_OV) {
    SignedSaturate(unaff_r9 >> 10,6);
    SignedDoesSaturate(unaff_r9 >> 10,6);
  }
  if (!(bool)in_NG) {
    in_ZR = (param_3 & 0x25000000) == 0;
    in_NG = '\0';
  }
  if (!(bool)in_ZR && (bool)in_NG == in_OV) {
    coprocessor_storelong(0xc,in_cr12,in_r12);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

