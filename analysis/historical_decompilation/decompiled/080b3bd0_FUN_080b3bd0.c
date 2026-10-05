
/* WARNING: Control flow encountered bad instruction data */

void FUN_080b3bd0(int param_1)

{
  int in_r12;
  bool in_NG;
  bool in_CY;
  undefined4 in_cr0;
  undefined4 in_cr2;
  
  if (in_NG) {
    return;
  }
  if (in_CY || -1 < in_r12 + param_1 * -0x10000) {
    coprocessor_function(1,4,0,in_cr2,in_cr0,in_cr0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

