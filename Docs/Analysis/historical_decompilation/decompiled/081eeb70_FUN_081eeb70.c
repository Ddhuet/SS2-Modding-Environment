
/* WARNING: Control flow encountered bad instruction data */

void FUN_081eeb70(void)

{
  int unaff_r9;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  if (in_NG != in_OV) {
    unaff_r9 = unaff_r9 + 0x2c0;
    coprocessor_load(5,in_cr11,unaff_r9);
  }
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_storelong(6,in_cr12,unaff_r9 + 0x308);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

