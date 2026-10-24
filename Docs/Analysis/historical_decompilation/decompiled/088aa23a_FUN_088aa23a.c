
/* WARNING: Control flow encountered bad instruction data */

void FUN_088aa23a(void)

{
  uint unaff_r5;
  undefined4 unaff_pc;
  bool in_NG;
  undefined4 in_cr5;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (!in_NG) {
    unaff_r5 = (uint)*(byte *)(unaff_r5 - 0x665);
  }
  coprocessor_moveto(5,7,2,unaff_r5,in_cr14,in_cr5);
  coprocessor_moveto(0xe,7,7,unaff_pc,in_cr14,in_cr14);
  coprocessor_moveto(0xf,7,7,unaff_pc,in_cr14,in_cr14);
  coprocessor_moveto(0xf,7,7,unaff_pc,in_cr14,in_cr15);
  coprocessor_movefromRt(0xf,7,7,in_cr14,in_cr15);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

