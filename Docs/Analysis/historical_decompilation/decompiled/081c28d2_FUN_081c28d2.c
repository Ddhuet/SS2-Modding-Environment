
/* WARNING: Control flow encountered bad instruction data */

void FUN_081c28d2(void)

{
  int unaff_r7;
  int unaff_r9;
  char in_NG;
  bool in_CY;
  char in_OV;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  if (in_NG == in_OV) {
    coprocessor_load(5,in_cr11,unaff_r7 + 0x340);
    coprocessor_load(0xc,in_cr9,&stack0x00000000);
  }
  if (in_CY) {
    coprocessor_storelong(3,in_cr15,unaff_r9 + -0x300);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

