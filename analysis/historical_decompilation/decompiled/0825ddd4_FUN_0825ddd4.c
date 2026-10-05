
/* WARNING: Control flow encountered bad instruction data */

void FUN_0825ddd4(void)

{
  undefined4 unaff_r8;
  int unaff_r10;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  if (in_NG != in_OV) {
    coprocessor_load(7,in_cr11,unaff_r10 + 0x2d8);
  }
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_storelong(4,in_cr12,unaff_r8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

