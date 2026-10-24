
/* WARNING: Control flow encountered bad instruction data */

void FUN_0828a728(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr7;
  undefined4 in_cr14;
  
  if (in_ZR) {
    return;
  }
  if (in_CY) {
    coprocessor_moveto(4,1,0,param_3,in_cr14,in_cr7);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

