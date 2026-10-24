
/* WARNING: Control flow encountered bad instruction data */

void FUN_0800cab4(undefined4 param_1,int param_2)

{
  undefined4 unaff_r6;
  undefined4 unaff_pc;
  bool in_NG;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  if (in_NG) {
    coprocessor_store(5,in_cr11,param_2 + -0xc0);
  }
  coprocessor_load2(7,in_cr15,unaff_r6);
  coprocessor_moveto2(0,4,unaff_pc,unaff_r6,in_cr11);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

