
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_081929d4(undefined4 param_1,int param_2)

{
  int unaff_r4;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr12;
  
  if (in_NG != in_OV) {
    return *(undefined4 *)(unaff_r4 + 4);
  }
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_storelong(5,in_cr12,param_2 + 0x2f8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

