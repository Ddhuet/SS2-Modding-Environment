
/* WARNING: Control flow encountered bad instruction data */

void FUN_0860c214(int param_1,undefined4 param_2)

{
  bool in_NG;
  undefined1 in_ZR;
  undefined4 in_cr5;
  
  if (in_NG) {
    param_1 = func_0x0a29ebbc(param_1,param_2);
  }
  if (!(bool)in_ZR) {
    coprocessor_loadlong(2,in_cr5,param_1 + -0x13c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

