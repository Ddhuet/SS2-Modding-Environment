
/* WARNING: Control flow encountered bad instruction data */

void FUN_08627508(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 in_cr7;
  
  if (!SBORROW4(param_2,param_1 << 0xb)) {
    coprocessor_load(0xc,in_cr7,param_4 + 0x84);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

