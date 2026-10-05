
/* WARNING: Control flow encountered bad instruction data */

void FUN_081d5b92(undefined4 param_1,int param_2)

{
  undefined4 unaff_r7;
  char in_NG;
  char in_OV;
  undefined4 in_cr11;
  
  if (in_NG != in_OV) {
    coprocessor_storelong(5,in_cr11,param_2 + 0x2c4);
  }
  coprocessor_loadlong(0xf,in_cr11,unaff_r7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

