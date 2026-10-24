
/* WARNING: Control flow encountered bad instruction data */

void FUN_08d2dbe2(void)

{
  undefined1 unaff_r5;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined1 *unaff_r10;
  bool in_NG;
  bool in_CY;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  if (!in_CY) {
    coprocessor_store(5,in_cr11,unaff_r9);
    coprocessor_storelong(9,in_cr9,unaff_r8);
  }
  if (in_NG) {
    coprocessor_movefromRt(7,6,in_cr12);
    coprocessor_movefromRt2(7,6,in_cr12);
  }
  else {
    *unaff_r10 = unaff_r5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

