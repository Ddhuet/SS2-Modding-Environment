
/* WARNING: Control flow encountered bad instruction data */

void FUN_08253f44(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool in_CY;
  undefined4 in_cr11;
  
  if (in_CY) {
    coprocessor_loadlong(5,in_cr11,param_3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

