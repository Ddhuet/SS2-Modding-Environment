
/* WARNING: Control flow encountered bad instruction data */

void FUN_0885c9d4(void)

{
  undefined4 unaff_r7;
  int unaff_r9;
  int unaff_r10;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr7;
  undefined4 in_cr10;
  undefined4 in_cr11;
  
  coprocessor_moveto(4,6,1,unaff_r7,in_cr10,in_cr2);
  coprocessor_moveto(6,6,1,unaff_r7,in_cr10,in_cr2);
  coprocessor_load2(6,in_cr7,unaff_r10 + 0x108);
  if (in_ZR || in_NG != in_OV) {
    coprocessor_load(4,in_cr7,unaff_r10 + 0x108);
    coprocessor_load(1,in_cr7,unaff_r9 + 0x108);
  }
  coprocessor_movefromRt(4,6,1,in_cr11,in_cr2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

