
/* WARNING: Control flow encountered bad instruction data */

void FUN_082878ec(undefined4 param_1)

{
  undefined4 in_cr11;
  
  coprocessor_loadlong2(5,in_cr11,param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

