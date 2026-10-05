
/* WARNING: Control flow encountered bad instruction data */

void FUN_08647670(undefined4 param_1,int param_2)

{
  bool in_NG;
  bool in_ZR;
  undefined4 in_cr0;
  undefined4 in_cr4;
  undefined4 in_cr9;
  undefined4 in_cr13;
  
  if (in_NG) {
    coprocessor_function(0xf,0xc,6,in_cr4,in_cr13,in_cr9);
  }
  if (in_ZR) {
    coprocessor_storelong(0xc,in_cr0,param_2 + 0x1c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

