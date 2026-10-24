
/* WARNING: Control flow encountered bad instruction data */

void FUN_081f2bce(void)

{
  undefined4 in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr8;
  undefined4 in_cr14;
  
  if (in_NG == in_OV) {
    if (!in_ZR && in_NG == in_OV) {
      coprocessor_moveto(3,6,5,in_r12,in_cr8,in_cr14);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

