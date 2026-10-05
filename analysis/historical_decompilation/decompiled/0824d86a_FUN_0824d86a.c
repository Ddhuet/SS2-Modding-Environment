
/* WARNING: Control flow encountered bad instruction data */

void FUN_0824d86a(undefined4 param_1,int param_2)

{
  int unaff_r10;
  undefined1 unaff_r11;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG != in_OV) {
    return;
  }
  if (!in_ZR && in_NG == in_OV) {
    *(undefined1 *)(param_2 + 0xebb) = unaff_r11;
  }
  UnsignedSaturate(unaff_r10 >> 0x1f,3);
  UnsignedDoesSaturate(unaff_r10 >> 0x1f,3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

