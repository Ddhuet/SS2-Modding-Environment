
/* WARNING: Control flow encountered bad instruction data */

void FUN_08218df2(undefined4 param_1,undefined4 param_2)

{
  undefined4 unaff_r10;
  bool in_OV;
  undefined4 in_cr7;
  
  if (in_OV) {
    coprocessor_moveto2(8,0xd,param_2,unaff_r10,in_cr7);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

