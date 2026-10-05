
/* WARNING: Control flow encountered bad instruction data */

void FUN_0814e452(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool in_ZR;
  undefined4 in_cr11;
  
  if (!in_ZR) {
    coprocessor_storelong(5,in_cr11,param_3 + 0x8c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

