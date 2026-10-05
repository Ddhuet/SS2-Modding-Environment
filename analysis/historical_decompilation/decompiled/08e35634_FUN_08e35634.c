
/* WARNING: Control flow encountered bad instruction data */

void FUN_08e35634(void)

{
  undefined4 unaff_r8;
  int in_r12;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  
  if (!in_ZR && in_NG == in_OV) {
    coprocessor_storelong(5,in_cr11,in_r12);
  }
  coprocessor_storelong(5,in_cr10,in_r12 + 0x88);
  coprocessor_function2(4,0xd,1,in_cr9,in_cr12,in_cr3);
  coprocessor_moveto(5,6,1,unaff_r8,in_cr10,in_cr4);
  coprocessor_function2(7,0xc,3,in_cr9,in_cr11,in_cr6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

