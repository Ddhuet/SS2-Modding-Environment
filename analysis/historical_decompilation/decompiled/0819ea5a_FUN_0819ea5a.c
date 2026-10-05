
/* WARNING: Control flow encountered bad instruction data */

void FUN_0819ea5a(void)

{
  int unaff_r5;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr10;
  
  if (in_NG != in_OV) {
    if (in_NG == in_OV) {
      coprocessor_store(10,in_cr10,unaff_r5 + 0x2a4);
    }
    if (!in_ZR && in_NG == in_OV) {
      software_interrupt(0xd9d7c5);
    }
    if (!in_ZR) {
      func_0x086e027e();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

