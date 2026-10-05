
/* WARNING: Control flow encountered bad instruction data */

void FUN_080846aa(undefined4 param_1,undefined4 param_2)

{
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr6;
  
  if (!in_CY || in_ZR) {
    if (in_CY && !in_ZR) {
      coprocessor_load(8,in_cr1,param_2);
    }
    if (in_CY) {
      coprocessor_function(8,6,2,in_cr1,in_cr3,in_cr6);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

