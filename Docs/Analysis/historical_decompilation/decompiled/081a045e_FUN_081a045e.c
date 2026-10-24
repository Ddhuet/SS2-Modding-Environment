
/* WARNING: Control flow encountered bad instruction data */

void FUN_081a045e(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_r4;
  uint in_r12;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr14;
  
  if (in_NG == in_OV) {
    in_ZR = param_3 == 0 && (in_r12 >> 0xb == 0 && (in_r12 & 0x7ff) == 0);
  }
  if (!(bool)in_ZR) {
    coprocessor_loadlong(1,in_cr14,unaff_r4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

