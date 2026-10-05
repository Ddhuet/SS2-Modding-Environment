
/* WARNING: Control flow encountered bad instruction data */

void FUN_08624d6e(undefined4 param_1,int param_2)

{
  undefined4 in_cr11;
  undefined4 in_cr15;
  undefined1 auStack_b4 [180];
  
  coprocessor_store2(5,in_cr11,param_2 + 0x3a4);
  coprocessor_store2(0xd,in_cr15,auStack_b4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

