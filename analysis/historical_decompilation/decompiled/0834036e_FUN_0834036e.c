
/* WARNING: Control flow encountered bad instruction data */

void FUN_0834036e(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  undefined4 in_cr11;
  
  iVar1 = param_3;
  if (in_ZR || in_NG != (bool)in_OV) {
    iVar1 = param_3 + 0x28c;
    coprocessor_storelong(5,in_cr11,param_3);
  }
  if (in_NG) {
    func_0x090c7bfa(param_1,param_2,iVar1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

