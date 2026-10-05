
/* WARNING: Control flow encountered bad instruction data */

void FUN_0854f376(void)

{
  int unaff_r4;
  int unaff_r7;
  bool in_OV;
  undefined4 in_cr7;
  
  if (in_OV) {
    coprocessor_storelong(0xf,in_cr7,unaff_r4 + -0x290);
    coprocessor_load(0xf,in_cr7,unaff_r7 + -0x2f0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

