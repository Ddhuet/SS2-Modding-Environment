
/* WARNING: Control flow encountered bad instruction data */

void FUN_086db3ca(undefined4 param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  int in_r12;
  bool in_OV;
  undefined4 in_cr11;
  
  if (in_OV) {
    coprocessor_storelong(5,in_cr11,param_2 + 900);
  }
  *(undefined1 *)(in_r12 + -0xfe5) = param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

