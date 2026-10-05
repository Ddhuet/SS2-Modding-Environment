
/* WARNING: Control flow encountered bad instruction data */

void FUN_08184710(void)

{
  undefined4 in_r3;
  int unaff_r6;
  bool in_NG;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  if (in_NG) {
    coprocessor_movefromRt(5,0,4,in_cr11,in_cr15);
  }
  *(undefined4 *)(unaff_r6 + -0xb18) = in_r3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

