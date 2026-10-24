
/* WARNING: Control flow encountered bad instruction data */

void FUN_080a18e8(int param_1)

{
  int in_r12;
  undefined1 in_NG;
  bool in_CY;
  undefined4 in_cr0;
  undefined4 in_cr2;
  
  if (!in_CY) {
    in_NG = in_r12 + param_1 * -0x10000 < 0;
  }
  if (!(bool)in_NG) {
    coprocessor_function(1,4,0,in_cr2,in_cr0,in_cr0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

